/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calc_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: severi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 01:43:57 by severi            #+#    #+#             */
/*   Updated: 2022/03/11 01:44:55 by severi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
**	---> bintowhole converts the exponent binary string into a decimal string
**	by multiplying corresponding powers of two by '1' bits
*/

char	*ft_bintowhole(char *vlq)
{
	int		i;
	char	*ret;
	char	*tmp;
	char	*pow;

	i = 0;
	ret = ft_strnew(ft_strlen(vlq) + 1);
	if (!ret)
		return (NULL);
	ft_strrev(vlq);
	while (vlq[i] != 0)
	{
		if (vlq[i] == '1')
		{
			pow = vlq_binpow(i);
			tmp = ft_strdup(ret);
			if (!pow || !tmp)
				return (NULL);
			ft_strdel(&ret);
			ret = vlq_sum(tmp, pow);
			if (!ret)
				return (NULL);
			ft_strdel(&pow);
			ft_strdel(&tmp);
		}
		i++;
	}
	return (ret);
}

/*
**	---> bintodec computes the following sum : (sum 5^(frac_digits - i)
**	which is equal to the decimal part (in base 10)
*/
static char	*compute_sum(char *vlq, char *ret, int i, int j)
{
	char	*tmp;
	char	*pow;
	char	*tmp_pow;

	while (vlq[++i] != '\0')
	{
		if (vlq[i] == '1')
		{
			pow = vlq_fivepow(i);
			tmp_pow = ft_strdup(pow);
			if (!pow || !tmp_pow)
				return (NULL);
			ft_strdel(&pow);
			pow = get_pow_ten(tmp_pow, j);
			tmp = ft_strdup(ret);
			if (!pow || !tmp)
				return (NULL);
			ft_strdel(&tmp_pow);
			ft_strdel(&ret);
			ret = vlq_sum(tmp, pow);
			if (!ret)
				return (NULL);
			ft_strdel(&pow);
			ft_strdel(&tmp);
		}
		j--;
	}
	return (ret);
}

char	*ft_bintodec(char *vlq)
{
	int		i;
	int		j;
	char	*ret;

	i = -1;
	j = (int)ft_strlen(vlq) - 1;
	ret = ft_strnew(ft_strlen(vlq) + 1);
	if (!ret)
		return (NULL);
	vlq_initialize(ret, '0', (int)ft_strlen(vlq));
	return (compute_sum(vlq, ret, i, j));
}
