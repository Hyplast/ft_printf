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
	while (++i < (int)ft_strlen(flags))
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
	int		index;
	char	*temp;

	index = ft_lookforchar(flags, '.');
	if (index != -1)
	{
		temp = ft_strsub(flags,	index + 1, ft_strlen(flags) - index);
		flag_s->prec = ft_atoi(temp);
		ft_strdel(&temp);
		if (index == 0)
			flags = "";
		else
			return (ft_strsub(flags, 0, index));
	}
	return  (ft_strsub(flags, 0, ft_strlen(flags)));
}

static char	*find_spec(t_flags *flag_s, char *flags)
{
	if (flags[flag_s->len - 1] == 'l')
	{
		flag_s->spec = 1;
		if (flag_s->len - 1 > 0)
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
	if (flag_s->spec == 1 || flag_s->spec == 3 || flag_s->spec == 4)
		return (ft_strsub(flags, 0, ft_strlen(flags) - 1));
	else if (flag_s->spec == 2 || flag_s->spec == 5)
		return (ft_strsub(flags, 0, ft_strlen(flags) - 2));
	return (ft_strsub(flags, 0, ft_strlen(flags)));
}

t_flags	*return_flags(const char *flags)
{
	t_flags	*flag_s;
	char	*temp;
	char	*remainder;

	remainder = ft_strsub(flags, 0, ft_strlen(flags) - 1);
	temp = ft_strdup(remainder);
	ft_strdel(&remainder);
	flag_s = malloc(sizeof(t_flags));
	init_flags(flag_s, flags);
	if (flag_s->len != 0)
	{
		remainder = find_spec(flag_s, temp);
		ft_strdel(&temp);
		temp = ft_strdup(remainder);
		ft_strdel(&remainder);
		if (ft_strcmp(temp, "") != 0)
		{
			remainder = find_prec(flag_s, temp);
			ft_strdel(&temp);
			temp = ft_strdup(remainder);
			ft_strdel(&remainder);
			if (ft_strcmp(temp, "") != 0)
				remainder = find_flags(flag_s, temp, -1);
			ft_strdel(&temp);
			temp = ft_strdup(remainder);
			ft_strdel(&remainder);
		}
	}
	fix_overrides(flag_s, flags[ft_strlen(flags) - 1]);
	if (ft_strcmp(temp, "") != 0)
	{
		remainder = find_width(flag_s, temp);
		//ft_strdel(&remainder);
	}
	// if (ft_strcmp(temp, "") != 0)
	// 	ft_strdel(&temp);
	// if (temp != NULL)
	// 	ft_strdel(&temp);
	// if (ft_strcmp(temp, "") == 0)
	ft_strdel(&temp);
	// if (remainder != NULL)
	// 	ft_strdel(&remainder);
	return (flag_s);
}
