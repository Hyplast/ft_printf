/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_i.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: severi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 01:47:10 by severi            #+#    #+#             */
/*   Updated: 2022/05/22 15:00:32 by severi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

uintmax_t	signed_conv(t_flags *flag_s, va_list ap)
{
	uintmax_t		i;

	if (flag_s->spec == 0)
		i = (signed int) va_arg(ap, signed int);
	else if (flag_s->spec == 1)
		i = (signed long int) va_arg(ap, signed long int);
	else if (flag_s->spec == 2)
		i = (signed long long int) va_arg(ap, signed long long int);
	else if (flag_s->spec == 4)
		i = (signed short int) va_arg(ap, signed int);
	else if (flag_s->spec == 5)
		i = (signed char) va_arg(ap, unsigned int);
	else
		i = (signed int) va_arg(ap, signed int);
	return (i);
}

int	print_char(const char *flags, char c, int chars_printed)
{
	t_flags		*flag_s;
	char		*temp;


	flag_s = return_flags(flags);
	if (c == '\0')
	{
		chars_printed += print_c('\0');
		return (chars_printed = print_before(flag_s, chars_printed, "", 'c'));
	}
	temp = ft_strnew(1);
	temp[0] = c;
	chars_printed += print_before(flag_s, chars_printed, temp, 'c');
	return (chars_printed);
}

int	print_s(const char *flags, char *s, int chars_printed)
{
	t_flags		*flag_s;
	char		*temp;

	flag_s = return_flags(flags);
	if (s == NULL)
		return (chars_printed += print_before(flag_s, chars_printed, "(null)", 's'));
	if (flag_s->prec < (int)ft_strlen(s) && flag_s->prec != -1)
	{
		temp = ft_strsub(s, 0, (flag_s->prec));
		s = temp;
	}
	chars_printed += print_before(flag_s, chars_printed, s, 's');
	return (chars_printed);
}

int	print_p(void *pointer)
{
	char	*s;
	size_t	ptr;
	int		chars_printed;

	ptr = (size_t)pointer;
	chars_printed = 0;
	s = ft_basetoa((long unsigned int)ptr, 16, ' ');
	chars_printed = ft_putnchar("0x", 2);
	chars_printed += ft_putnchar(s, ft_strlen(s));
	return (chars_printed);
}

int	print_d(const char *flags, va_list ap, int chars_printed)
{
	char	*s;
	t_flags	*flag_s;
	uintmax_t	i;

	flag_s = return_flags(flags);
	i = signed_conv(flag_s, ap);
	if (flag_s->spec == 1)
		s = ft_litoa(i);
	else if (flag_s->spec == 2)
		s = ft_llitoa(i);
	else
		s = ft_itoa(i);
	//if (i == 0 && flag_s->prec != 0)
		//return (chars_printed += print_c('0'));
	if (i == 0 && flag_s->prec == 0 && flag_s->sharp == 1)
		return (chars_printed);
	else if (i == 0 && flag_s->prec == 0)
		return (chars_printed += print_before(flag_s, chars_printed, "", 32));
	chars_printed = print_before(flag_s, chars_printed, s, 'd');
	return (chars_printed);
}

int	print_i(const char *flags, int d, int chars_printed)
{
	char	*s;
	t_flags	*flag_s;

	flag_s = return_flags(flags);
	s = ft_itoa(d);
	chars_printed = print_before(flag_s, chars_printed, s, 'i');
	return (chars_printed);
}
