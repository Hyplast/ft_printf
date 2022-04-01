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

static uintmax_t	unsigned_conv(t_flags *flag_s, va_list ap)
{
	//unsigned int	i;
	uintmax_t		i;

	if (flag_s->spec == 0)
		i = (unsigned int) va_arg(ap, unsigned int);
	else if (flag_s->spec == 1)
		i = (unsigned long int) va_arg(ap, unsigned long int);
	else if (flag_s->spec == 2)
		i = (unsigned long long int) va_arg(ap, unsigned long long int);
	else if (flag_s->spec == 4)
		i = (unsigned short int) va_arg(ap, unsigned int);
	else if (flag_s->spec == 5)
		i = (unsigned char) va_arg(ap, unsigned int);
	return (i);
}


// TODO: Does it work?
int	print_u(const char *flags, va_list ap, int chars_printed)
{
	char	*s;
	unsigned int	u;

	u = (unsigned int)flags[0];
	u = (unsigned int) va_arg(ap, unsigned int);
	//s = ft_basetoa(i, 10, ' ');
	s = ft_utoa(u);
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

int	print_x(const char *flags, va_list ap, int chars_printed)
{
	char	*s;
	//unsigned int	i;
	t_flags	*flag_s;
	uintmax_t	i;

	flag_s = return_flags(flags);
	i = unsigned_conv(flag_s, ap);
	//i = (unsigned int) va_arg(ap, unsigned int);
	s = ft_basetoa(i, 16, ' ');
	if (flag_s->sharp == 1)
		s = ft_strjoin("0x", s);
		//chars_printed += ft_putnchar("0x", 2);
	chars_printed += print_before(flag_s, chars_printed, s, ' ');
	//chars_printed += ft_putnchar(s, ft_strlen(s));
	if (i == 0)
		chars_printed += print_c('0');
	return (chars_printed);
}

int	print_X(const char *flags, va_list ap, int chars_printed)
{
	char	*s;
	//unsigned int	i;
	int	j;
	t_flags	*flag_s;
	uintmax_t	i;

	j = 0;
	//i = (unsigned int)flags[0];
	//i = (unsigned int) va_arg(ap, unsigned int);
	flag_s = return_flags(flags);
	i = unsigned_conv(flag_s, ap);
	s = ft_basetoa(i, 16, ' ');
	if (flag_s->sharp == 1)
		s = ft_strjoin("0X", s);
		//chars_printed += ft_putnchar("0X", 2);
	while (s[j] != '\0')
	{
		s[j] = (char)ft_toupper(s[j]);
		j++;
	}
	chars_printed += print_before(flag_s, chars_printed, s, ' ');
	//chars_printed += ft_putnchar(s, ft_strlen(s));
	if (i == 0)
		chars_printed += print_c('0');
	return (chars_printed);
}