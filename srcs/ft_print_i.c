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

	flag_s = return_flags(flags);
	s = ft_itoa(d);
	chars_printed = print_before(flag_s, chars_printed, s, 32);
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