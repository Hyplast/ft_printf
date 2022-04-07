/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_frexp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: severi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 01:00:08 by severi            #+#    #+#             */
/*   Updated: 2022/04/07 23:28:54 by severi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
*	ft_dftoa extracts the binary value of the float into a string
*/
char	*ft_dftoa(double x)
{
	int					i;
	unsigned long		tmp;
	char				*nb_str;

	i = 0;
	nb_str = (char *)malloc(sizeof(char) * 65);
	if (!nb_str)
		return (NULL);
	tmp = *(unsigned long *)(&x);
	while (i <= 63)
	{
		if (tmp & 1)
			nb_str[i] = '1';
		else
			nb_str[i] = '0';
		tmp >>= 1;
		i++;
	}
	nb_str[i] = '\0';
	ft_strrev(nb_str);
	return (nb_str);
}

/*
*	check_nan_inf checks if the number entered exists and is not infinite
*	and returns 1 after printing "nan" or "inf" if it is
*/
static int	check_nan_inf(char *mantissa, char *exp_str)
{
	if (!ft_strcmp("11111111111", exp_str) && ft_strchr(mantissa, '1'))
		return (1);
	if (!ft_strcmp("11111111111", exp_str) && !ft_strchr(mantissa, '1'))
		return (-1);
	return (0);
}

static char	**handle_ni(char **res, char *nb_str, char *mantissa, char *exp)
{
	if (check_nan_inf(mantissa, exp) == 1)
	{
		res[0] = ft_strdup("nan");
		if (!(res[0]))
			return (NULL);
		res[1] = NULL;
		ft_strdel(&mantissa);
		ft_strdel(&nb_str);
		return (res);
	}
	if (check_nan_inf(mantissa, exp) == -1)
	{
		res[0] = ft_strdup("inf");
		if (!(res[0]))
			return (NULL);
		res[1] = NULL;
		ft_strdel(&nb_str);
		ft_strdel(&mantissa);
		return (res);
	}
	return (NULL);
}

/*
*	ft_frexp computes the mantissa and the exponent and stocks them in
*	strings it then calls out other functions (get_exp and get_res) to convert
*	them into decimal strings
*/
char	**ft_frexp(double x)
{
	char	*nb_str;
	char	*mantissa;
	char	exp_str[12];
	char	**res;

	exp_str[11] = '\0';
	res = (char **)malloc(sizeof(char *) * 3);
	nb_str = ft_dftoa(x);
	res[2] = ft_strnew(1);
	ft_strncpy(exp_str, nb_str + 1, 11);
	mantissa = ft_strdup(nb_str + 12);
	if (!(res) || !(nb_str) || !(res[2]) || !(mantissa))
		return (NULL);
	if (check_nan_inf(mantissa, exp_str) != 0)
		return (handle_ni(res, nb_str, mantissa, exp_str));
	get_res(mantissa, get_exp(exp_str), res);
	if (!ft_strchr(nb_str + 1, '1') && nb_str[0] == '1')
		ft_strcpy(res[2], "-\0");
	ft_strdel(&mantissa);
	ft_strdel(&nb_str);
	return (res);
}
