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

int	only_nine(char *ret)
{
	int	i;

	i = 0;
	while (ret[i] != '\0')
	{
		if (ret[i] != '9')
			return (0);
		i++;
	}
	return (1);
}

static void	round_whole(char **res)
{
	char	*tmp;
	char	*one;

	one = ft_strdup("1");
	tmp = ft_strdup(res[0]);
	if (!(one) || !(tmp))
		return ;
	if (!ft_strcmp(res[0], "0"))
	{
		ft_strdel(&res[0]);
		res[0] = ft_strdup("1");
		if (!(res[0]))
			return ;
	}
	ft_strdel(&res[0]);
	res[0] = vlq_sum(tmp, one);
	if (!(res[0]))
		return ;
	ft_strdel(&res[1]);
	res[1] = ft_strdup("0");
	if (!(res[1]))
		return ;
	ft_strdel(&tmp);
	ft_strdel(&one);
}

static void	round_sup(char *ret, int i, char **res)
{
	char	*five;

	if ((only_nine(ret) && i - 1 < (int)ft_strlen(ret)) || i == 1)
	{
		round_whole(res);
		return ;
	}
	five = ft_strdup("5");
	if (!(five))
		return ;
	ft_strdel(&res[1]);
	res[1] = vlq_sum(ret, five);
	if (!(res[1]))
		return ;
	res[1][i - 1] = '\0';
	if (res[1][i - 2] == '1' && i == 2)
		round_whole(res);
	ft_strdel(&five);
}

static void	do_rounding(char *ret, int i, char **res)
{
	char	*tmp;

	if (ret[i - 1] == '0')
	{
		ret[i - 1] = '\0';
		tmp = ft_strdup(ret);
		if (!(tmp))
			return ;
		ft_strdel(&res[1]);
		res[1] = ft_strdup(tmp);
		if (!(res[1]))
			return ;
		ft_strdel(&tmp);
	}
	else if (ret[i - 1] >= '5')
		round_sup(ret, i, res);
	else
	{
		fill_prec(ret, ret, i - 2);
		res[1] = ft_strdup(ret);
	}
	ft_strdel(&ret);
}

/*
*   Do rounding up to precision after decimal.
*
*   @param res expects "x.x" format string as a pointer
*   @param precision number of meaningfull numbers
*/
void	ft_round(char **res, int precision)
{
	char	*ret;
	int		prec;

	prec = precision - 1;
	if (!ft_strcmp(res[1], "0"))
		return ;
	ret = ft_strnew(prec + 2);
	if (!(ret))
		return ;
	fill_prec(ret, res[1], prec + 1);
//	ft_strncpy(ret, res[1], prec + 1);
	do_rounding(ret, prec + 2, res);
}
