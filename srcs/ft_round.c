/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_round.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: severi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 13:46:50 by severi            #+#    #+#             */
/*   Updated: 2022/04/07 23:40:23 by severi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	only_nine(char *result)
{
	int	i;

	i = 0;
	while (result[i] != '\0')
	{
		if (result[i] != '9')
			return (0);
		i++;
	}
	return (1);
}

static void	round_whole(char **result)
{
	char	*tmp;
	char	*one;

	one = ft_strdup("1");
	tmp = ft_strdup(result[0]);
	if (!(one) || !(tmp))
		return ;
	if (!ft_strcmp(result[0], "0"))
	{
		ft_strdel(&result[0]);
		result[0] = ft_strdup("1");
		if (!(result[0]))
			return ;
	}
	ft_strdel(&result[0]);
	result[0] = vlq_sum(tmp, one);
	if (!(result[0]))
		return ;
	ft_strdel(&result[1]);
	result[1] = ft_strdup("0");
	if (!(result[1]))
		return ;
	ft_strdel(&tmp);
	ft_strdel(&one);
}

static void	round_up(char *ret, int i, char **result)
{
	char	*five;

	if ((only_nine(ret) && i - 1 < (int)ft_strlen(ret)) || i == 1)
	{
		round_whole(result);
		return ;
	}
	five = ft_strdup("5");
	if (!(five))
		return ;
	ft_strdel(&result[1]);
	result[1] = vlq_sum(ret, five);
	if (!(result[1]))
		return ;
	result[1][i - 1] = '\0';
	if (result[1][i - 2] == '1' && i == 2)
		round_whole(result);
	ft_strdel(&five);
}

static void	do_rounding(char *ret, int i, char **result)
{
	char	*temp;

	if (ret[i - 1] == '0')
	{
		ret[i - 1] = '\0';
		temp = ft_strdup(ret);
		if (!(temp))
			return ;
		ft_strdel(&result[1]);
		result[1] = ft_strdup(temp);
		if (!(result[1]))
			return ;
		ft_strdel(&temp);
	}
	else if (ret[i - 1] >= '5')
		round_up(ret, i, result);
	else
	{
		fill_prec(ret, ret, i - 2);
		ft_strdel(&result[1]);
		result[1] = ft_strdup(ret);
	}
	ft_strdel(&ret);
}

/*
*   Do rounding up to precision after decimal.
*
*   @param res expects "x.x" format string as a pointer
*   @param precision number of meaningfull numbers
*/
void	ft_round(char **result, int precision)
{
	char	*ret;
	int		prec;

	prec = precision - 1;
	if (!ft_strcmp(result[1], "0"))
		return ;
	ret = ft_strnew(prec + 2);
	if (!(ret))
		return ;
	fill_prec(ret, result[1], prec + 1);
	do_rounding(ret, prec + 2, result);
}
