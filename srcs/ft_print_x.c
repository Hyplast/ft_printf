/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: severi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 01:47:10 by severi            #+#    #+#             */
/*   Updated: 2022/03/26 01:50:01 by severi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_s(char *s, int chars_printed)
{
	chars_printed += ft_putnchar(s, ft_strlen(s));
	return (chars_printed);
}

int	print_o(const char *flags, va_list ap, int chars_printed)
{
	char	*s;
	unsigned int	i;

	i = (unsigned int) va_arg(ap, unsigned int);
	s = ft_basetoa(i, 8, ' ');
	if (flags[0] == '#')
		chars_printed += ft_putnchar("0", 1);
	chars_printed += ft_putnchar(s, ft_strlen(s));
	return (chars_printed);
}

int	print_p(void *pointer)
{
	char	*s;
	size_t	ptr;
	int		chars_printed;

	ptr = (size_t)pointer;
	chars_printed = 0;
	//ft_putstr(flags);
	//s = ptr;
	s = ft_basetoa((long unsigned int)ptr, 16, ' ');
	chars_printed = ft_putnchar("0x", 2);
	chars_printed += ft_putnchar(s, ft_strlen(s));
	return (chars_printed);
}

int	print_x(const char *flags, va_list ap, int chars_printed)
{
	char	*s;
	unsigned int	i;

	if (flags[0] == '#')
		chars_printed += ft_putnchar("0x", 2);
	i = (unsigned int) va_arg(ap, unsigned int);
	s = ft_basetoa(i, 16, ' ');
	chars_printed += ft_putnchar(s, ft_strlen(s));
	return (chars_printed);
}

int	print_X(const char *flags, va_list ap, int chars_printed)
{
	char	*s;
	unsigned int	i;
	int	j;

	j = 0;
	i = (unsigned int)flags[0];
	i = (unsigned int) va_arg(ap, unsigned int);
	s = ft_basetoa(i, 16, ' ');
	if (flags[0] == '#')
		chars_printed += ft_putnchar("0X", 2);
	while (s[j] != '\0')
	{
		s[j] = (char)ft_toupper(s[j]);
		j++;
	}
	chars_printed += ft_putnchar(s, ft_strlen(s));
	return (chars_printed);
}