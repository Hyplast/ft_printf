/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: severi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 13:46:50 by severi            #+#    #+#             */
/*   Updated: 2022/01/31 11:21:56 by severi           ###   ########.fr       */
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
/*
	printf ("Characters: %c %c \n", 'a', 65);
	printf ("Decimals: %d %ld\n", 1977, 650000L);
	printf ("Preceding with blanks: %10d \n", 1977);
	printf ("Preceding with zeros: %010d \n", 1977);
	printf ("Some different radices: %d %x %o %#x %#o \n", 100, 100, 100, 100, 100);
	printf ("floats: %4.2f %+.0e %E \n", 3.1416, 3.1416, 3.1416);
	printf ("Width trick: %*d \n", 5, 10);
	printf ("%s \n", "A string");
	
	printf ("%% \n");
*/
/*	
	float flo = 2.97f;
	double dol = 2.97;
	long double ldol = 2.97;

	printf("floating point len:%li f: %f \n", sizeof(flo), flo);
	printf("floating point len:%li f: %lf \n", sizeof(flo), flo);
	printf("double len:%li f: %f \n", sizeof(dol), dol);
	printf("double len:%li f: %lf \n", sizeof(dol),  dol);
	printf("double len:%li f: %Lf \n", sizeof(ldol),  ldol);



*/
/*
	char c = '?';
	char *s = "string";
	char **p = &s;
	int i = 4 / 3; 
	

	printf("c is a characted: %c ", c);
	printf("s is a string; %s ", s);
	printf("p is a pointer %p ", p);

	printf("d is a decimal %d ", i);
	printf("i is a integer %i ", i);
	printf("%o", o);
	printf("%u", u);
	printf("%x", x);
	printf("%X", X);
	
	printf("%f", f);

	printf("%%");
	//printf("%c", c);
*/
//	int ret1;
//	int ret2;

//	ret1 = printf("%s wolrd", system);
//	printf("<- %i bytes printed.\n", ret1);

	
	return (0);
}
