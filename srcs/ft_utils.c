/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: severi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 23:37:50 by severi            #+#    #+#             */
/*   Updated: 2022/04/08 00:18:28 by severi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	fill_prec(char *ret, char *str, int size)
{
	int	j;
	int	i;

	i = 0;
	j = ft_strlen(str);
	while (i <= size && i < j)
	{
		ret[i] = str[i];
		i += 1;
	}
	ret[i] = '\0';
}

void	fix_overrides(t_flags *flag_s)
{
	if (flag_s->plus == 1)
		flag_s->space = 0;
	if (flag_s->minus == 1)
		flag_s->zero = 0;
	if (flag_s->prec != 6 && flag_s->spec != 0)
		flag_s->zero = 0;
}

void	init_flags(t_flags *flag_s, const char *flags)
{
	flag_s->len = ft_strlen(flags) - 1;
	flag_s->spec = 0;
	flag_s->width = 0;
	flag_s->prec = 6;
	flag_s->sharp = 0;
	flag_s->minus = 0;
	flag_s->plus = 0;
	flag_s->space = 0;
	flag_s->zero = 0;
}
