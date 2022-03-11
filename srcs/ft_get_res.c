/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_res.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: severi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 01:47:10 by severi            #+#    #+#             */
/*   Updated: 2022/03/11 01:50:01 by severi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
**	---> get_res converts the binary char into left & right
**	left[0] = '1': multiply by 2^52 to get MSB
**	left is the part on the left of the floating point
**	right is the part on the right of the floating point
*/

static void	res_neg_exp(char *mantissa, int exp, char **res)
{
	char	*right;
	int		i;
	int		j;

	i = 0;
	exp = -exp;
	right = ft_strnew(52 + (size_t)exp);
	if (!right)
		return ;
	while (i < exp - 1)
		right[i++] = '0';
	if (exp == 1023 && !ft_strchr(mantissa, '1'))
		right[i++] = '0';
	else
		right[i++] = '1';
	j = 0;
	while (i < 52 + exp)
	{
		if (mantissa[j] == '0' || mantissa[j] == '1')
			right[i++] = mantissa[j++];
	}
	right[i] = '\0';
	res[0] = ft_strdup("0");
	res[1] = ft_bintodec(right);
	if (!(res[0]) || !(res[1]))
		return ;
	ft_strdel(&right);
}

static void	res_big_exp(char *mantissa, int exp, char **res)
{
	char	*left;
	int		i;

	i = 0;
	left = ft_strnew((size_t)exp + 1);
	if (!left)
		return ;
	left[0] = '1';
	if (!(ft_strncat(left, mantissa, (size_t)exp)))
		return ;
	while (left[i] == '0' || left[i] == '1')
		i++;
	while (i < exp + 1)
		left[i++] = '0';
	res[0] = ft_bintowhole(left);
	res[1] = ft_strdup("0");
	if (!res[0] || !res[1])
		return ;
	ft_strdel(&left);
}

static void	res_pos_exp(char *mantissa, int exp, char **res)
{
	char	*left;
	char	*right;

	if (exp > 52)
	{
		res_big_exp(mantissa, exp, res);
		return ;
	}
	left = ft_strnew((size_t)exp + 1);
	if (!left)
		return ;
	left[0] = '1';
	if (!(ft_strncat(left, mantissa, (size_t)exp)))
		return ;
	right = ft_strdup(mantissa + exp);
	if (!right)
		return ;
	res[0] = ft_bintowhole(left);
	res[1] = ft_bintodec(right);
	if (!res[0] || !res[1])
		return ;
	ft_strdel(&left);
	ft_strdel(&right);
}

void	get_res(char *mantissa, int exp, char **res)
{
	if (exp < 0)
		res_neg_exp(mantissa, exp, res);
	else
		res_pos_exp(mantissa, exp, res);
}
/*
**	---> get_exp computes the decimal value of the exponent and
**	returns an int. 1023 is the bias for 64 bits (float convention)
*/

int	get_exp(char *exp_str)
{
	int	nb;
	int	i;
	int	j;

	j = 10;
	i = 0;
	nb = 0;
	while (exp_str[i] != '\0')
	{
		if (exp_str[i] == '1')
			nb = nb + pow2(j);
		i++;
		j--;
	}
	nb -= 1023;
	return (nb);
}
