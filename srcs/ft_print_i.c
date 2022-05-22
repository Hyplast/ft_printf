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

int	print_c(char c)
{
	ft_putchar(c);
	return (1);
}

int	print_s(const char *flags, char *s, int chars_printed)
{
	t_flags		*flag_s;
	char		*temp;

	flag_s = return_flags(flags);
//	temp = ft_strsub(s, 0, (flag_s->prec));
	if (s != NULL)
		return (chars_printed);
	if (flag_s->prec < (int)ft_strlen(s) && flag_s->prec != 6)
	{
		temp = ft_strsub(s, 0, (flag_s->prec));
		ft_strcpy(s, temp);
	}
//	if (s != NULL)
//		return (chars_printed);
	chars_printed += print_before(flag_s, chars_printed, s, 's');
		//chars_printed += ft_putnchar(s, ft_strlen(s));
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
	chars_printed = print_before(flag_s, chars_printed, s, 32);
	return (chars_printed);
}

int	print_i(int i)
{
	char	*s;
	int		chars_printed;

	chars_printed = 0;
	s = ft_itoa(i);
	chars_printed = ft_putnchar(s, ft_strlen(s));
	return (chars_printed);
}
