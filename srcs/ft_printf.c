/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: severi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 09:54:52 by severi            #+#    #+#             */
/*   Updated: 2022/01/30 11:21:43 by severi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int		ft_putnchar(const char *s, size_t n)
{
	int	i;

	i = 0;
	while(n-- > 1 && *s != '\0')
	{	
		ft_putchar(*s++);
		i++;
	}
	return (i);
}

int		ft_lookforchar(const char *s, int c)
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

int	print_c(char c)
{
	ft_putchar(c);
	return (1);
}

int	print_d(const char *flags, int d, int chars_printed)
{
	char *s;

	ft_putstr(flags);
	s = ft_itoa(d);
	chars_printed = ft_putnchar(s, ft_strlen(s));
	return (chars_printed);
}
/*
char	*ft_ftoa(float f, size_t digits)
{
	char	*s;

	f = 2 / 3;
	digits = 2;
	
	s = "2342.3424";
	return (s);	
}
*/
/*
int	print_f(const char *flags, va_list ap)
{
	char found;
	//char *s;
	double f;
	double lf;
 	long double ld;

	//f = 0;
	//lf = 0;
	//ld = 0;
	found = 'l';

	if (found == 'l')
	{
		lf = (double) va_arg(ap, double);
		
	}
	else if (found == 'L')
	{
		ld = (long double) va_arg(ap, long double);
	}
	else
	{
		f = va_arg(ap, double);
		
	}
	ft_putstr(flags);
	//s = ft_itoa(f);
	//chars_printed = ft_putnchar(s, ft_strlen(s));
	return (0);
}
*/
int	print_s(char *s, int chars_printed)
{
	chars_printed += ft_putnchar(s, ft_strlen(s));
	return (chars_printed);
}

static const int	g_flags[] = {'c', 'd', 'f', 'i', 'o', 'p', 's', 'u', 'x', 'X'};
//const static g_print_f = [print_c()]

int	match_function(const char *flags, va_list ap, int c, int printed_chars)
{
	if (c == 'c')
		printed_chars += print_c((char) va_arg(ap, int));
	else if (c == 'd')
		printed_chars += print_d(flags, (int) va_arg(ap, int), printed_chars);
/*	else if (c == 'f')
		printed_chars += print_f(flags, ap);
	else if (c == 'i')
		printed_chars += print_i(flags, (int) va_arg(ap, int));
	else if (c == 'o')
		printed_chars += print_o(flags, (unsigned int) va_arg(ap, unsigned int));
	else if (c == 'p')
		printed_chars += print_p(flags, (void*) va_arg(ap, void*));
*/	else if (c == 's')
		printed_chars += print_s((char*) va_arg(ap, char*), printed_chars);
/*	else if (c == 'u')
		printed_chars += print_u(flags, (unsigned int) va_arg(ap, unsigned int));
	else if (c == 'x')
		printed_chars += print_x(flags, (unsigned int) va_arg(ap, unsigned int));
	else if (c == 'x')
		printed_chars += print_X(flags, (unsigned int) va_arg(ap, unsigned int));
*/	return (printed_chars);
}

int	read_flags(const char *flags, va_list ap)
{
	char	*temp;
	int		chars_printed;
	int		i;
	int		j;

	i = 0;
	j = 0;
	chars_printed = 0;
	temp = ft_strdup(flags);
	while (*temp != '\0' || *temp != '%')
	{
		while(*temp != g_flags[i] || i < 10)
		{
			i++;
		}
		if (*temp == g_flags[i])
		{
			chars_printed = match_function(flags , ap, g_flags[i], chars_printed);	
			temp += ft_strlen(temp) - 1;
		}
		i = 0;
		temp = temp + 1;
		j++;
	}
	return (chars_printed);
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
		chars_printed += ft_putnchar(format, (size_t)i);
		format = ft_strchr(format, '%');
		chars_printed += read_flags(format, ap);
		i = ft_lookforchar(format, '%');
	}
	chars_printed += ft_putnchar(format, ft_strlen(format));
	va_end(ap);
	return (chars_printed);
}
