/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_round.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: severi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 13:46:50 by severi            #+#    #+#             */
/*   Updated: 2022/03/11 02:12:48 by severi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	fill_prec(char *ret, char *str, int size)
{
	int j;
	int i;

	i = 0;
	j = ft_strlen(str);
	while (i <= size && i < j)
	{
		ret[i] = str[i];
		i += 1;
	}
	ret[i] = '\0';
}

int		only_nine(char *ret)
{
	int i;

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

	if (!(one = ft_strdup("1"))
		|| !(tmp = ft_strdup(res[0])))
		return ;
	if (!ft_strcmp(res[0], "0"))
	{
		ft_strdel(&res[0]);
		if (!(res[0] = ft_strdup("1")))
			return ;
	}
	ft_strdel(&res[0]);
	if (!(res[0] = vlq_sum(tmp, one)))
		return ;
	ft_strdel(&res[1]);
	if (!(res[1] = ft_strdup("0")))
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
	if (!(five = ft_strdup("5")))
		return ;
	ft_strdel(&res[1]);
	if (!(res[1] = vlq_sum(ret, five)))
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
		if (!(tmp = ft_strdup(ret)))
			return ;
		ft_strdel(&res[1]);
		if (!(res[1] = ft_strdup(tmp)))
			return ;
		ft_strdel(&tmp);
	}
	else if (ret[i - 1] >= '5')
		round_sup(ret, i, res);
	ft_strdel(&ret);
}

/*
*   Do rounding up to precision after decimal.
*
*   @param res expects "x.x" format string as a pointer
*   @param precision number of meaningfull numbers
*/
void		ft_round(char **res, int precision)
{
	char	*ret;
	int		prec;

	prec = precision - 1;
	if (!ft_strcmp(res[1], "0"))
		return ;
	if (!(ret = ft_strnew(prec + 2)))
		return ;
	fill_prec(ret, res[1], prec + 1);
	do_rounding(ret, prec + 2, res);
}