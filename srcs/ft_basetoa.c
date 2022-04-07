/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_basetoa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: severi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 01:47:10 by severi            #+#    #+#             */
/*   Updated: 2022/04/07 23:13:48 by severi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	count_digits(long c)
{
	size_t	digits;

	digits = 0;
	if (c <= 0)
	{
		digits++;
		c *= -1;
	}
	while (c > 0)
	{
		digits++;
		c /= 10;
	}
	return (digits);
}

char	*ft_basetoa(unsigned long n, unsigned long base, char sign)
{
	char	*s;
	int		i;
	int		j;

	i = 19;
	j = 0;
	if (base == 2)
		s = ft_strnew(count_digits((long)n * 100));
	else
		s = ft_strnew(count_digits((long)n));
	while (n > 0)
	{
		s[i] = "0123456789abcdef"[(n % base)];
		i--;
		n = n / base;
	}
	if (sign != ' ')
	{
		s[0] = sign;
		++j;
	}
	while (++i < 20)
		s[j++] = s[i];
	s[j] = 0;
	return (s);
}

int	ft_lookforchar(const char *s, int c)
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
