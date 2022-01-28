/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: severi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 13:46:50 by severi            #+#    #+#             */
/*   Updated: 2022/01/27 17:07:02 by severi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"
#include <stdio.h>

int	main()
{
	char *my;
	char *system;

	my = "hello";
	system = "hello";
	
	printf("Test 1. \n");
	ft_printf("my: %s", my);
	printf(" :system: %s :\n", system);

	printf("Test 2. \n");
	ft_printf("my: %i", 333);
	printf(" :system: %i :\n", 333);

	printf("Test 3. \n"); 
	ft_printf("my: %c", 'X');
	printf(" :system: %c :\n", 'X');

	printf("Test 4. \n");
	ft_printf("my: \"%s\" starts with letter %c and is %i long.", my, my[0], ft_strlen(my));
	printf(" :system: \"%s\" starts with letter %c and is %i long. :\n", my, my[0], (int)ft_strlen(my));

	int ret1;
//	int ret2;

	ret1 = printf("%s wolrd", system);
	printf("<- %i bytes printed.\n", ret1);

	
	return (0);
}
