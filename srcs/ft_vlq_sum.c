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

/*
*	Computes the length of the new variable lenght que (vlq) for sum.
*/
static char	compute_res(t_calc *info, char *s1, char *s2, char result)
{
	if (info->len_one >= 0)
		result += s1[info->len_one];
	if (info->len_two >= 0)
		result += s2[info->len_two];
	if (info->len_one >= 0 && info->len_two >= 0)
		result -= 48;
	info->len_one--;
	info->len_two--;
	return (result);
}

/*
*	Adds 2 variable lenght que (vlq) -arrays together.
*	48 = 11000	57 = 111001
* 		if ((info->len1 >= 0 && info->len2 >= 0
*				&& ((s1[info->len1] + s2[info->len2] + res[i] - 48) > 57))
*			|| (info->len1 >= 0 && s1[info->len1] + res[i] > 57)
*			|| (info->len2 >= 0 && s2[info->len2] + res[i] > 57))
*		-1 >= 0 && 0 >= 0 && (s1[-1] + s2[0] + res[21845] - 48) > 57
*			-1 >= 0 && s1[-1] + res[21845] > 57
*/
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
		if ((info->len_one >= 0 && info->len_two >= 0
				&& ((s1[info->len_one] + s2[info->len_two] + res[i] - 48) > 57))
			|| (info->len_one >= 0 && s1[info->len_two] + res[i] > 57)
			|| (info->len_one >= 0 && s2[info->len_two] + res[i] > 57))
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

/*
*	Removes excess zeros in a new a variable lenght que (vlq).
*/
static char	*trim_zero(char *s)
{
	int		i;
	char	*result;

	i = 0;
	while (s[i] == 0)
		i++;
	result = ft_strdup(s + i);
	if (!result)
		return (NULL);
	return (result);
}

/*
*	Adds 2 variable length que (vlq) -arrays together.
*	@return	New array
*/
char	*vlq_sum(char *s1, char *s2)
{
	char	*temp;
	char	*result;
	t_calc	*info;

	if (!ft_str_isdigit(s1) || !ft_str_isdigit(s2))
		return (NULL);
	info = (t_calc *)malloc(sizeof(t_calc));
	if (!info)
		return (NULL);
	vlq_calculate_info(info, s1, s2);
	info->len_one -= 1;
	info->len_two -= 1;
	temp = do_sum(info, s1, s2);
	result = trim_zero(temp);
	if (!result || !temp)
		return (NULL);
	ft_strdel(&temp);
	free_calc(info);
	return (result);
}
