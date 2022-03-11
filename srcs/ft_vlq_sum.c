/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vlq_sum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: severi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 01:30:02 by severi            #+#    #+#             */
/*   Updated: 2022/03/11 01:30:52 by severi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	compute_res(t_calc *info, char *s1, char *s2, char res)
{
	if (info->len1 >= 0)
		res += s1[info->len1];
	if (info->len2 >= 0)
		res += s2[info->len2];
	if (info->len1 >= 0 && info->len2 >= 0)
		res -= 48;
	info->len1--;
	info->len2--;
	return (res);
}

static char	*do_sum(t_calc *info, char *s1, char *s2)
{
	int		i;
	int		hold;
	char	*res;

	res = ft_strnew((size_t)info->max + 2);
	if (!res)
		return (NULL);
	i = info->max;
	while (i > 0)
	{
		hold = 0;
		if ((info->len1 >= 0 && info->len2 >= 0
				&& ((s1[info->len1] + s2[info->len2] + res[i] - 48) > 57))
			|| (info->len1 >= 0 && s1[info->len1] + res[i] > 57)
			|| (info->len2 >= 0 && s2[info->len2] + res[i] > 57))
		{
			res[i] -= 10;
			hold = 1;
		}
		res[i] = compute_res(info, s1, s2, res[i]);
		res[--i] += hold;
		if (res[0] == 1)
			res[i] += 48;
	}
	return (res);
}

static char	*trim_zero(char *s)
{
	int		i;
	char	*ret;

	i = 0;
	while (s[i] == 0)
		i++;
	ret = ft_strdup(s + i);
	if (!ret)
		return (NULL);
	return (ret);
}

char	*vlq_sum(char *s1, char *s2)
{
	char	*res;
	char	*ret;
	t_calc	*info;

	if (!ft_str_isdigit(s1) || !ft_str_isdigit(s2))
		return (NULL);
	info = (t_calc *)malloc(sizeof(t_calc));
	if (!info)
		return (NULL);
	calc_info(info, s1, s2);
	info->len1 -= 1;
	info->len2 -= 1;
	res = do_sum(info, s1, s2);
	ret = trim_zero(res);
	if (!res || !ret)
		return (NULL);
	ft_strdel(&res);
	free_calc(info);
	return (ret);
}
