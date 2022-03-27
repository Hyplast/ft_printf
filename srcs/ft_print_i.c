/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_i.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: severi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 01:47:10 by severi            #+#    #+#             */
/*   Updated: 2022/03/26 01:50:01 by severi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_b(const char *flags, va_list ap, int chars_printed)
{
	char	*s;
	unsigned int	i;

	i = (unsigned int)flags[0];
	i = (unsigned int) va_arg(ap, unsigned int);
	s = ft_basetoa(i, 2, ' ');
	chars_printed += ft_putnchar(s, ft_strlen(s));
	return (chars_printed);
}

int	print_c(char c)
{
	ft_putchar(c);
	return (1);
}

int	print_d(const char *flags, int d, int chars_printed)
{
	char *s;
	int		num;
	int		num2;
	int		num3;
	t_flags *flag_s;

	num = -1;
	num2 = -1;
	num3 = -1;
	flag_s = return_flags(flags);
	ft_putstr("flasg len ");
	ft_putnbr(flag_s->len);
	ft_putstr("-\n");
	num = ft_lookforchar(flags, '0');
	num2 = ft_lookforchar(flags, 'd');
	if(num >= 0 && num2 != 0)
	{
		num3 = ft_atoi(ft_strsub(flags, 0, num));
	}
	chars_printed += ft_print_c_ntimes('0', num3);

	//ft_putstr(flags);
	s = ft_itoa(d);
	//if (ft_strlen(s) < )
	chars_printed += ft_putnchar(s, ft_strlen(s));
	return (chars_printed);
}

int	print_i(int i)
{
	char *s;
	int	chars_printed;

	chars_printed = 0;
	//ft_putstr(flags);
	s = ft_itoa(i);
	chars_printed = ft_putnchar(s, ft_strlen(s));
	return (chars_printed);
}

// TODO: Does it work?
int	print_u(const char *flags, va_list ap, int chars_printed)
{
	char	*s;
	unsigned int	u;

	u = (unsigned int)flags[0];
	u = (unsigned int) va_arg(ap, unsigned int);
	//s = ft_basetoa(i, 10, ' ');
	s = ft_utoa(u);
		chars_printed += ft_putnchar(s, ft_strlen(s));
	return (chars_printed);
}