/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_before.c                                  :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: severi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 01:00:08 by severi            #+#    #+#             */
/*   Updated: 2022/05/22 14:37:15 by severi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


int	print_section(t_flags *flag, int c_p, char *s, char c)
{
	if (flag->plus == 1)
		c_p = is_plus(flag ,c_p, &s);
	if (flag->sharp == 1)
		c_p = is_sharp(c_p, c);
	return (c_p);
}


int	print_minus(t_flags *flag, int c_p, char *s, char c)
{
	if (flag->space == 1)
		c_p += print_c(' ');
	c_p = print_section(flag, c_p, s, c);
	c_p += ft_putcx('0', flag->prec - ft_strlen(s) - flag->plus);
	c_p += ft_putnchar(s, ft_strlen(s));
	// if (flag->sharp == 1)
	// 	c_p += 2;
	if (flag->zero == 1)
		c_p += ft_putcx('0', flag->width - c_p);
	else
		c_p += ft_putcx(' ', flag->width - c_p);
	// if (flag->sharp == 1)
	// 	c_p = is_sharp(c_p, c);

	return (c_p);
}



int	print_normal(t_flags *flag, int c_p, char *s, char c)
{
	if (flag->prec > (int)ft_strlen(s) - flag->plus)
		c_p += flag->prec;
	else 
		c_p += (int)ft_strlen(s) + flag->plus;
	c_p = ft_putcx(' ', flag->width - c_p);
	if (flag->prec > (int)ft_strlen(s) - flag->plus)
		c_p += ft_putcx('0', flag->prec - ft_strlen(s) - flag->plus);
	else
		c_p += ft_putcx('0', flag->prec - (int)ft_strlen(s) - flag->plus);
	if (flag->space == 1)
		c_p += print_c(' ');
	c_p = print_section(flag, c_p, s, c);
	
	if (flag->minus == 1)
		c_p += ft_putnchar(s, ft_strlen(s));
	if (flag->minus == 0)
		c_p += ft_putnchar(s, ft_strlen(s));
	//if (flag->sharp == 1)
	//	c_p = is_sharp(c_p, c);
	return (c_p);
}


int	print_sharp_w_zeros(t_flags *flag, int c_p, char *s, char c)
{
	c_p += print_section(flag, c_p, s, c);
	c_p += ft_putcx('0', flag->width - ft_strlen(s) - c_p);
	if (flag->minus == 1)
		c_p += ft_putnchar(s, ft_strlen(s));
	if (flag->minus == 0)
		c_p += ft_putnchar(s, ft_strlen(s));
	//if (flag->sharp == 1)
	//	c_p = is_sharp(c_p, c);
	return (c_p);
}

int	print_sharp_w_spaces(t_flags *flag, int c_p, char *s, char c)
{
	c_p += 1;
	if (c != 'o')
		c_p += 1;
	c_p += ft_putcx(' ', flag->width - ft_strlen(s) - c_p);
	print_section(flag, c_p, s, c);
	if (flag->minus == 1)
		c_p += ft_putnchar(s, ft_strlen(s));
	if (flag->minus == 0)
		c_p += ft_putnchar(s, ft_strlen(s));
	//if (flag->sharp == 1)
	//	c_p = is_sharp(c_p, c);
	return (c_p);
}

int	print_w_zeros(t_flags *flag, int c_p, char *s, char c)
{
	c_p += print_sign(flag ,c_p, &s);
	if (flag->plus == 1)
		c_p += is_plus(flag ,c_p, &s);
	if (flag->prec > (int)ft_strlen(s))
		c_p += flag->prec - ft_strlen(s);
	if (flag->zero == 1)
		c_p += ft_putcx('0', flag->width - ft_strlen(s) - c_p);
	else
		c_p += ft_putcx(' ', flag->width - ft_strlen(s) - c_p);
	ft_putcx('0', flag->prec - ft_strlen(s) - flag->plus);

	c_p = print_section(flag, c_p, s, c);
	
	c_p += ft_putnchar(s, ft_strlen(s));

	return (c_p);
}


int	print_u_int(t_flags *flag, int c_p, char *s, char c)
{
	//if (flag->sharp == 1 && c == 'o')
	//	c_p += print_c(' ');
	if (flag->minus == 0 && flag->sharp == 0 && flag->zero == 0)
		c_p += print_normal(flag, c_p, s, c);
	if (flag->minus == 0 && flag->sharp == 0 && flag->zero == 1)
		c_p += print_w_zeros(flag, c_p, s, c);
	if (flag->minus == 0 && flag->sharp == 1 && flag->zero == 1)
		c_p += print_sharp_w_zeros(flag, c_p, s, c);
	if (flag->minus == 0 && flag->sharp == 1 && flag->zero == 0)
		c_p += print_sharp_w_spaces(flag, c_p, s, c);
	if (flag->minus == 1 && flag->sharp == 0)
		c_p += print_minus(flag, c_p, s, c);
	else if (flag->minus == 1)
		c_p += print_minus(flag, c_p, s, c);

	return (c_p);
}

int	print_int(t_flags *flag, int c_p, char *s, char c)
{

	if (flag->minus == 0 && flag->sharp == 0 && flag->zero == 0)
		c_p += print_normal(flag, c_p, s, c);
	if (flag->minus == 0 && flag->sharp == 0 && flag->zero == 1)
		c_p += print_w_zeros(flag, c_p, s, c);
	if (flag->minus == 0 && flag->sharp == 1 && flag->zero == 1)
		c_p += print_sharp_w_zeros(flag, c_p, s, c);
	if (flag->minus == 0 && flag->sharp == 1 && flag->zero == 0)
		c_p += print_sharp_w_spaces(flag, c_p, s, c);
	if (flag->minus == 1 && flag->sharp == 0)
		c_p += print_minus(flag, c_p, s, c);
	else if (flag->minus == 1)
		c_p += print_minus(flag, c_p, s, c);

	return (c_p);
}



int	print_before_minus(t_flags *flag, int c_p, char *s, char c)
{
	if (flag->plus == 1)
		c_p = is_plus(flag ,c_p, &s);
	if (flag->sharp == 1)
		c_p = is_sharp(c_p, c);
	if (flag->prec > c_p + (int)ft_strlen(s)
		&& flag->prec != -1 && s[0] != '\0')
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
	if (flag->sharp == 1 && c == 'o' && flag->zero == 1)
		print_c(' ');
	if (flag->sharp == 1 && flag->zero == 1)
		c_p = is_sharp(c_p, c);
	if (flag->sharp == 1 && flag->zero == 0 && c != 'x' && c != 'X' && c != 'o')
		c_p += 1;
	if (flag->sharp == 1 && c != 'o' && c != 'x' && flag->zero == 0 && c != 'X')
		c_p += 1;
	if ((c != 'x' || flag->zero == 0) && c != ' ' && c != 'o')
		c_p += ft_putcx(' ', flag->width
				- (int)ft_strlen(s) - flag->plus - c_p);
	if (flag->sharp == 1 && flag->zero == 0)
	{
		if (flag->width < (int)ft_strlen(s) - c_p)
			;
		else
			c_p = is_sharp(c_p, c);
	}
	if (flag->plus == 1)
		c_p = is_plus(flag ,c_p, &s);
	if (flag->width - c_p > (int)ft_strlen(s) && flag->zero != 1)
		c_p += ft_putnchar(" ", flag->width - (int)ft_strlen(s));
	c_p += ft_putcx('0', flag->width - ft_strlen(s) - c_p);
	c_p += ft_putnchar(s, ft_strlen(s));
	return (c_p);
}

int	print_before_0(t_flags *flag, int c_p, char *s, char c)
{
	if (s[0] == '-')
		c_p += print_c('-');
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
	if ((c == 'o' || c == 'u' || c == 'x' || c == 'X')
		&& (flag->prec > (int)ft_strlen(s)))
		c_p += flag->prec - ft_strlen(s) - flag->plus;
	c_p = ft_putcx(' ', flag->width - ft_strlen(s) - flag->plus - c_p);
	if (c == 'o' || c == 'u' || c == 'x' || c == 'X')
		c_p += ft_putcx('0', flag->prec - ft_strlen(s) - flag->plus);
	if (flag->sharp == 1)
		c_p = is_sharp(c_p, c);
	if (flag->plus == 1)
		c_p = is_plus(flag ,c_p, &s);
	c_p += ft_putnchar(s, ft_strlen(s));
	return (c_p);
}

int	print_before(t_flags *flag, int c_p, char *s, char c)
{
	if (c == 'o' || c == 'u' || c == 'x' || c == 'X')
		return (print_u_int(flag, c_p, s, c));
	if (c == 'd' || c == 'i')
		return (print_int(flag, c_p, s, c));
	if (flag->space == 1 && s[0] != '-' && flag->plus == 0)
		c_p += print_c(' ');
	if (flag->zero == 1 || (flag->sharp == 1 ))
		return (print_before_0(flag, c_p, s, c));
	if (flag->minus == 1)
		c_p = print_before_minus(flag, c_p, s, c);
	else
		c_p += just_print(flag, c_p, s, c);
	return (c_p);
}
