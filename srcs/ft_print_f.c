/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_f.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: severi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 01:47:10 by severi            #+#    #+#             */
/*   Updated: 2022/03/26 01:50:01 by severi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_add_zeros(char **str, int zeros)
{
	char	*str_0;
	size_t	len;
	int		i;

	i = 0;
	len = ft_strlen(*str);
	str_0 = ft_strnew(zeros + len);
	ft_strncpy(str_0, *str, len);
	while(i < zeros)
	{
		str_0[len + i] = '0';
		i++;
	}
	//ft_strcpy2(*str, str_0);
	*str = ft_strdup(str_0);
}

int	print_f(const char *flags, va_list ap, int chars_printed)
{
	double f;
	double lf;
 	long double ld;
	char	**s;
	//int	num;
	//int	num2;
	//int	num3;
	//int num4;
	//int round;
	int i;
	t_flags *flag_s;

	i = -1;
	//num = -1;
	//num2 = -1;
	//num3 = -1;
	//num4 = -1;
	//round = 0;
	f = 0;
	lf = 0;
	ld = 0;

	flag_s = return_flags(flags);
	if (flag_s->spec == 1)
	{
		lf = (double) va_arg(ap, double);
		ft_printf("%lf", lf);

	}
	else if (flag_s->spec == 3)
	{
		ld = (long double) va_arg(ap, long double);
		ft_printf("%Lf", ld);
	}
	else
	{
		f = va_arg(ap, double);
		s = ft_frexp(f);
	}
	/*num = ft_lookforchar(flags, '.');
	num2 = ft_lookforchar(flags, 'f');
	if(num > 0 && num2 != 0)
	{
		num3 = ft_atoi(ft_strsub(flags, 0, num));
	}
	else if(num2 != 0 && num == -1)
		num3 = ft_atoi(ft_strsub(flags, 0, num2));*/
	
	//ft_printf("%s,%s,%s\n", s[0], s[1], s[2]);
	// ft_putstr(s[0]);
	// ft_putchar('\n');
	// ft_putstr(s[1]);
	// ft_putchar('\n');
	// ft_putstr(s[2]);
	// ft_putchar('\n');
	ft_round(s, flag_s->prec);
	if (s[1][0] == '0' && ft_strlen(s[1]) == 1)
		ft_add_zeros(&s[1], flag_s->prec - ft_strlen(s[1]));
	
	//ft_printf("%s,%s,%s\n", s[0], s[1], s[2]);
	/*
	if (num != -1)
	{
		round = ft_atoi(ft_strsub(flags, num + 1, num2 - num));
		ft_round(s, flag_s->prec);
		if (s[1][0] == '0')
			ft_add_zeros(&s[1], round - ft_strlen(s[1]));
		//	if (num > 51)
		//ft_add_zeros(&s[1], num - 51);
	}
	else
	{
		ft_round(s, 6);
		// TODO: MEMORY bufferoverflow in add_zeros, FIX
		if (s[1][0] == '0')
			ft_add_zeros(&s[1], 6 - ft_strlen(s[1]));
		//if (ft_round(s, 6))
		//	chars_printed += print_c_ntimes('0', 5);
	}
	*/
/*
	num4 = ft_strlen(s[0]) + ft_strlen(s[1]) + 1;
	if (num4 < num3)
	{
		while(++i + num4 < num3)
			chars_printed += ft_putnchar(" ", 1);
		i = -1;
	}
	*/
	chars_printed += ft_putnchar(s[0], ft_strlen(s[0]));
	chars_printed += ft_putnchar(".", 1);
	chars_printed += ft_putnchar(s[1], ft_strlen(s[1]));
	if (flag_s->prec > 51)
		while (++i < flag_s->prec - 51)
			chars_printed += ft_putnchar("0", 1);
	return (chars_printed);
}