/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: severi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 01:47:10 by severi            #+#    #+#             */
/*   Updated: 2022/05/18 18:45:13 by ssavukos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

uintmax_t	unsigned_conv(t_flags *flag_s, va_list ap)
{
	uintmax_t		i;

	if (flag_s->spec == 0)
		i = (unsigned int) va_arg(ap, unsigned int);
	else if (flag_s->spec == 1)
		i = (unsigned long int) va_arg(ap, unsigned long int);
	else if (flag_s->spec == 2)
		i = (unsigned long long int) va_arg(ap, unsigned long long int);
	else if (flag_s->spec == 4)
		i = (unsigned short int) va_arg(ap, unsigned int);
	else if (flag_s->spec == 5)
		i = (unsigned char) va_arg(ap, unsigned int);
	else
		i = (unsigned int) va_arg(ap, unsigned int);
	return (i);
}

int	print_u(const char *flags, va_list ap, int chars_printed)
{
	char			*s;
	uintmax_t		u;
	t_flags			*flag_s;

	flag_s = return_flags(flags);
	u = unsigned_conv(flag_s, ap);
	s = ft_utoa(u);
	chars_printed += print_before(flag_s, chars_printed, s, 'u');
	return (chars_printed);
}

int	print_o(const char *flags, va_list ap, int chars_printed)
{
	char			*s;
	unsigned int	i;
	t_flags			*flag_s;

	flag_s = return_flags(flags);
	i = (unsigned int) va_arg(ap, unsigned int);
	if (i == 0)
	{
		if (flag_s->width != 0)
			return (print_before(flag_s, chars_printed, "", 'o'));
		else if (i == 0 && flag_s->prec == 0)
			return (chars_printed += print_before(flag_s, chars_printed, "", 'o'));
		return (chars_printed += print_c('0'));
	}
	s = ft_basetoa(i, 8, ' ');
	chars_printed += print_before(flag_s, chars_printed, s, 'o');
	return (chars_printed);
}

int	print_x(const char *flags, va_list ap, int chars_printed)
{
	char		*s;
	t_flags		*flag_s;
	uintmax_t	i;

	flag_s = return_flags(flags);
	i = unsigned_conv(flag_s, ap);
	if (i == 0 && flag_s->prec != 0)
		return (chars_printed += print_c('0'));
	else if (i == 0 && flag_s->prec == 0 && flag_s->sharp == 1)
		return (chars_printed);
	else if (i == 0 && flag_s->prec == 0)
		return (chars_printed += print_before(flag_s, chars_printed, "", 32));
	s = ft_basetoa(i, 16, ' ');
	chars_printed += print_before(flag_s, chars_printed, s, 'x');
	if (i == 0)
		chars_printed += print_c('0');
	return (chars_printed);
}

int	print_big_x(const char *flags, va_list ap, int chars_printed)
{
	char		*s;
	int			j;
	t_flags		*flag_s;
	uintmax_t	i;

	j = 0;
	flag_s = return_flags(flags);
	i = unsigned_conv(flag_s, ap);
	if (i == 0)
		return (chars_printed += print_c('0'));
	s = ft_basetoa(i, 16, ' ');
	while (s[j] != '\0')
	{
		s[j] = (char)ft_toupper(s[j]);
		j++;
	}
	chars_printed += print_before(flag_s, chars_printed, s, 'X');
	if (i == 0)
		chars_printed += print_c('0');
	return (chars_printed);
}
