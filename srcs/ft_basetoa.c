/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_basetoa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: severi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 01:47:10 by severi            #+#    #+#             */
/*   Updated: 2022/04/07 23:13:48 by severi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static unsigned long long	binary_numbers(int b)
{
	static const unsigned long long	binaries[66] = {1, 2, 4, 8, 16, 32, 64,
		128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072,
		262144, 524288, 524288, 1048576, 2097152, 4194304, 8388608, 16777216,
		33554432, 67108864,	134217728, 268435456, 536870912, 1073741824,
		2147483648, 4294967296, 8589934592, 17179869184, 34359738368,
		68719476736, 137438953472, 274877906944, 549755813888, 1099511627776,
		2199023255552, 4398046511104, 8796093022208, 17592186044416,
		35184372088832, 70368744177664, 140737488355328, 281474976710656,
		562949953421312, 1125899906842624, 2251799813685248, 4503599627370496,
		9007199254740992, 18014398509481984, 36028797018963968,
		72057594037927936, 144115188075855872, 288230376151711744,
		576460752303423488, 1152921504606846976, 2305843009213693952,
		4611686018427387904, 9223372036854775808ULL,
		18446744073709551615ULL};

	return (binaries[b]);
}

static unsigned long	octal_numbers(int o)
{
	static const unsigned long	octals[21] = {7, 63, 511, 4095, 32767, 262143,
		2097151, 16777215, 134217727, 1073741823, 8589934591, 68719476735,
		549755813887, 4398046511103, 35184372088831, 281474976710655,
		2251799813685247, 18014398509481983, 144115188075855871,
		1152921504606846975, 9223372036854775807};

	return (octals[o]);
}

static unsigned long	hexadecimal_numbers(int h)
{
	static const unsigned long	hexadecimals[16] = {15, 255, 4095, 65535,
		1048575, 16777215, 268435455, 4294967295, 68719476735,
		1099511627775, 17592186044415, 281474976710655, 4503599627370495,
		72057594037927935, 1152921504606846975, 18446744073709551615ULL};

	return (hexadecimals[h]);
}

static int	tell_max_length(unsigned long n, unsigned long base)
{
	int	i;

	i = 0;
	if (base == 2)
	{
		while (binary_numbers(i) < n)
			i++;
	}
	else if (base == 8)
	{
		while (octal_numbers(i) < n)
			i++;
	}
	else if (base == 10)
		i = count_digits((long) n);
	else if (base == 16)
	{
		while (hexadecimal_numbers(i) < n)
			i++;
	}
	return (i);
}

char	*ft_basetoa(unsigned long n, unsigned long base, char sign)
{
	char	*s;
	int		i;
	int		j;
	int		k;

	i = tell_max_length(n, base);
	k = i + 1;
	j = 0;
	s = ft_strnew((size_t)k);
	while (n > 0)
	{
		s[i] = "0123456789abcdef"[(n % base)];
		i--;
		n = n / base;
	}
	if (sign != ' ')
	{
		s[0] = sign;
		++j;
	}
	while (++i < k)
		s[j++] = s[i];
	s[j] = 0;
	return (s);
}
