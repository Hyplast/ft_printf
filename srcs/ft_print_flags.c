/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_flags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: severi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 01:00:08 by severi            #+#    #+#             */
/*   Updated: 2022/04/08 00:37:41 by severi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnchar(const char *s, size_t n)
{
	int	i;

	i = 0;
	while (n-- > 0 && *s != '\0')
	{	
		ft_putchar(*s++);
		i++;
	}
	return (i);
}

int	ft_putcx(char c, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{	
		ft_putchar(c);
		i++;
	}
	return (i);
}

int	print_before_0(t_flags *flag, int c_p, char *s, char c)
{
	char	*temp;
	if (s[0] == '-')
	{
		temp = ft_strsub(s, 1, ft_strlen(s) - 1);
		ft_strcpy(s, temp);
		c_p += print_c('-');
	}
	if (flag->minus == 1)
		{
			if (flag->plus == 1)
			{
				if (s[0] != '-')
					c_p += print_c('+');
			}
			c_p += ft_putnchar(s, ft_strlen(s));
			c_p += ft_putcx(c, flag->width - c_p);
		}
	else
		{
			if (flag->plus == 1)
			{
				if (s[0] != '-')
					c_p += print_c('+');
			}
			c_p += ft_putcx(c, flag->width - ft_strlen(s) - flag->plus - c_p);
			c_p += ft_putnchar(s, ft_strlen(s));
		}
	return (c_p);
}

int	print_before(t_flags *flag, int c_p, char *s, char c)
{
	if (flag->space == 1 && s[0] != '-' && flag->plus == 0)
		c_p += print_c(' ');
	if (flag->zero == 1)
		return (print_before_0(flag,  c_p, s, '0'));
	if (flag->minus == 1)
	{
		if (flag->plus == 1)
		{
			if (s[0] != '-')
				c_p += print_c('+');
		}
		c_p += ft_putnchar(s, ft_strlen(s));
		c_p += ft_putcx(c, flag->width - c_p);
	}
	else
	{
		c_p += ft_putcx(c, flag->width - ft_strlen(s) - flag->plus - c_p);
		if (flag->plus == 1)
		{
			if (s[0] != '-')
				c_p += print_c('+');
		}
		c_p += ft_putnchar(s, ft_strlen(s));
	}
	return (c_p);
}


