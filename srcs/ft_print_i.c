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
	char	*s;
	t_flags *flag_s;
	char	c;

	c = 32;
	flag_s = return_flags(flags);
	s = ft_itoa(d);
	if (flag_s->space == 1 && d > 0 && flag_s->plus == 0)
		chars_printed += print_c(' ');
	if (flag_s->zero == 1)
		c = '0';
	if (flag_s->minus == 1)
	{
		if (flag_s->plus == 1)
		{
			if (d > 0)
				chars_printed += print_c('+');
		}
		chars_printed += ft_putnchar(s, ft_strlen(s));
		chars_printed += ft_print_c_ntimes(c, flag_s->width - chars_printed);
	}
	else
	{
		chars_printed += ft_print_c_ntimes(c, flag_s->width - ft_strlen(s) - flag_s->plus - chars_printed);
		if (flag_s->plus == 1)
		{
			if (d > 0)
				chars_printed += print_c('+');
		}
		chars_printed += ft_putnchar(s, ft_strlen(s));
	}
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