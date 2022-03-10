/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: severi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 13:46:50 by severi            #+#    #+#             */
/*   Updated: 2022/03/10 23:57:42 by severi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"
#include <stdio.h>

int	main()
{
	char *my;
	char *system;
	int i=0,o=0;

	my = "hello";
	system = "hello";

	printf("\n************************************\n");
	printf("BASIC TESTING WITH ONLY SPECIFIERS\n");
	printf("*************************************\n\n");
	
	printf("Test 1. \n");
	i = ft_printf("myve: %s :\n", my);
	o =    printf("sysv: %s :\n", system);
	printf(" my length %i. system lenght %i\n", i,o);
	
	printf("Test 2. \n");
	i = ft_printf("myve: %i :\n", 333);
	o =    printf("sysv: %i :\n", 333);
	printf(" my length %i. system lenght %i\n", i,o);

	printf("Test 3. \n"); 
	i = ft_printf("myve: %c :\n", 'X');
	o =    printf("sysv: %c :\n", 'X');
	printf(" my length %i. system lenght %i\n", i,o);

	printf("Test 4. \n");
	i = ft_printf("myve: \"%s\" starts with letter %c and is %i long.\n", my, my[0], ft_strlen(my));
	o =    printf("sysv: \"%s\" starts with letter %c and is %i long.\n", my, my[0], (int)ft_strlen(my));
	printf(" my length %i. system lenght %i\n", i,o);


	ft_printf("Test 5. (now with ft_printf) \n");
	i = ft_printf("myve: %p :\n", system);
	o =    printf("sysv: %p :\n", system);
	printf(" my length %i. system lenght %i\n", i,o);

	ft_printf("Test 6. \n");
	o =    printf("sysv: %x,%x,%x :\n", 100, 1000, 100000);
	i = ft_printf("myve: %x,%x,%x :\n", 100, 1000, 100000);	
	printf(" my length %i. system lenght %i\n", i,o);

	ft_printf("Test 7. \n");
	o =    printf("sysv: %X,%X,%X :\n", 100, 1000, 100000);
	i = ft_printf("myve: %X,%X,%X :\n", 100, 1000, 100000);	
	printf(" my length %i. system lenght %i\n", i,o);

	ft_printf("Test 8. \n");
	o =    printf("sysv: %o,%o,%o :\n", 100, 1000, 100000);
	i = ft_printf("myve: %o,%o,%o :\n", 100, 1000, 100000);	
	printf(" my length %i. system lenght %i\n", i,o);

	ft_printf("Test 9. \n");
	o =    printf("sysv: %u,%u,%u :\n", 100, 1000, 100000);
	i = ft_printf("myve: %u,%u,%u :\n", 100, 1000, 100000);	
	printf(" my length %i. system lenght %i\n", i,o);



	printf("\n************************************\n");
	printf("     ADVANCED TESTING WITH FLAGS\n");
	printf("*************************************\n\n");
	
	ft_printf("Test 10. \n");
	o =    printf("sysv: %#x, %#X, %#o :\n", 100, 1000, 100000);
	i = ft_printf("myve: %#x, %#X, %#o :\n", 100, 1000, 100000);	
	printf(" my length %i. system lenght %i\n", i,o);


	
	printf ("\n*********************\n");
	printf ("\n*********************\n");
	

	printf("BONUS: %%b prints binary\n");
	i = ft_printf("myve: %b,%b,%b,%b :\n", 888888, 256, 65535, 65536);	

	printf ("\n*********************\n");
	printf ("Characters: %c %c \n", 'a', 65);
	printf ("Decimals: %d %ld\n", 1977, 650000L);
	printf ("Preceding with blanks: %10d \n", 1977);
	printf ("Preceding with zeros: %010d \n", 1977);
	printf ("Some different radices: %d %x %o %#x %#o \n", 100, 100, 100, 100, 100);
	printf ("more dif: %#x, %#X, %#o \n", 100, 100, 100);
	printf ("floats: %4.2f %+.0e %E \n", 3.1416, 3.1416, 3.1416);
	printf ("Width trick: %*d \n", 5, 10);
	printf ("%s \n", "A string");
	
	printf ("%% \n");

	printf("¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤\n¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤\n");

	char **uio;
	uio = ft_frexp(3.1416);
	printf ("frexp = %s    and %s and %s\n", uio[0], uio[1], uio[2]);
	printf ("float 3.1416 = %.51f\n", 3.1416); 
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
