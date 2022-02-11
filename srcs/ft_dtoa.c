/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dtoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: severi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 13:56:19 by severi            #+#    #+#             */
/*   Updated: 2022/02/11 15:58:54 by severi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include <stdio.h>

//void	create_string(double nb, char *rest, int i)

void	print_raw_double_binary(double d)
{
	unsigned long long	*double_as_int;
	int					i;

	i = 0;
	double_as_int = (unsigned long long *)&d;
	
	while (i <= 63)
	{
		if (i==1)
			ft_putchar(' '); // Space after sign field
		if (i==12)
			ft_putchar(' '); // Space after exponent field
		if ((*double_as_int >> (63-i)) & 1)
			ft_putchar('1');
		else
			ft_putchar('0');
		i++;
	}
	ft_putchar('\n');
}

void	parse_double(double d, unsigned char *sign,
 unsigned short *exponent, unsigned long long *fraction)
{
	unsigned long long	*double_as_int;

	double_as_int = (unsigned long long *)&d;
	*sign = (unsigned char)(*double_as_int >> 63);
	*exponent = (unsigned short)(*double_as_int >> 52 & 0x7FF);
	*fraction = *double_as_int & 0x000FFFFFFFFFFFFFULL;
}

void print_raw_double_hex(double d)
{
	unsigned char		sign_field;
	unsigned short		exponent_field;
	unsigned long long	fraction_field;

	parse_double(d, &sign_field, &exponent_field, &fraction_field);
	printf("%X %X %llX\n",sign_field,exponent_field,fraction_field);
}
/*
double frexp(double x, int *exponent)
{
	double ret;
	double temp;
	unsigned long long int	i;	
	
	i = 0;
	
	return (ret)
}
*/
static int multiplyby2(int data_struct[])
{
	data_struct[1] = 0;
	return (0);
}

static int add(int data_struct[])
{
	data_struct[1] = 0;
	return (0);
}

void get_exponent(unsigned short exponent)
{
	// 0b10000000000 = 2 ^ 1 = 2
	//
	// n - 1023
	int modulo = 0;
	unsigned int exp_as_int = 0;
	
	exp_as_int = (unsigned int)(exponent - 1023);	
	modulo = exponent % 2;

	ft_putstr("Modulo: ");
	ft_putnbr(modulo);
	ft_putstr(" exponent: ");
	ft_putnbr((int)exp_as_int);
	ft_printf("\n and with ft_printf: %i \n", exp_as_int);
	printf("and with printf: %i", exp_as_int);
	ft_putstr(" \n");
}

char	*ft_dtoa(double d)
{
	char	*s;
	int		data_struct[150];
	unsigned char		sign;
	unsigned short		exponent;
	unsigned long long	fraction;

	s = ft_strnew(20);
	parse_double(d, &sign, &exponent, &fraction);

	get_exponent(exponent);	
	
	s[0] = (char)sign;

	ft_putstr("Here there be dragon: ");
	ft_putstr(s);
	ft_putstr(" \n");
	// BigInt - 0 - 999 999 999
	//
	// [000 000 000]...[000(.)000 000][000 000 000][222 044 604][925 031 308]
	//
	//
	multiplyby2(data_struct);
	add(data_struct);
	
	print_raw_double_binary(d);
	//print_raw_double_hex(d);
	
	return	(s);
}
