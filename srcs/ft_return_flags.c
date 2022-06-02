/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_return_flags.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: severi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 09:54:52 by severi            #+#    #+#             */
/*   Updated: 2022/04/08 00:16:47 by severi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*find_flags(t_flags *flag_s, const char *flags, int i)
{
	while (++i < flag_s->len)
	{
		if (flags[i] == '0')
		{
			if (i - 1 >= 0)
			{
				if (ft_isdigit(flags[i - 1]) == 0)
					flag_s->zero = 1;
			}
			if (i == 0)
				flag_s->zero = 1;
		}
		else if (flags[i] == ' ')
			flag_s->space = 1;
		else if (flags[i] == '+')
			flag_s->plus = 1;
		else if (flags[i] == '-')
			flag_s->minus = 1;
		else if (flags[i] == '#')
			flag_s->sharp = 1;
	}
	i = flag_s->zero + flag_s->space
		+ flag_s->plus + flag_s->minus + flag_s->sharp;
	return (ft_strsub(flags, i, ft_strlen(flags) - i));
}

static char	*find_width(t_flags *flag_s, char *flags)
{
	size_t	i;
	int		digits;

	i = 0;
	digits = 0;
	while (i < ft_strlen(flags))
	{
		if (ft_isdigit(flags[i]) == 1)
			digits++;
		i++;
	}
	flag_s->width = ft_atoi(flags);
	return (flags);
}

static char	*find_prec(t_flags *flag_s, char *flags)
{
	int	index;

	index = ft_lookforchar(flags, '.');
	if (index != -1)
	{
		flag_s->prec = ft_atoi(ft_strsub(flags,
					index + 1, ft_strlen(flags) - index));
		if (index == 0)
			flags = "";
		else
			flags = ft_strsub(flags, 0, index);
	}
	return (flags);
}

static char	*find_spec(t_flags *flag_s, char *flags)
{
	if (flags[flag_s->len - 1] == 'l')
	{
		flag_s->spec = 1;
		if (flag_s->len - 1 - 1 > 0)
		{
			if (flags[flag_s->len - 1 - 1] == 'l')
				flag_s->spec = 2;
		}
	}
	else if (flags[flag_s->len - 1] == 'L')
		flag_s->spec = 3;
	else if (flags[flag_s->len - 1] == 'h')
	{
		flag_s->spec = 4;
		if (flag_s->len - 1 > 0)
		{
			if (flags[flag_s->len - 1 - 1] == 'h')
				flag_s->spec = 5;
		}
	}
	if (flag_s->spec != 0)
		flags = ft_strsub(flags, 0, ft_strlen(flags) - 1);
	if (flag_s->spec == 2 || flag_s->spec == 5)
		flags = ft_strsub(flags, 0, ft_strlen(flags) - 1);
	return (flags);
}

t_flags	*return_flags(const char *flags)
{
	t_flags	*flag_s;
	char	*temp;

	temp = ft_strdup(ft_strsub(flags, 0, ft_strlen(flags) - 1));
	flag_s = malloc(sizeof(t_flags));
	init_flags(flag_s, flags);
	temp = find_spec(flag_s, temp);
	temp = find_prec(flag_s, temp);
	if (ft_strcmp(temp, "") != 0)
		temp = find_flags(flag_s, temp, -1);
	fix_overrides(flag_s, flags[ft_strlen(flags) - 1]);
	if (ft_strcmp(temp, "") != 0)
		temp = find_width(flag_s, temp);
	if (ft_strcmp(temp, "") != 0)
		ft_strdel(&temp);
	return (flag_s);
}
