/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_llitoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: severi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 23:47:48 by severi            #+#    #+#             */
/*   Updated: 2021/12/05 14:56:05 by severi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_llitoa(long long c)
{
	char		*s;
	size_t		digits;
	long long	value;

	value = c;
	digits = count_ldigits(value);
	s = ft_strnew(digits);
	if (s == NULL || (long unsigned int)c == 0x8000000000000000)
	{
		if ((long unsigned int)c == 0x8000000000000000)
			s = "-9223372036854775808";
		else
			s = NULL;
		return (s);
	}
	if (c < 0)
	{
		s[0] = '-';
		value *= -1;
	}
	if (c == 0)
		s[0] = '0';
	while (value > 0)
	{
		s[--digits] = (char)((value % 10) + '0');
		value /= 10;
	}
	return (s);
}
