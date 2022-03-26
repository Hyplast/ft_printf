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

int print_before(t_flags *flags, int chars_printed, char *s)
{
    char    c;
    int     i;

    c = ' ';
    i = 0;
    if (flags->zero == 1)
        c = '0';
    i = flags->width - ft_strlen(s);
    if (flags->minus == 1)
    {
        chars_printed += ft_putnchar(s, ft_strlen(s));
        chars_printed += ft_print_c_ntimes(c, i);
    }
    else
    {
        chars_printed += ft_print_c_ntimes(c, i);
        chars_printed += ft_putnchar(s, ft_strlen(s));
    }
    return (chars_printed);
}