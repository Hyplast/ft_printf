/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vlq_pow.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: severi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 01:35:04 by severi            #+#    #+#             */
/*   Updated: 2022/04/08 00:55:10 by severi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	pow2(int pow)
{
	static const int	pow2tab[15] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512,
		1024, 2048, 4096, 8192, 16384};

	return (pow2tab[pow]);
}

char	*tab_pow(int pow)
{
	static const char	*pow2tab[65] = {"1", "2", "4", "8", "16", "32", "64",
		"128", "256", "512", "1024", "2048", "4096", "8192", "16384", "32768",
		"65536", "131072", "262144", "524288", "1048576", "2097152", "4194304",
		"8388608", "16777216", "33554432", "67108864", "134217728", "268435456",
		"536870912", "1073741824", "2147483648", "4294967296", "8589934592",
		"17179869184", "34359738368", "68719476736", "137438953472",
		"274877906944", "549755813888", "1099511627776", "2199023255552",
		"4398046511104", "8796093022208", "17592186044416", "35184372088832",
		"70368744177664", "140737488355328", "281474976710656",
		"562949953421312", "1125899906842624", "2251799813685248",
		"4503599627370496", "9007199254740992", "18014398509481984",
		"36028797018963968", "72057594037927936", "144115188075855872",
		"288230376151711744", "576460752303423488", "1152921504606846976",
		"2305843009213693952", "4611686018427387904", "9223372036854775808",
		"18446744073709551616"};

	return ((char *)pow2tab[pow]);
}

char	*vlq_binpow(int n)
{
	int		i;
	char	*res;
	char	*tmp;
	char	*two;

	i = 62;
	if (n <= i + 1)
		return (ft_strdup((char *)tab_pow(n)));
	else
	{
		two = ft_strdup("2");
		res = ft_strdup(((char *)tab_pow(i + 1)));
		while (++i < n)
		{
			tmp = ft_strdup(res);
			ft_strdel(&res);
			res = vlq_mult(tmp, two);
			if (!res)
				return (NULL);
			ft_strdel(&tmp);
		}
	}
	ft_strdel(&two);
	return (res);
}

/*
*	Get the power of five variable lenght que (vlq).
*/
char	*vlq_fivepow(int n)
{
	int		i;
	char	*res;
	char	*tmp;
	char	*five;

	i = 0;
	five = ft_strdup("5");
	res = ft_strdup(five);
	if (!five || !res)
		return (NULL);
	while (i < n)
	{
		tmp = ft_strdup(res);
		if (!tmp)
			return (NULL);
		ft_strdel(&res);
		res = vlq_mult(tmp, five);
		if (!res)
			return (NULL);
		ft_strdel(&tmp);
		i++;
	}
	ft_strdel(&five);
	return (res);
}

/*
*	Get the power of ten variable lenght que (vlq).
*/
char	*get_pow_ten(char *vlq, int n)
{
	char	*ret;
	int		size;
	int		i;

	i = 0;
	size = (int)ft_strlen(vlq) + n;
	ret = ft_memalloc((size_t)size + 1);
	if (!ret)
		return (NULL);
	vlq_initialize(ret, '0', size);
	while (vlq[i] != '\0')
	{
		ret[i] = vlq[i];
		i++;
	}
	return (ret);
}
