/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vlq_conv.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: severi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 01:27:08 by severi            #+#    #+#             */
/*   Updated: 2022/03/11 01:28:35 by severi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	vlq_calculate_info(t_calc *info, char *s1, char *s2)
{
	info->len_one = ft_strlen(s1);
	info->len_two = ft_strlen(s2);
	info->len_one_static = info->len_one;
	info->len_two_static = info->len_two;
	info->max = ft_max(info->len_one, info->len_two);
	info->min = ft_min(info->len_one, info->len_two);
	info->sum = info->len_one + info->len_two;
	info->ten_dec = 1;
}

void	vlq_char_conv(t_calc *info, char *s1, char *s2)
{
	int	i;

	i = 0;
	while (i <= info->len_one)
		s1[i++] -= 48;
	i = 0;
	while (i <= info->len_two)
		s2[i++] -= 48;
}

void	vlq_char_conv_rev(char *s, int size)
{
	int	i;

	i = 0;
	while (i < size)
		s[i++] += 48;
}

void	vlq_char_conv_rev_both(t_calc *info, char *s1, char *s2)
{
	int	i;

	i = 0;
	while (i < info->len_one_static)
		s1[i++] += 48;
	i = 0;
	while (i < info->len_two_static)
		s2[i++] += 48;
}

void	fill_prec(char *ret, char *str, int size)
{
	int	j;
	int	i;

	i = 0;
	j = ft_strlen(str);
	while (i <= size && i < j)
	{
		ret[i] = str[i];
		i += 1;
	}
	ret[i] = '\0';
}
