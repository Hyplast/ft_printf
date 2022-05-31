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

int	print_char(const char *flags, char c, int chars_printed)
{
	t_flags		*flag_s;
	char		*temp;

	temp = ft_strnew(1);
	temp[0] = c;
	flag_s = return_flags(flags);
	chars_printed += print_before(flag_s, chars_printed, temp, 'c');
	return (chars_printed);
}

int	print_s(const char *flags, char *s, int chars_printed)
{
	t_flags		*flag_s;
	char		*temp;

	flag_s = return_flags(flags);
	if (s == NULL)
		return (chars_printed);
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

int	print_d(const char *flags, int d, int chars_printed)
{
	char	*s;
	t_flags	*flag_s;

	flag_s = return_flags(flags);
	s = ft_itoa(d);
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
