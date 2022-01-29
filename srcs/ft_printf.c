/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: severi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 09:54:52 by severi            #+#    #+#             */
/*   Updated: 2022/01/29 06:52:37 by severi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

void	ft_putnchar(char *s, size_t n)
{
	int	i;

	i = 0;
	while(n-- != 0 || *s != '\0')
	{	
		ft_putchar(*s++);
		i++;
	}
	return (i);
}

int		ft_lookforchar(char *s, int c)
{
	int	s_len;
	int	i;

	i = -1;
	s_len = (int)ft_strlen(s);
	while (s_len >= ++i)
	{
		if (s[i] == c)
			return (i);
	}
	return (-1);
}

int	read_flags(char *flags, va_list ap)
{
	if(**temp == 's')
	{
		s = va_arg(ap, char *);
		ft_putstr(s);
	}
	if(**temp == 'i' || **temp == 'd')
	{
		i = va_arg(ap, int);
		ft_putnbr(i);
	}
	if(**temp == 'c')
	{
		c = (char) va_arg(ap, int);	
		ft_putchar(c);
	}
	return (chars_printed)
}

int	ft_printf(const char *format, ...)
{
	va_list ap;
	int		i;
	int		chars_printed;
	va_start(ap, format);

	chars_printed = 0;
	i = ft_lookforchar(format, '%');
	while (i != -1)
	{
		chars_printed += ft_putnchar(format, i);
		format = ft_strchr(format, '%');
		chars_printed += read_flags(format, ap);
		i = ft_lookforchar(format, '%');
	}
	chars_printed += ft_putnchar(format, ft_strlen(format));
	va_end(ap);
	return (chars_printed);
}
