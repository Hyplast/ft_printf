/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: severi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 09:54:52 by severi            #+#    #+#             */
/*   Updated: 2022/02/11 15:49:29 by severi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

static const int	g_specifier[] = {'b', 'c', 'd', 'f', 'i', 'o', 'p', 's', 'u', 'x', 'X'};
/*
static const char	*g_extra_f[] = {"hh", "h", "l", "ll", "L", "#", "0", "-", "+", " "};

static const void	(*g_f_ptrs[]) = {print_c, print_i, print_s};
*/
//const static g_print_f = [print_c()]

int	match_function(const char *flags, va_list ap, int c, int printed_chars)
{
	if (c == 'b')
		printed_chars += print_b(flags, ap, printed_chars);
	else if (c == 'c')
		printed_chars += print_c((char) va_arg(ap, int));
	else if (c == 'd')
		printed_chars += print_d(flags, (int) va_arg(ap, int), printed_chars);
	else if (c == 'f')
		printed_chars += print_f(flags, ap, printed_chars);
	else if (c == 'i')
		printed_chars += print_i((int) va_arg(ap, int));
	else if (c == 'o')
		printed_chars += print_o(flags, ap, printed_chars);
	else if (c == 'p')
		printed_chars += print_p((void*) va_arg(ap, void*));
	else if (c == 's')
		printed_chars += print_s((char*) va_arg(ap, char*), printed_chars);
	else if (c == 'u')
		printed_chars += print_u(flags, ap, printed_chars);
	else if (c == 'x')
		printed_chars += print_x(flags, ap, printed_chars);
	else if (c == 'X')
		printed_chars += print_X(flags, ap, printed_chars);
	return (printed_chars);
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

char	*parse_specifier(const char *flags)
{
	size_t	len;
	int		i;
	int		elem;

	i = 0;
	elem = (sizeof(g_specifier)/sizeof(g_specifier[0]));
	len = 0;
	if (*flags == '%')
		return ("%");
	while (flags[len] != '\0')
	{
		while(flags[len] != g_specifier[i] && i < elem)
		{
			i++;
		}
		if (flags[len] == g_specifier[i])
		{
			return (ft_strsub(flags, 0, len + 1));
		}
		i = 0;
		len++;
	}
	exit(1);
	return (NULL);
}

/*
*	Print function, use % with specifiers.
*
*	@param string in ("string %'x'", %bcdfiopsuxX) -format
*	@return Number characters written in stdout
*/
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
		flags = parse_specifier(format);
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
