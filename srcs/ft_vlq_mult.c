/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vlq_mult.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: severi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 01:31:48 by severi            #+#    #+#             */
/*   Updated: 2022/03/11 01:34:53 by severi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	do_mult(t_calc *info, char *s1, char *s2, char *res)
{
	int	i;
	int	j;
	int	hold;

	i = info->sum;
	j = info->len1;
	hold = 0;
	while (j >= 0)
	{
		hold = 0;
		if (j >= 0 && info->len2 >= 0 && s1[j] * s2[info->len2] + res[i] >= 10)
		{
			hold = (res[i] + s1[j] * s2[info->len2]) / 10;
			res[i] = (res[i] + s1[j] * s2[info->len2]) % 10;
		}
		else if (info->len2 < 0)
			res[i] = 0;
		else
		{
			if (info->len2 >= 0)
				res[i] += s1[j] * s2[info->len2];
			else
				res[i] += s1[j] * 1;
		}
		res[--i] += hold;
		j--;
	}
}

static char	*trim_zero_char(char *s)
{
	int		i;
	char	*ret;

	i = 0;
	while (s[i] == '0')
		i++;
	ret = ft_strdup(s + i);
	if (!ret)
		return (NULL);
	return (ret);
}

static char	*mult_inter_sums(t_calc *info, char *s1, char *s2, char *res)
{
	char	*tmp_sum;
	char	*sum;

	sum = ft_strdup("0");
	if (!sum)
		return (NULL);
	vlq_tmp_conv(info, s1, s2);
	while (info->len2 >= 0)
	{
		vlq_initialize(res, 0, info->sum + 1);
		do_mult(info, s1, s2, res);
		vlq_tmp_conv_rev(res, info->sum + 1);
		if (info->ten_dec > 1)
			vlq_nshift(res, info->sum + 1, info->ten_dec);
		info->ten_dec++;
		tmp_sum = ft_strdup(sum);
		if (!tmp_sum)
			return (NULL);
		ft_strdel(&sum);
		sum = vlq_sum(tmp_sum, res);
		if (!sum)
			return (NULL);
		ft_strdel(&tmp_sum);
		info->len2--;
	}
	return (sum);
}

char	*vlq_mult(char *s1, char *s2)
{
	char	*sum;
	char	*res;
	t_calc	*info;
	char	*ret;

	if (!ft_str_isdigit(s1) || !ft_str_isdigit(s2))
		return (NULL);
	info = (t_calc *)malloc(sizeof(t_calc));
	if (!info)
		return (NULL);
	calc_info(info, s1, s2);
	info->len1 -= 1;
	info->len2 -= 1;
	res = ft_strnew((size_t)info->sum + 1);
	sum = mult_inter_sums(info, s1, s2, res);
	ret = trim_zero_char(sum);
	if (!res || !sum || !ret)
		return (NULL);
	ft_strdel(&sum);
	vlq_tmp_conv_rev2(info, s1, s2);
	free_calc(info);
	ft_strdel(&res);
	return (ret);
}
