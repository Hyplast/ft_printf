/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: severi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 09:54:52 by severi            #+#    #+#             */
/*   Updated: 2022/01/31 11:20:36 by severi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int		ft_putnchar(const char *s, size_t n)
{
	int	i;

	i = 0;
	while(n-- > 0 && *s != '\0')
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
//	else if (c == 'f')
//		printed_chars += print_f(flags, ap);
	else if (c == 'i')
		printed_chars += print_i((int) va_arg(ap, int));
/*	else if (c == 'o')
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

int	read_flags(char *flags, va_list ap)
{
	int		chars_printed;
	size_t	len;

	len = ft_strlen(flags);
	chars_printed = 0;
	chars_printed = match_function(flags, ap, flags[len - 1], 0);	
	return (chars_printed);
}

char	*parse_flags(const char *flags)
{
	size_t	len;
	int		i;

	i = 0;
	len = 0;
	if (*flags == '%')
		return ("%");
	while (flags[len] != '\0')
	{
		while(flags[len] != g_flags[i] && i < 10)
		{
			i++;
		}
		if (flags[len] == g_flags[i])
		{
			return (ft_strsub(flags, 0, len + 1));
		}
		i = 0;
		len++;
	}
	exit(1);
	return (NULL);
}

int	ft_printf(const char *format, ...)
{
	va_list ap;
	char	*flags;
	int		i;
	int		chars_printed;
	va_start(ap, format);

	chars_printed = 0;
	i = ft_lookforchar(format, '%');
	while (i != -1)
	{
		chars_printed += ft_putnchar(format, (size_t)i);
		format = ft_strchr(format, '%') + 1;
		flags = parse_flags(format);
		if (flags[0] != '%')
			chars_printed += read_flags(flags, ap);
		else
			chars_printed += ft_putnchar("%", 1);
		format += ft_strlen(flags);
		i = ft_lookforchar(format, '%');
	}
	chars_printed += ft_putnchar(format, ft_strlen(format));
	va_end(ap);
	return (chars_printed);
}
