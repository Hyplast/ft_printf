/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: severi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 09:54:52 by severi            #+#    #+#             */
/*   Updated: 2022/05/22 14:22:10 by severi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	match_function(t_flags *flags, va_list ap, int c, int printed_c)
{
	if (c == 'b')
		printed_c += print_b(flags, ap, printed_c);
	else if (c == 'c')
		printed_c += print_char(flags, (char) va_arg(ap, int), printed_c);
	else if (c == 'd')
		printed_c += print_d(flags, ap, printed_c);
	else if (c == 'f')
		printed_c += print_f(flags, ap, printed_c);
	else if (c == 'i')
		printed_c += print_i(flags, ap, printed_c);
	else if (c == 'o')
		printed_c += print_o(flags, ap, printed_c);
	else if (c == 'p')
		printed_c += print_p((void *) va_arg(ap, void *));
	else if (c == 's')
		printed_c += print_s(flags, (char *) va_arg(ap, char *), printed_c);
	else if (c == 'u')
		printed_c += print_u(flags, ap, printed_c);
	else if (c == 'x')
		printed_c += print_x(flags, ap, printed_c);
	else if (c == 'X')
		printed_c += print_big_x(flags, ap, printed_c);
	return (printed_c);
}

static	int	read_flags(char *flags, va_list ap)
{
	int		chars_printed;
	size_t	len;
	t_flags	*flag_s;

	flag_s = return_flags(flags);
	len = ft_strlen(flags);
	chars_printed = 0;
	chars_printed = match_function(flag_s, ap, flags[len - 1], 0);
	free_flags(flag_s);
	return (chars_printed);
}

static	char	*parse_specifier(const char *flags)
{
	size_t	len;
	int		i;
	int		elem;
	char	*temp;

	i = 0;
	elem = ft_strlen(SPECIFIERS);
	len = 0;
	if (*flags == '%')
		return ("%");
	while (flags[len] != '\0' && flags[len] != '%')
	{
		while (flags[len] != SPECIFIERS[i] && i < elem)
			i++;
		if (flags[len] == SPECIFIERS[i])
			return (ft_strsub(flags, 0, len + 1));
		i = 0;
		len++;
	}
	temp = ft_strnew(len + 1);
	while (i < (int)len + 1)
		temp[i++] = '\1';
	return (temp);
}


static void	free_char(char **flags)
{
	if (flags != NULL)
	{
		if (*flags != NULL)
		{
			if (**flags != '%')
				ft_strdel(flags);
		}	
	}
}
int	read_while(const char *format, va_list ap, int i, int chars_printed)
{
	char	*flags;

	flags = ft_strnew(1);
	while (i != -1)
	{
		chars_printed += ft_putnchar(format, (size_t)i);
		format = ft_strchr(format, '%') + 1;
		if (ft_strcmp(format, "") == 0 && chars_printed == 0)
			return (-1);
		flags = parse_specifier(format);
		if (flags[0] != '%' && flags[0] != '\1')
			chars_printed += read_flags(flags, ap);
		else
		{
			chars_printed += ft_putnchar("%", 1);
			chars_printed += ft_putnchar(format, ft_strlen(flags));
		}
		format += ft_strlen(flags);
		if (*flags != '%')
			ft_strdel(&flags);
		i = ft_lookforchar(format, '%');
	}
	chars_printed += ft_putnchar(format, ft_strlen(format));
	free_char(&flags);
	return (chars_printed);
}

/*
*	Print function, use % with specifiers.
*
*	@param string in ("string %'x'", %bcdfiopsuxX) -format
*	@return Number characters written in stdout
*/
int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		i;
	int		chars_printed;

	va_start(ap, format);
	chars_printed = 0;
	i = ft_lookforchar(format, '%');
	chars_printed = read_while(format, ap, i, chars_printed);
	va_end(ap);
	return (chars_printed);
}
