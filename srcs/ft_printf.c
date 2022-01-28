/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: severi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 09:54:52 by severi            #+#    #+#             */
/*   Updated: 2022/01/27 16:57:34 by severi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_printf(const char *format, ...)
{
	va_list ap;
	char	**temp;
	char	*s;
	char	c;
	int		i;
	va_start(ap, format);

	temp = ft_strsplit(format, '%');
	if (*temp != NULL)
		ft_putstr(*temp++);
	while(*temp != NULL)
	{
//	temp = ft_strchr(format, '%');
		if(**temp == 's')
		{
			s = va_arg(ap, char *);
			ft_putstr(s);
					}
		if(**temp == 'i' || **temp == 'd')
		{
			i = va_arg(ap, int);
			ft_putnbr(i);
		}
		if(**temp == 'c')
		{
			c = (char) va_arg(ap, int);	
			ft_putchar(c);
		}	
		ft_putstr(*temp++ + 1);
	}
	//ft_putstr(format);
	va_end(ap);
	return (0);
}
