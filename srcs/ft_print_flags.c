/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_flags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: severi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 01:00:08 by severi            #+#    #+#             */
/*   Updated: 2022/03/26 01:50:21 by severi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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

int	ft_print_c_ntimes(char c, int n)
{
	int	i;

	i = 0;
	while(i < n)
	{	
		ft_putchar(c);
		i++;
	}
	return (i);
}

int print_before(t_flags *flag_s, int chars_printed, char *s, char c)
{
    if (flag_s->space == 1 && s[0] != '-' && flag_s->plus == 0)
		chars_printed += print_c(' ');
	if (flag_s->zero == 1)
		c = '0';
	if (flag_s->minus == 1)
	{
		if (flag_s->plus == 1)
		{
			if (s[0] != '-')
				chars_printed += print_c('+');
		}
		chars_printed += ft_putnchar(s, ft_strlen(s));
		chars_printed += ft_print_c_ntimes(c, flag_s->width - chars_printed);
	}
	else
	{
		chars_printed += ft_print_c_ntimes(c, flag_s->width - ft_strlen(s) - flag_s->plus - chars_printed);
		if (flag_s->plus == 1)
		{
			if (s[0] != '-')
				chars_printed += print_c('+');
		}
		chars_printed += ft_putnchar(s, ft_strlen(s));
	}
    return (chars_printed);
}