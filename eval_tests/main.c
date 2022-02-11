/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: severi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 13:46:50 by severi            #+#    #+#             */
/*   Updated: 2022/02/11 16:14:01 by severi           ###   ########.fr       */
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


	//float flow = 2.96f;

	//printf("double with printf: %f \n", flow);
	//ft_printf("double with ft_printf: %f \n", flow);

	printf("************************************\n");
	printf("BASIC TESTING WITH ONLY SPECIFIERS\n");
	printf("*************************************\n");
	
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
	o =    printf("sysv: %u,%u,%u :\n", -100, -1000, -100000);
	i = ft_printf("myve: %u,%u,%u :\n", -100, -1000, -100000);	
	printf(" my length %i. system lenght %i\n", i,o);

	printf("************************************\n");
	printf("     ADVANCED TESTING WITH FLAGS\n");
	printf("*************************************\n");
	
	ft_printf("Test 10. \n");
	o =    printf("sysv: %#x, %#X, %#o :\n", 100, 1000, 100000);
	i = ft_printf("myve: %#x, %#X, %#o :\n", 100, 1000, 100000);	
	printf(" my length %i. system lenght %i\n", i,o);
	printf ("*********************\n");
	printf("************************************\n");
	printf("     BONUSES\n");
	printf("*************************************\n");
	printf("BONUS: %%b prints binary\n");
	i = ft_printf("myve: %b,%b,%b,%b :\n", 888888, 256, 65535, 65536);	
	printf ("*********************\n");
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

	//float flo = 2.97f;
	double dol = 2.97;
	//long double ldol = 2.97;

	//printf("floating point len:%li f: %f \n", sizeof(flo), flo);
	//printf("floating point len:%li f: %lf \n", sizeof(flo), flo);
	printf("double len:%li f: %f \n", sizeof(dol), dol);
	printf("double len:%li f: %lf \n", sizeof(dol),  dol);
	//printf("double len:%li f: %Lf \n", sizeof(ldol),  ldol);

	//ft_printf("floating point len:%li f: %f \n", sizeof(flo), flo);
	//ft_printf("floating point len:%li f: %lf \n", sizeof(flo), flo);
	ft_printf("double len:%li f: %f \n", sizeof(dol), dol);
	ft_printf("double len:%li f: %lf \n", sizeof(dol),  dol);
	//ft_printf("double len:%li f: %Lf \n", sizeof(ldol),  ldol);

	u_int64_t binary_as_uint64   = 0b0100000000000111110000101000111101011100001010001111010111000011;
	u_int64_t binary_as_uint64_1 = 0b0010000000000111110000101000111101011100001010001111010111000011;
	double	binary;
	double binary1;
	
	ft_memcpy(&binary,  &binary_as_uint64, 8);
	printf("double len in 0b format:%li f: %f \n", sizeof(binary), binary);
	ft_printf("double len in 0b format:%li f: %f \n", sizeof(binary), binary);
	
	memcpy(&binary1,  &binary_as_uint64_1, 8);
	printf("\n******%f*******%f********%f*****\n", dol, binary1, binary);
	printf("\n2: double len in 0b format:%li f: %f \n", sizeof(binary1), binary1);
	ft_printf("2 :double len in 0b format:%li f: %f \n", sizeof(binary1), binary1);


	/*
	double tenth = 0.1;

	printf("%f  \n", tenth);
	printf("%.1f  \n", tenth);
	printf("%.2f  \n", tenth);
	printf("%.3f  \n", tenth);
	printf("%.4f  \n", tenth);
	printf("%.5f  \n", tenth);
	printf("%.6f  \n", tenth);
	printf("%.16f \n", tenth);
	printf("%.17f \n", tenth);
	printf("%.18f \n", tenth);
	printf("%.19f \n", tenth);
	printf("%.20f \n", tenth);
	printf("%.21f \n", tenth);

	printf("\n*3***********************************\n");

	printf("%0.1f  \n", tenth);
	printf("%1.1f  \n", tenth);
	printf("%2.1f  \n", tenth);
	printf("%3.1f  \n", tenth);
	printf("%4.1f  \n", tenth);
	printf("%5.1f  \n", tenth);
	printf("%6.1f  \n", tenth);
	printf("\n*4***********************************\n");
	printf("1%0.1f  \n", tenth);
	printf("2%1.1f  \n", tenth);
	printf("3%2.1f  \n", tenth);
	printf("4%3.1f  \n", tenth);
	printf("5%4.1f  \n", tenth);
	printf("6%5.1f  \n", tenth);
	printf("7%6.1f  \n", tenth);

	double ii = 56.78901234567;

	printf("\n*5***********************************\n");
	printf("1 %lf  \n", ii);
	printf("2 %4.1lf  \n", ii);
	printf("3 %4.2lf  \n", ii);
	printf("4 %4.3lf  \n", ii);
	printf("5 %4.4lf  \n", ii);
	printf("6 %4.5lf  \n", ii);
	printf("7 %4.6lf  \n", ii);
	printf("\n*6***********************************\n");
	printf("1 %4f  \n", ii);
	printf("2 %1f  \n", ii);
	printf("3 %2f  \n", ii);
	printf("4 %3f  \n", ii);
	printf("5 %4f  \n", ii);
	printf("6 %5.3f  \n", ii);
	printf("7 %6.3f  \n", ii);
	printf("8 %7.3f  \n", ii);
	printf("9 %8.3f  \n", ii);
	printf("10 %9.3f  \n", ii);
	printf("11 %10.3f  \n", ii);

	printf("\n*7***********************************\n");
	printf("1 %f  \n", ii);
	printf("2 %10f  \n", ii);
	printf("3 %012f  \n", ii);

	printf("\n*8***********************************\n");
	printf("1 %.f  \n", 1.5);
	printf("2 %.f  \n", 2.5);
	printf("2 %.f  \n", 2.500000001);
	printf("3 %.f  \n", 3.5);
*/
//ft_printf("%b \n", tenth);
//	ft_printf("%b \n", ii);
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
