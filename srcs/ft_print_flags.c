/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_flags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: severi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 01:00:08 by severi            #+#    #+#             */
/*   Updated: 2022/05/22 14:37:15 by severi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


int	is_sharp(int c_p, char c)
{
	c_p += print_c('0');
	if (c != 'o')
		c_p += print_c(c);
	return (c_p);
}

int	is_plus(int c_p, char *s)
{
	if (s[0] != '-')
		c_p += print_c('+');
	return (c_p);
}

int	print_before_minus(t_flags *flag, int c_p, char *s, char c)
{
	if (flag->plus == 1)
		c_p += is_plus(c_p, s);
	if (flag->sharp == 1)
	{
		c_p += print_c('0');
		if (c != 'o')
			c_p += print_c(c);
	}
	if (flag->prec > c_p + (int)ft_strlen(s) && flag->prec != -1 && s[0] != '\0')
	{
		if (c == 'o')
			c_p += ft_putcx('0', flag->prec - c_p - ft_strlen(s));
		else
			c_p += ft_putcx(' ', flag->prec - c_p - ft_strlen(s));
	}
	c_p += ft_putnchar(s, ft_strlen(s));
	if (flag->zero == 1)
		c_p += ft_putcx('0', flag->width - c_p);
	else
		c_p += ft_putcx(' ', flag->width - c_p);
	return (c_p);
}

int	print_before_plus(t_flags *flag, int c_p, char *s, char c)
{
	if (flag->sharp == 1 && c == 'o')
		c_p += print_c(' ');
	if (flag->sharp == 1 && flag->zero == 1)
		c_p += is_sharp(c_p, c);
	if (flag->sharp == 1 && flag->zero == 0)
		c_p += 1;
	if (flag->sharp == 1 && c != 'o' && flag->zero == 0)
		c_p += 1;
	if ((c != 'x' || flag->zero == 0) && c != ' ' && c != 'o')
		c_p = ft_putcx(' ', flag->width - (int)ft_strlen(s) - flag->plus - c_p);
	if (flag->sharp == 1 && flag->zero == 0)
		c_p += is_sharp(c_p, c);
	if (flag->plus == 1)
		c_p += is_plus(c_p, s);
	c_p += ft_putcx('0', flag->width - ft_strlen(s) - flag->plus - c_p);
	c_p += ft_putnchar(s, ft_strlen(s));
	return (c_p);
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
		c_p += print_before_minus(flag, c_p, s, c);
	else
		c_p = print_before_plus(flag, c_p, s, c);
	return (c_p);
}

int	just_print(t_flags *flag, int c_p, char *s, char c)
{
	if (flag->sharp == 1)
		c_p += 2;
	if ((c == 'o' || c == 'u' || c == 'x' || c == 'X') && (flag->prec > (int)ft_strlen(s)))
		c_p += flag->prec - ft_strlen(s) - flag->plus;
	c_p = ft_putcx(' ', flag->width - ft_strlen(s) - flag->plus - c_p);
	if (c == 'o' || c == 'u' || c == 'x' || c == 'X')
		c_p += ft_putcx('0', flag->prec - ft_strlen(s) - flag->plus);
	if (flag->sharp == 1)
		c_p += is_sharp(c_p, c);
	if (flag->plus == 1)
		c_p += is_plus(c_p, s);
	c_p += ft_putnchar(s, ft_strlen(s));
	return (c_p);
}

int	print_before(t_flags *flag, int c_p, char *s, char c)
{
	if (flag->space == 1 && s[0] != '-' && flag->plus == 0)
		c_p += print_c(' ');
	if (flag->zero == 1 || (flag->sharp == 1 && (c == 'o' || c == 'u' || c == 'x' || c == 'X')))
		return (print_before_0(flag, c_p, s, c));
	if (flag->minus == 1)
		c_p = print_before_minus(flag, c_p, s, c);
	else
		c_p += just_print(flag, c_p, s, c);
	return (c_p);
}
