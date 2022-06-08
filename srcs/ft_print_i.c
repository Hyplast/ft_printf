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

int	print_char(t_flags *flag_s, char c, int chars_printed)
{
	char		*temp;

	if (c == '\0')
		return (print_c('\0'));
	temp = ft_strnew(1);
	temp[0] = c;
	chars_printed += print_before(flag_s, chars_printed, temp, 'c');
	ft_strdel(&temp);
	return (chars_printed);
}

int	print_s(t_flags *flag_s, char *s, int chars_printed)
{
	char		*temp;

	if (s == NULL)
		return (chars_printed += print_before(flag_s,
				chars_printed, "(null)", 's'));
	if (flag_s->prec < (int)ft_strlen(s) && flag_s->prec != -1)
	{
		temp = ft_strsub(s, 0, (flag_s->prec));
		chars_printed += print_before(flag_s, chars_printed, temp, 's');
		ft_strdel(&temp);
	}
	else
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
	if (ptr == 0)
		return (ft_putnchar("(nil)", ft_strlen("(nil)")));
	s = ft_basetoa((long unsigned int)ptr, 16, ' ');
	chars_printed = ft_putnchar("0x", 2);
	chars_printed += ft_putnchar(s, ft_strlen(s));
	ft_strdel(&s);
	return (chars_printed);
}

int	print_d(t_flags *flag_s, va_list ap, int chars_printed)
{
	char		*s;
	uintmax_t	i;

	i = signed_conv(flag_s, ap);
	if (i == 0 && flag_s->prec == 0 && flag_s->sharp == 1)
		return (chars_printed);
	else if (i == 0 && flag_s->prec == 0)
		return (chars_printed += print_before(flag_s, chars_printed, "", 32));
	if (flag_s->spec == 1)
		s = ft_litoa(i);
	else if (flag_s->spec == 2)
		s = ft_llitoa(i);
	else
		s = ft_itoa(i);
	chars_printed = print_before(flag_s, chars_printed, s, 'd');
	if (ft_strcmp(s, "-9223372036854775808") != 0)
		ft_strdel(&s);
	return (chars_printed);
}

int	print_i(t_flags *flag_s, va_list ap, int chars_printed)
{
	char		*s;
	uintmax_t	i;

	i = signed_conv(flag_s, ap);
	if (i == 0 && flag_s->prec == 0 && flag_s->sharp == 1)
		return (chars_printed);
	else if (i == 0 && flag_s->prec == 0)
		return (chars_printed += print_before(flag_s, chars_printed, "", 32));
	if (flag_s->spec == 1)
		s = ft_litoa(i);
	else if (flag_s->spec == 2)
		s = ft_llitoa(i);
	else
		s = ft_itoa(i);
	chars_printed = print_before(flag_s, chars_printed, s, 'd');
	if (ft_strcmp(s, "-9223372036854775808") != 0)
		ft_strdel(&s);
	return (chars_printed);
}
