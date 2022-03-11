/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dtoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: severi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 13:56:19 by severi            #+#    #+#             */
/*   Updated: 2022/03/11 02:00:27 by severi           ###   ########.fr       */
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
		if (i == 1)
			ft_putchar(' '); // Space after sign field
		if (i == 12)
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
	ft_printf("ft_printf: %X %X %X\n",sign_field,exponent_field,fraction_field);
	printf("printf: %X %X %llX\n",sign_field,exponent_field,fraction_field);

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

int	addints(int a, int b)
{
	int carry;
	int result;

	carry  = (a & b) << 1;
	result = a ^ b;
	if (carry == 0)
		return (result);
	else
		addints(carry, result);
	return (result);
}


char	*ft_strrev2(const char *s, int len)
{
	char	*reversed;
	//size_t	len;

	//len = ft_strlen(s);
	reversed = ft_strnew((size_t)len);

	while(len != 0)
	{
		len--;
		reversed[len] = *s;
	//	printf("s: %c - len: %i\n", *s, len);
		s++;
	//	printf("s: %c - len: %i\n", *s, len);
	}
	/*if (*s == '\0')
	{
		reversed[len] = *s;
	}*/
	return (reversed);
}

char *bigint_add(char *s1, char *s2)
{
	//data_struct[1] = 0;
	// hex xC0 x80 x80 x00 
	// dec 134 217 728
	// hex xFF xFF XFF x7F
	// dec 268 435 455
	//
	// 35 491 925 974 746 240

	//int a = 268435455 * 4;
	//count_digits();
	char *s3;
	int len1;
	int len2;
	int len3;

	len1 = (int)ft_strlen(s1);
	len2 = (int)ft_strlen(s2);
	
	if((s1[len1-1] & 0x80) == 128)
		len1++;
	if((s1[len2-1] & 0x80) == 128)
		len2++;
	len3 = len1 + 1;
	if (len2 > len1)
		len3 = len2 + 1;
	s3 = ft_strnew((size_t)len3);
//	printf("len3 = %d\n", len3);
	//if(s1[0] == 0b10000000)
	int a;
	int b;
	int c;
	int i;
/*	printf("\ns1[0]: %hhu -char- ", s1[0]);
	printf("s1[1]: %hhu -char- ", s1[1]);
	printf("s1[2]: %hhu -char- ", s1[2]);
	printf("s1[3]: %hhu -char- \n", s1[3]);
	printf("\ns2[0]: %hhu -char- ", s2[0]);
	printf("s2[1]: %hhu -char- ", s2[1]);
	printf("s2[2]: %hhu -char- ", s2[2]);
	printf("s2[3]: %hhu -char- \n", s2[3]);
*/	s1 = ft_strrev2(s1, len1);
	s2 = ft_strrev2(s2, len2);
/*	printf("\ns1[0]: %hhu -char- ", s1[0]);
      printf("s1[1]: %hhu -char- ", s1[1]);
	  printf("s1[2]: %hhu -char- ", s1[2]);
	printf("s1[3]: %hhu -char- \n", s1[3]);
	printf("\ns2[0]: %hhu -char- ", s2[0]);
	  printf("s2[1]: %hhu -char- ", s2[1]);
	  printf("s2[2]: %hhu -char- ", s2[2]);
	printf("s2[3]: %hhu -char- \n", s2[3]);
*/	i = 0;
	while (i != (len3 - 1))
	{
		//printf("inside a while loop: %s :");
		if (i <= len1)
			a = s1[i] & 0x7F;
		else
			a = 0;
		//printf("s1[%i] is %hhu and-a: is %hhu\n",i, s1[i], a);
		if (i <= len2)
			b = s2[i] & 0x7F;
		else
			b = 0;
		//printf("s2[%i] is %hhu and-b: is %hhu\n",i, s2[i], b);
		//c = addints(a,b);		// if there is 1 from prev
		c = a + b;
		printf("printing %d * c : %d", i, c);
		//printf("add ints 13 and 10 = %i\n", addints(13,10));
		if (c > 127 + s3[i])		// 127-> 128 -> overflow?
		{
				s3[i+1] = 1;
				//if (i + 1 == (len3 - 1))
				//	len3++;
		}
		c = c | 0x80;
		s3[i] = (char)((int)s3[i] + c);
		printf(" and saved was: %hhu \n", s3[i]);
		i++;
	}
	s3[i] |= (char)0x80;
	s3[0] &= (char)0x7F;
	if (s3[i] != 0)
		s3 = ft_strrev2(s3, len3);
	else
		s3 = ft_strrev2(s3, (len3 - 1));

	//	s3 = ft_strrev(s3, 5);
	//s3[ft_strlen(s3)] &= 0x7F;
	//	temp = 0;
//	c = s1[0] & 0x01;
//	c = s2[0] & 0x01;
//	temp = ~
/*
	carry = (a & b) << 1;

	if (s1[0] == 0x01 || s2=[0] = 0x01)
	{
		if (s1[0] == 0x01 && s2=[0] = 0x01)
			s3[0] = s3[0] + 1;
		else
			s3[0] = 1
	}
	if (s1[0] == 0x02 && s2=[0] = 0x02)
	else[s]
*/	
	return (s3);
}

void get_exponent(unsigned short exponent)
{
	// 0b10000000000 = 2 ^ 1 = 2
	//
	// n - 1023
	//int modulo = 0;
	unsigned int exp_as_int = 0;
	
	exp_as_int = (unsigned int)(exponent - 1023);	
	//modulo = exponent % 2;

	//ft_putstr("Modulo: ");
	//ft_putnbr(modulo);
	ft_putstr(" exponent: ");
	ft_putnbr((int)exp_as_int);
	//ft_printf("\n and with ft_printf: %i \n", exp_as_int);
	//printf("and with printf: %i", exp_as_int);
	ft_putstr(" \n");
}

static size_t	count_digits_ull(unsigned long long c)
{
	size_t	digits;

	digits = 0;
	while (c > 0)
	{
		digits++;
		c /= 10;
	}
	return (digits);
}

void	get_fraction(unsigned long long fraction)
{
	//printf("get fraction: %lli\n", fraction);

	int	i;
	long long int li;

	i = 0;
	li = 2;
	size_t j = count_digits_ull(fraction);

	ft_putnbr((int)j);	

	double far = 0;
	double res = 0;	

	while (i < 50)
	{
		far = 1 / (double)li;
		res = res + far;
		i++;
//		printf(":%lli-%f", li, far);
		li = li * 2;
	}

	//printf("2 ^ 360 = %lli && and res = %f\n", li, res);
	
	res = res * (2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2);
	res = 1 / res;
	//printf("potent = %lli && and res = %f\n", li, res);

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
	get_fraction(fraction);	

	s[0] = (char)sign;

//	ft_putstr("Here there be dragon: ");
//	ft_putstr(s);
//	ft_putstr(" \n");
	// BigInt - 0 - 999 999 999
	//
	// [000 000 000]...[000(.)000 000][000 000 000][222 044 604][925 031 308]
	//
	//
	multiplyby2(data_struct);
	//	printf("bigint as hex: a: %hhu,%hhu,%hhu,%hhu and b: %hhu,%hhu,%hhu,%hhu equals c: %hhu,%hhu,%hhu,%hhu \n", s1[0], s1[1], s1[2], s1[3], s2[0], s2[1], s2[2], s2[3], s3[0], s3[1], s3[2], s3[3]);

	print_raw_double_binary(d);
	print_raw_double_hex(d);	
	return	(s);
}
