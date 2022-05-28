/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_frexpl.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: severi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 00:32:12 by severi            #+#    #+#             */
/*   Updated: 2022/03/11 01:58:33 by severi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
*	fill_nb fills the string "nb_str" with 0's and 1's from "tmp"
*/
static void	fill_nb(char *nb_str, unsigned char *tmp)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 8)
		{
			if (tmp[i] & 1)
				nb_str[k] = '1';
			else
				nb_str[k] = '0';
			tmp[i] >>= 1;
			k++;
			j++;
		}
		i++;
	}
	nb_str[k] = '\0';
}

/*
*	ft_ldftoa extracts the binary value of the float into a string
*/
char	*ft_ldftoa(long double x)
{
	unsigned char		*tmp;
	char				*nb_str;

	nb_str = (char *)malloc(sizeof(char) * 81);
	if (!nb_str)
		return (NULL);
	tmp = (unsigned char *)(&x);
	fill_nb(nb_str, tmp);
	ft_strrev(nb_str);
	return (nb_str);
}
/*
**	Sign = 1 bit
**	Exponent = 15 bits
**	Integer Part = 1 bit
**	Mantissa = 63 bits
**	"In contrast to the single and double-precision formats, this format does
**	not utilize an implicit/hidden bit.
**	Rather, bit 63 contains the integer part of the significand and bits 62-0
**	hold the fractional part. Bit 63 will be 1 on all normalized numbers."
*/

static int	check_nan_inf_l(char *mantissa, char *exp_str)
{
	if (!ft_strcmp("111111111111111", exp_str) && ft_strchr(mantissa, '1'))
		return (1);
	if (!ft_strcmp("111111111111111", exp_str) && !ft_strchr(mantissa, '1'))
		return (-1);
	return (0);
}

static char	**lhandle_ni(char **res, char *nb_str, char *mantissa, char *exp)
{
	if (check_nan_inf_l(mantissa, exp) == 1)
	{
		res[0] = ft_strdup("nan");
		if (!res[0])
			return (NULL);
		res[1] = NULL;
		ft_strdel(&nb_str);
		ft_strdel(&mantissa);
		return (res);
	}
	if (check_nan_inf_l(mantissa, exp) == -1)
	{
		res[0] = ft_strdup("inf");
		if (!res[0])
			return (NULL);
		res[1] = NULL;
		ft_strdel(&nb_str);
		ft_strdel(&mantissa);
		return (res);
	}
	return (NULL);
}

/*
*	ft_frexpl computes the mantissa and the exponent and stocks them in
*	strings it then calls out other functions (get_expl and get_rels) to convert
*	them into decimal strings
*/
char	**ft_frexpl(long double x)
{
	char	*nb_str;
	char	*mantissa;
	char	exp_str[16];
	char	**res;

	exp_str[15] = '\0';
	res = (char **)malloc(sizeof(char *) * 3);
	nb_str = ft_ldftoa(x);
	res[2] = ft_strnew(1);
	ft_strncpy(exp_str, nb_str + 1, 15);
	mantissa = ft_strdup(nb_str + 16);
	if (!(res) || !(nb_str) || !(res[2]) || !(mantissa))
		return (NULL);
	if (check_nan_inf_l(mantissa, exp_str) != 0)
		return (lhandle_ni(res, nb_str, mantissa, exp_str));
	get_res_l(mantissa, get_exp_l(exp_str), res);
	if (!ft_strchr(nb_str + 1, '1') && nb_str[0] == '1')
		ft_strcpy(res[2], "-\0");
	ft_strdel(&nb_str);
	ft_strdel(&mantissa);
	return (res);
}
