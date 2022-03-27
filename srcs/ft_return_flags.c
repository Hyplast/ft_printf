/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_return_flags.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: severi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 09:54:52 by severi            #+#    #+#             */
/*   Updated: 2022/02/11 15:49:29 by severi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void find_flags(t_flags * flag_s, const char *flags)
{
    int i;

    i = 0;
    while (i < flag_s->len)
    {
        if (flags[0] == '0')
            flag_s->zero = 1;
        else if (flags[i] == ' ')
            flag_s->space = 1;
        else if (flags[i] == '+')
            flag_s->plus = 1;
        else if (flags[i] == '-')
            flag_s->minus = 1;
        else if (flags[i] == '#')
            flag_s->sharp = 1;
        i++;
    }
}

static void find_width(t_flags * flag_s, const char *flags)
{
    flag_s->width = 10;
}

static void find_prec(t_flags * flag_s, const char *flags)
{
    flags_s->prec = 10;
}

static void find_spec(t_flags * flag_s, const char *flags)
{
    int     i;
    char    c;

    i = flag_s->len - 1;
    c = flags[i];
    if (c == 'l')
    {
        flag_s->spec = 1;
        if (flags[i - 1] == 'l')
            flag_s->spec = 2;
    }
    else if (c == 'L')
        flag_s->spec = 3;
    else if (c == 'h')
    {
        flag_s->spec = 4;
        if (flags[i - 1] == 'h')
            flag_s->spec = 5;
    }
}

static void init_flags(t_flags *flag_s)
{
    
    flag_s->len = 0;
    flag_s->spec = 0;
    flag_s->width = 0;
    flag_s->dot = 0;
    flag_s->sharp = 0;
    flag_s->minus = 0;
    flag_s->plus = 0;
    flag_s->space = 0;
    flag_s->zero = 0;
}

t_flags *return_flags(const char *flags)
{
	t_flags *flag_s;
    char    *temp;
	char	c;
	int		i;
	int		found;

    ft_strcpy(temp, ft_strsub(flags, 0, ft_strlen(flags) - 1));
	found = -1;
	i = 0;
	c = 1;

    flag_s = malloc(sizeof(t_flags));
    init_flags(flag_s);
	flag_s->len = ft_strlen(flags);
    find_spec(flag_s, temp);
    if (flag_s->spec != 0)
    {
        temp = ft_strsub(temp, 0, ft_strlen(temp) - 1);
        if (flag_s->spec == 2 || flag_s->spec == 5)
            temp = ft_strsub(temp, 0, ft_strlen(temp) - 1);
    }
    find_prec(flag_s, temp);
    find_flags(flag_s, temp);
    found = ft_lookforchar(flags, '.');
    if (found != -1)
        find_prec(flag_s , ft_strsub(flags, found, flag_s->len - found));
    
    
    // "010.10f", "3", "7 - 3" 
    

	//flags->spec = 
	
	while (i < flag_s->len)
	{
		found = ft_lookforchar(flags, c);
		i++;
	}
/*
	ft_putstr("flag_s: ");
	ft_putnbr(found);
	ft_putstr(" and ");
	ft_putnbr(flag_s->len);
	ft_putstr(" and ");
	ft_putstr(flags);
	ft_putstr("-\n");
*/
	return (flag_s);
}