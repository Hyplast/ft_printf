/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_f.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: severi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 01:47:10 by severi            #+#    #+#             */
/*   Updated: 2022/04/08 01:00:12 by severi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_c(char c)
{
	ft_putchar(c);
	return (1);
}

void	ft_add_zeros(char **str, int zeros)
{
	char	*str_0;
	size_t	len;
	int		i;

	i = 0;
	len = ft_strlen(*str);
	str_0 = ft_strnew(zeros + len);
	ft_strncpy(str_0, *str, len);
	while (i < zeros)
	{
		str_0[len + i] = '0';
		i++;
	}
	*str = ft_strdup(str_0);
}

void	free_double_char(char ***s)
{
	// ft_putstr(s[0]);
	// ft_putstr(*s[0]);
	// ft_putstr(*s[1]);
	// ft_putstr(**s[0]);
	if(s)
	{
		if(*s)
		{
			ft_strdel(s[0]);
			// ft_strdel(*s[1]);
			// ft_strdel(*s[2]);
		}
		ft_strdel(*s);

		free(*s);
		*s = NULL;
		// free(s);
		// s = NULL;
	}
}

void	combine_chars(char **s1, char *s2, char **s3)
{
	char	*temp;
	char	*result;

	temp = ft_strjoin(*s1, s2);
	result = ft_strjoin(temp, *s3);
	*s1 = ft_strdup(result);
	ft_strdel(&result);
	ft_strdel(&temp);
	ft_strdel(s3);
}

int	print_llong(t_flags *flag_s, va_list ap, int chars_printed)
{
	long double	ld;
	char		**s;
	int			decimals;

	ld = (long double) va_arg(ap, long double);
	s = ft_frexpl(ld);
	if (ft_strcmp(s[1], "") == 0 && ft_strlen(s[1]) <= 1)
		ft_add_zeros(&s[1], flag_s->prec - ft_strlen(s[1]));
	ft_round(s, flag_s->prec);
	decimals = ft_strlen(s[1]);
	if (decimals < flag_s->prec)
		ft_add_zeros(&s[1], flag_s->prec - decimals);
	if (s[1][0] == '0' && ft_strlen(s[1]) == 1)
		ft_add_zeros(&s[1], flag_s->prec - ft_strlen(s[1]));
	if (decimals != 0)
	{
		combine_chars(&s[0], ".", &s[1]);
		chars_printed = print_before(flag_s, chars_printed, s[0], ' ');
	}
	else
		chars_printed = print_before(flag_s, chars_printed, s[0], ' ');
	free_double_char(&s);
	ft_strdel(s);
	return (chars_printed);
}

int	print_f(t_flags *flag_s, va_list ap, int chars_printed)
{
	double		f;
	char		**s;

	if (flag_s->spec == 3)
		return (print_llong(flag_s, ap, chars_printed));
	f = va_arg(ap, double);
	s = ft_frexp(f);
	ft_putstr("\n\n\n");
	ft_putstr(s[0]);
	ft_putstr("-*-");
	ft_putstr(s[1]);
	ft_putstr("-*-");
	ft_putstr(s[2]);
	ft_putstr("\n\n\n");
	ft_round(s, flag_s->prec);
	if (s[1][0] == '0' && ft_strlen(s[1]) == 1)
		ft_add_zeros(&s[1], flag_s->prec - ft_strlen(s[1]));
	if (ft_strlen(s[1]) != 0)
	{
		combine_chars(&s[0], ".", &s[1]);
		chars_printed = print_before(flag_s, chars_printed, s[0], ' ');
	}
	else
		chars_printed = print_before(flag_s, chars_printed, s[0], ' ');
	if (flag_s->prec > 51)
		chars_printed += ft_putcx('0', flag_s->prec - 51);
	free_double_char(&s);
	ft_strdel(s);
	return (chars_printed);
}

int	print_b(t_flags *flag_s, va_list ap, int chars_printed)
{
	char			*s;
	unsigned int	i;

	i = (unsigned int) va_arg(ap, unsigned int);
	s = ft_basetoa(i, 2, ' ');
	chars_printed += print_before(flag_s, chars_printed, s, 'b');
	ft_strdel(&s);
	return (chars_printed);
}
