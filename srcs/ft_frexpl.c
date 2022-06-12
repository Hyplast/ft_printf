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
*	fill_nb fills the string "nb_str" with 0's and 1's from "temp"
*/
static void	fill_nb(char *nb_str, unsigned char *temp)
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
			if (temp[i] & 1)
				nb_str[k] = '1';
			else
				nb_str[k] = '0';
			temp[i] >>= 1;
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
	unsigned char		*temp;
	char				*number_in_str;

	number_in_str = (char *)malloc(sizeof(char) * 81);
	if (!number_in_str)
		return (NULL);
	temp = (unsigned char *)(&x);
	fill_nb(number_in_str, temp);
	ft_strrev(number_in_str);
	return (number_in_str);
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

static char	**handle_nan_inf_l(char **res, char *nb_str, char *mantissa, char *exp)
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

// static void	add_minus_sign(char **str)
// {
// 	char	*temp;

// 	temp = ft_strjoin("-" , str[0]);
// 	ft_strdel(&str[0]);
// 	*str = ft_strdup(temp);
// 	ft_strdel(&temp);
// }

/*
*	ft_frexpl converts floating point double to strings
*	@param double x
*	@return result[] = result[0] and result[1] = decimal strings x.x
*	@return result[2] = Nan
*/
char	**ft_frexpl(long double x)
{
	char	*number_in_string;
	char	*mantissa;
	char	exp_bin_in_string[16];
	char	**result;

	exp_bin_in_string[15] = '\0';
	result = (char **)malloc(sizeof(char *) * 3);
	number_in_string = ft_ldftoa(x);
	result[2] = ft_strnew(1);
	ft_strncpy(exp_bin_in_string, number_in_string + 1, 15);
	mantissa = ft_strdup(number_in_string + 16);
	if (!(result) || !(number_in_string) || !(result[2]) || !(mantissa))
		return (NULL);
	if (check_nan_inf_l(mantissa, exp_bin_in_string) != 0)
		return (handle_nan_inf_l(result, number_in_string, mantissa,
				exp_bin_in_string));
	calculate_float_l(mantissa, get_exp_l(exp_bin_in_string), result);
	if (!ft_strchr(number_in_string + 1, '1') && number_in_string[0] == '1')
		ft_strcpy(result[2], "-");
	// else
	// 	ft_strdel(&result[2]);
	ft_strdel(&number_in_string);
	ft_strdel(&mantissa);
	// if (x < 0)
	// 	add_minus_sign(result);
	return (result);
}
