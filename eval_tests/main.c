/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: severi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 13:46:50 by severi            #+#    #+#             */
/*   Updated: 2022/05/18 18:59:41 by ssavukos         ###   ########.fr       */
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

/*
	ft_printf("Test 24. - ");
	printf("From discord\n");
	o = printf("%.30f", 0.0025);
	printf(" <-- system\n");
	i = ft_printf("%.30f", 0.0025);
	printf(" <-- yours\n");
	printf(" my length %i. system lenght %i\n", i,o);
*/

	ft_printf("Test 10. \n");
	o =    ft_printf ("ft_float 3.1416 = %.51f\n", 3.1416);
	i = 	  printf ("   float 3.1416 = %.51f\n", 3.1416);
	printf(" my length %i. system lenght %i\n", i,o);
	o =    ft_printf ("ft_float 3.1416 = %f\n", 3.1416);
	i = 	  printf ("   float 3.1416 = %f\n", 3.1416);
	o =    ft_printf ("ft_float 3.1416 = %.1f\n", 3.1416);
	i = 	  printf ("   float 3.1416 = %.1f\n", 3.1416);
	o =    ft_printf ("ft_float 3.1416 = %.3f\n", 3.1416);
	i = 	  printf ("   float 3.1416 = %.3f\n", 3.1416);
	o =    ft_printf ("ft_float 3.1416 = %.5f\n", 3.1416);
	i = 	  printf ("   float 3.1416 = %.5f\n", 3.1416);
	o =    ft_printf ("ft_float 3.1416 = %.7f\n", 3.1416);
	i = 	  printf ("   float 3.1416 = %.7f\n", 3.1416);
	o =    ft_printf ("ft_float 3.1416 = %.9f\n", 3.1416);
	i = 	  printf ("   float 3.1416 = %.9f\n", 3.1416);
	o =    ft_printf ("ft_float 3.1416 = %.11f\n", 3.1416);
	i = 	  printf ("   float 3.1416 = %.11f\n", 3.1416);
	o =    ft_printf ("ft_float 3.1416 = %.13f\n", 3.1416);
	i = 	  printf ("   float 3.1416 = %.13f\n", 3.1416);
	o =    ft_printf ("ft_float 3.1416 = %.15f\n", 3.1416);
	i = 	  printf ("   float 3.1416 = %.15f\n", 3.1416);
	o =    ft_printf ("ft_float 3.1416 = %.16f\n", 3.1416);
	i = 	  printf ("   float 3.1416 = %.16f\n", 3.1416);
	o =    ft_printf ("ft_float 3.1416 = %.17f\n", 3.1416);
	i = 	  printf ("   float 3.1416 = %.17f\n", 3.1416);
	o =    ft_printf ("ft_float 3.1416 = %.18f\n", 3.1416);
	i = 	  printf ("   float 3.1416 = %.18f\n", 3.1416);
	o =    ft_printf ("ft_float 3.1416 = %.19f\n", 3.1416);
	i = 	  printf ("   float 3.1416 = %.19f\n", 3.1416);

	ft_printf("Test 11. \n");
	o =    printf("   float 1249328409.34897329487 = %f\n", 1249328409.34897329487);
	i = ft_printf ("ft_float 1249328409.34897329487 = %f\n", 1249328409.34897329487);
	printf(" my length %i. system lenght %i\n", i,o);

	long double lo = 1249328409.34897329487;
	long double li = 1249328409.34897329487;

	ft_printf("Test 11.b) L \n");
	o =    printf("long    float 1249328409.34897329487 = %Lf\n", lo);
	i = ft_printf ("long ft_float 1249328409.34897329487 = %Lf\n", li);
	printf(" my length %i. system lenght %i\n", i,o);

	ft_printf("Test 12. \n");
	o =    printf("   float 12493284091249328409.34897329487 = %f\n", 12493284091249328409.34897329487);
	i = ft_printf ("ft_float 12493284091249328409.34897329487 = %f\n", 12493284091249328409.34897329487);
	printf(" my length %i. system lenght %i\n", i,o);

	lo = 12493284091249328409.34897329487;
	li = 12493284091249328409.34897329487;
	ft_printf("Test 12.b) L \n");
	o =    printf("   float 12493284091249328409.34897329487 = %Lf\n", lo);
	i = ft_printf ("ft_float 12493284091249328409.34897329487 = %Lf\n", li);
	printf(" my length %i. system lenght %i\n", i,o);

	ft_printf("Test 13. \n");
	o =    printf("   float 123456789123456789123456789.123456789 = %f\n", 123456789123456789123456789.123456789);
	i = ft_printf ("ft_float 123456789123456789123456789.123456789 = %f\n", 123456789123456789123456789.123456789);
	printf(" my length %i. system lenght %i\n", i,o);

	ft_printf("Test 14. \n");
	o =    printf ("   printf printing float 3.1416 = %f\n", 3.1416);
	i = ft_printf("ft_printf printing float 3.1416 = %f\n", 3.1416);
	printf(" my length %i. system lenght %i\n", i,o);
	
	ft_printf("Test 15. \n");
	o =    printf ("   printf printing float 3.1416 with .10 = %.10f\n", 3.1416);
	i = ft_printf("ft_printf printing float 3.1416 with .10 = %.10f\n", 3.1416);
	printf(" my length %i. system lenght %i\n", i,o);
	
	ft_printf("Test 16. \n");
	o =    printf ("   printf printing float 3.1416 with .3 = %.3f\n", 3.1416);
	i = ft_printf("ft_printf printing float 3.1416 with .3 = %.3f\n", 3.1416);
	printf(" my length %i. system lenght %i\n", i,o);
	
	ft_printf("Test 17. \n");
	o =    printf ("   printf printing float 3.1416 with .53 = %.53f\n", 3.1416);
	i = ft_printf("ft_printf printing float 3.1416 with .53 = %.53f\n", 3.1416);
	printf(" my length %i. system lenght %i\n", i,o);
	
	ft_printf("Test 18. \n");
	o =    printf ("   printf printing float 3.1416 with .153 = %.153f\n", 3.1416);
	i = ft_printf("ft_printf printing float 3.1416 with .153 = %.153f\n", 3.1416);
	printf(" my length %i. system lenght %i\n", i,o);

	ft_printf("Test 18.b) 0-pad \n");
	o =    printf ("   printf printing float 3.1416 with .153 = %0.153f\n", 3.1416);
	i = ft_printf("ft_printf printing float 3.1416 with .153 = %0.153f\n", 3.1416);
	printf(" my length %i. system lenght %i\n", i,o);

	li = 3.1416;
	lo = 3.1416;
	ft_printf("Test 18.c) L \n");
	o =    printf ("   printf printing float 3.1416 with .153 = %.153Lf\n", lo);
	i = ft_printf("ft_printf printing float 3.1416 with .153 = %.153Lf\n", li);
	printf(" my length %i. system lenght %i\n", i,o);
	
	ft_printf("Test 19. \n");
	o =    printf("ft_printf printing float 3.1416 with .10 = %.10f\n", 3.1416);
	i = ft_printf("ft_printf printing float 3.1416 with .10 = %.10f\n", 3.1416);
	printf(" my length %i. system lenght %i\n", i,o);
	
	ft_printf("Test 20. \n");
	float flow = 2.96f;
	o =    printf("double with    printf: %f \n", flow);
	i = ft_printf("double with ft_printf: %f \n", flow);
	printf(" my length %i. system lenght %i\n", i,o);
	
	ft_printf("Test 21. \n");
	o =    printf ("   printf printing float 3.1416 with .10 = %14.10f\n", 3.1416);
	i = ft_printf("ft_printf printing float 3.1416 with .10 = %14.10f\n", 3.1416);
	printf(" my length %i. system lenght %i\n", i,o);
	
	ft_printf("Test 22. \n");
	o =    printf ("ft_float 3.1416 with 51.51f = \"%10f\"\n", 3.1416);
	i = ft_printf ("   float 3.1416 with 51.51f = \"%10f\"\n", 3.1416);
	printf(" my length %i. system lenght %i\n", i,o);
	
	ft_printf("Test 23. \n");
	i = ft_printf ("ft_float 3.1416 with 51.51f = \"%10f\"\n", 113431243.1416);
	o =    printf ("   float 3.1416 with 51.51f = \"%10f\"\n", 113431243.1416);
	printf(" my length %i. system lenght %i\n", i,o);
	
	ft_printf("Test 24. - ");
	printf("From discord\n");
	o = printf("%.30f", 0.0025);
	printf(" <-- system\n");
	i = ft_printf("%.30f", 0.0025);
	printf(" <-- yours\n");
	printf(" my length %i. system lenght %i\n", i,o);

	ft_printf("Test 25. \n");
	o =    printf("   float 123456789123456789123456789.123456789 = %.6f\n", 123456789123456789123456789.123456789);
	i = ft_printf ("ft_float 123456789123456789123456789.123456789 = %.6f\n", 123456789123456789123456789.123456789);
	printf(" my length %i. system lenght %i\n", i,o);

	ft_printf("Test 26. \n");
	o = printf ("Characters: %c %c", 'a', 65);
	printf(" <-- system\n");
	i = ft_printf ("Characters: %c %c", 'a', 65);
	printf(" <-- yours\n");
	printf(" my length %i. system lenght %i\n", i,o);

	ft_printf("Test 27. \n");
	o = printf ("Decimals: %d %ld", 1977, 650000L);
	printf(" <-- system\n");
	i = ft_printf ("Decimals: %d %ld", 1977, 650000L);
	printf(" <-- yours\n");
	printf(" my length %i. system lenght %i\n", i,o);

	ft_printf("Test 28. \n");
	float flow2 = 3.1416f;
	o =    printf("double with    printf: %f \n", flow2);
	i = ft_printf("double with ft_printf: %f \n", flow2);
	printf(" my length %i. system lenght %i\n", i,o);
	o =    printf("double with    printf: %.51f \n", flow2);
	i = ft_printf("double with ft_printf: %.51f \n", flow2);

	ft_printf("Test 29. \n");
	float flow3 = 3.1416f;
	o =    printf("double with    printf: %.25lf \n", flow3);
	i = ft_printf("double with ft_printf: %.25f \n", flow3);
	printf(" my length %i. system lenght %i\n", i,o);

	ft_printf("Test 30. \n");
	//float flow4 = 3.1416f;
	o =    printf("double with    printf: %.35lf \n", 3.1416);
	i = ft_printf("double with ft_printf: %.35f \n", 3.1416);
	printf(" my length %i. system lenght %i\n", i,o);

	printf("************************************\n");
	printf("     ADVANCED TESTING WITH FLAGS\n");
	printf("*************************************\n");
	
	ft_printf("Test 31. with #x,#X,#o \n");
	o =    printf("sysv: %#x, %#X, %#o :\n", 100, 1000, 100000);
	i = ft_printf("myve: %#x, %#X, %#o :\n", 100, 1000, 100000);	
	printf(" my length %i. system lenght %i\n", i,o);

	ft_printf("Test 32. \n");
	o = printf ("Some different radices: %d %x %o %#x %#o", 100, 100, 100, 100, 100);
	printf(" <-- system\n");
	i = ft_printf ("Some different radices: %d %x %o %#x %#o", 100, 100, 100, 100, 100);
	printf(" <-- yours\n");
	printf(" my length %i. system lenght %i\n", i,o);


	ft_printf("Test 33. \n");
	o = printf ("more dif: %#x, %#X, %#o", 100, 100, 100);
	printf(" <-- system\n");
	i = ft_printf ("more dif: %#x, %#X, %#o", 100, 100, 100);
	printf(" <-- yours\n");
	printf(" my length %i. system lenght %i\n", i,o);


	ft_printf("Test 36. \n");
	printf("%010d", 1997);
	printf(" <-- system\n");
	ft_printf("%010d", 1997);
	printf(" <-- yours\n");

	ft_printf("Test 37. \n");
	o =     printf ("Preceding with minus: '%-10d' \n", 1977);
	i =  ft_printf ("Preceding with minus: '%-10d' \n", 1977);
	printf(" my length %i. system lenght %i\n", i,o);
	
	ft_printf("Test 38. \n");
	o =    printf ("Preceding with plus:  '%+10d' \n", 1977);
	i = ft_printf ("Preceding with plus:  '%+10d' \n", 1977);
	printf(" my length %i. system lenght %i\n", i,o);

	ft_printf("Test 39. \n");
	o =    printf ("Preceding with blanks:'%10d' \n", 1977);
	i = ft_printf ("Preceding with blanks:'%10d' \n", 1977);
	printf(" my length %i. system lenght %i\n", i,o);

	ft_printf("Test 40. \n");
	o =    printf ("Preceding with blanks:'%10d'", -1977);
	printf(" <-- system\n");
	i = ft_printf ("Preceding with blanks:'%10d'", -1977);
	printf(" <-- yours\n");
	printf(" my length %i. system lenght %i\n", i,o);

	ft_printf("Test 41. \n");
	o =    printf ("Preceding with zeros: '%010d' \n", 1977);
	i = ft_printf ("Preceding with zeros: '%010d' \n", 1977);
	printf(" my length %i. system lenght %i\n", i,o);

	ft_printf("Test 42. \n");
	o =    printf ("Preceding with zeros: '%0u' \n", -100);
	i = ft_printf ("Preceding with zeros: '%0u' \n", -100);
	printf(" my length %i. system lenght %i\n", i,o);

	ft_printf("Test 43. \n");
	o =    printf ("Preceding with blanks:'%10d' \n", -1977);
	i = ft_printf ("Preceding with blanks:'%10d' \n", -1977);
	printf(" my length %i. system lenght %i\n", i,o);

	ft_printf("Test 44. \n");
	o =    printf ("Preceding with -10d:  '%-10d' \n", 1977);
	i = ft_printf ("Preceding with -10d:  '%-10d' \n", 1977);
	printf(" my length %i. system lenght %i\n", i,o);

	ft_printf("Test 45. \n");
	i =    printf ("Preceding with blanks:'%10d' \n", -1977);
	o = ft_printf ("Preceding with blanks:'%10d' \n", -1977);
	printf(" my length %i. system lenght %i\n", i,o);

	ft_printf("Test 45. \n");
	i =    printf ("Preceding with - 10d: '%- 10d' \n", 1977);
	o = ft_printf ("Preceding with - 10d: '%- 10d' \n", 1977);
	printf(" my length %i. system lenght %i\n", i,o);

	ft_printf("Test 46. \n");
	i =    printf ("Preceding with -10d:  '% -10d' \n", 1977);
	o = ft_printf ("Preceding with -10d:  '% -10d' \n", 1977);
	printf(" my length %i. system lenght %i\n", i,o);

	ft_printf("Test 47. \n");
	i =    printf ("Preceding with - 10d: '%- 10d' \n", -1977);
	o = ft_printf ("Preceding with - 10d: '%- 10d' \n", -1977);
	printf(" my length %i. system lenght %i\n", i,o);

	ft_printf("Test 48. \n");
	i =    printf ("Preceding with -10d:  '% -10d' \n", -1977);
	o = ft_printf ("Preceding with -10d:  '% -10d' \n", -1977);
	printf(" my length %i. system lenght %i\n", i,o);

	ft_printf("Test 49. \n");
	i =    printf ("Preceding with -10d:  '% -10d' \n", -1977);
	o = ft_printf ("Preceding with -10d:  '% -10d' \n", -1977);
	printf(" my length %i. system lenght %i\n", i,o);

	ft_printf("Test 50. \n");
	i =    printf ("Preceding with blanks:'% 10d'", 1977);
	printf(" <-- system\n");
	o = ft_printf ("Preceding with blanks:'% 10d'", 1977);
	printf(" <-- yours\n");
	printf(" my length %i. system lenght %i\n", o,i);

	ft_printf("Test 51. \n");
	i =    printf ("Preceding with blanks:'% 10d' \n", -1977);
	o = ft_printf ("Preceding with blanks:'% 10d' \n", -1977);
	printf(" my length %i. system lenght %i\n", i,o);

	ft_printf("Test 52. \n");
	i =    printf ("Preceding with zeros: '%0 10d' \n", 1977);
	o = ft_printf ("Preceding with zeros: '%0 10d' \n", 1977);
	printf(" my length %i. system lenght %i\n", o,i);

	ft_printf("Test 53. \n");
	i =    printf ("Preceding with -+: '%-+10d' \n", 1977);
	o = ft_printf ("Preceding with -+: '%-+10d' \n", 1977);
	printf(" my length %i. system lenght %i\n", i,o);

	ft_printf("Test 54. \n");
	i =    printf ("Preceding with +-: '%+-10d' \n", 1977);
	o = ft_printf ("Preceding with +-: '%+-10d' \n", 1977);
	printf(" my length %i. system lenght %i\n", i,o);

	ft_printf("Test 55. \n");
	i =    printf ("Preceding with ' ': '% 10d' \n", -1977);
	o = ft_printf ("Preceding with ' ': '% 10d' \n", -1977);
	printf(" my length %i. system lenght %i\n", i,o);

	ft_printf("Test 56. \n");
	i =    printf ("Preceding with 0' ': '%0 10d' \n", -1977);
	o = ft_printf ("Preceding with 0' ': '%0 10d' \n", -1977);
	printf(" my length %i. system lenght %i\n", i,o);

	ft_printf("Test 57. \n");
	i =    printf ("Preceding with 0' ': '% d' \n", 1977);
	o = ft_printf ("Preceding with 0' ': '% d' \n", 1977);
	printf(" my length %i. system lenght %i\n", i,o);
/*
	ft_printf("Test 58. \n");
	i = ft_printf("%5%");
	printf(" <-- yours\n");
	o = printf("%5%");
	printf(" <-- system\n");
	printf(" my length %i. system lenght %i\n", i,o);

	ft_printf("Test 59. \n");
	i = ft_printf("%-5%");
	printf(" <-- yours\n");
	o = printf("%-5%");
	printf(" <-- system\n");
	printf(" my length %i. system lenght %i\n", i,o);
*/
/*	ft_printf("Test 60. \n");
	i = ft_printf("%.0%");
	printf(" <-- yours\n");
	o = printf("%.0%");
	printf(" <-- system\n");
	printf(" my length %i. system lenght %i\n", i,o);

	ft_printf("Test 61. \n");
	i = ft_printf("%   %", "test");
	printf(" <-- yours\n");
	o = printf("%   %", "test");
	printf(" <-- system\n");
	printf(" my length %i. system lenght %i\n", i,o);
*/
	ft_printf("Test 62. \n");
	i = ft_printf("%x", 0);
	printf(" <-- yours\n");
	o = printf("%x", 0);
	printf(" <-- system\n");
	printf(" my length %i. system lenght %i\n", i,o);

	ft_printf("Test 63. \n");
	i = ft_printf("%X", 0);
	printf(" <-- yours\n");
	o = printf("%X", 0);
	printf(" <-- system\n");
	printf(" my length %i. system lenght %i\n", i,o);


	unsigned long int lui = 4294967296;
	ft_printf("Test 64. \n");
	i = ft_printf("%lx", lui);
	printf(" <-- yours\n");
	o = printf("%lx", lui);
	printf(" <-- system\n");
	printf(" my length %i. system lenght %i\n", i,o);
/*
	ft_printf("Test 65. \n");
	i = ft_printf("%x", test);
	printf(" <-- yours\n");
	o = printf("%x", test);
	printf(" <-- system\n");
	printf(" my length %i. system lenght %i\n", i,o);
*/
	ft_printf("Test 66. \n");
	i = ft_printf("%10x", 42);
	printf(" <-- yours\n");
	o = printf("%10x", 42);
	printf(" <-- system\n");
	printf(" my length %i. system lenght %i\n", i,o);

	ft_printf("Test 67. \n");
	i = ft_printf("%-10x", 42);
	printf(" <-- yours\n");
	o = printf("%-10x", 42);
	printf(" <-- system\n");
	printf(" my length %i. system lenght %i\n", i,o);

	ft_printf("Test 68. \n");
	i = ft_printf("%lx", 4294967296);
	printf(" <-- yours\n");
	o = printf("%lx", 4294967296);
	printf(" <-- system\n");
	printf(" my length %i. system lenght %i\n", i,o);

	long long unsigned int ull = 4294967296;
	ft_printf("Test 69. long long uint\n");
	i = ft_printf("%llX", ull);
	printf(" <-- yours\n");
	o = printf("%llX", ull);
	printf(" <-- system\n");
	printf(" my length %i. system lenght %i\n", i,o);

	unsigned short int hu = 7296;
	ft_printf("Test 70. unsigned short int\n");
	i = ft_printf("%hX", hu);
	printf(" <-- yours\n");
	o = printf("%hX", hu);
	printf(" <-- system\n");
	printf(" my length %i. system lenght %i\n", i,o);

	hu = 7296;
	ft_printf("Test 71. unsigned short int\n");
	i = ft_printf("%hx", hu);
	printf(" <-- yours\n");
	o = printf("%hx", hu);
	printf(" <-- system\n");
	printf(" my length %i. system lenght %i\n", i,o);

	hu = 244;
	ft_printf("Test 72. hhx short int\n");
	i = ft_printf("%hhx", hu);
	printf(" <-- yours\n");
	o = printf("%hx", hu);
	printf(" <-- system\n");
	printf(" my length %i. system lenght %i\n", i,o);
	// ft_printf("%hhX", 4294967296);

/*	printf("{%*3d}\n", 5, 0);
	ft_printf("Test 72. test from discord\n");
	i = ft_printf("{%*3d}\n", 5, 0);
	printf(" <-- yours\n");
	o = printf("{%*3d}\n", 5, 0);
	printf(" <-- system\n");
	printf(" my length %i. system lenght %i\n", i,o);
*/

	printf("{%*d}\n", -5, 42); 	
	// ft_printf("%llx", 9223372036854775807);

/*/	ft_printf("%llx", 9223372036854775808);
	ft_printf("%010x", 542);
	ft_printf("%-15x", 542);
	ft_printf("%5.2x", 5427);
	ft_printf("%#llx", 9223372036854775807);
	ft_printf("%#x", 0);
	ft_printf("%#8x", 42);
	ft_printf("%#08x", 42);
	ft_printf("%#-08x", 42);
	ft_printf("@moulitest: %#.x %#.0x", 0, 0);
	ft_printf("@moulitest: %5.x %5.0x", 0, 0);
	ft_printf("%10s is a string", "this");
	ft_printf("%.2s is a string", "this");
	ft_printf("%5.2s is a string", "this");

*/


  printf("\n");
  printf("**************THESE TESTS STILL FAIL\n");
  ft_printf("%5%");                             // "    %"
 // printf("%5%");                             // "    %"
printf("\n");

  ft_printf("%-5%");                            // "%    "
 // printf("%-5%");                            // "%    "
printf("\n");

  ft_printf("%.0%");                            // "%"
 // printf("%.0%");                            // "%"
printf("\n");

  ft_printf("%%", "test");                      // "%"
 // printf("%%", "test");                      // "%"
printf("\n");


  ft_printf("%   %", "test");                   // "%"
  //printf("%   %", "test");                   // "%"
printf("\n");

  ft_printf("%#x", 0);                          // "0"
  printf("%#x", 0);                          // "0"
printf("\n");

  ft_printf("%#08x", 42);                       // "0x00002a"
  printf("%#08x", 42);                       // "0x00002a"
printf("\n");

  ft_printf("@moulitest: %#.x %#.0x", 0, 0);    // "@moulitest:  "
  printf("@moulitest: %#.x %#.0x", 0, 0);    // "@moulitest:  "
printf("\n");


  ft_printf("@moulitest: %.x %.0x", 0, 0);      // "@moulitest:  "
  printf("@moulitest: %.x %.0x", 0, 0);      // "@moulitest:  
printf("\n");

  ft_printf("@moulitest: %5.x %5.0x", 0, 0);    // "@moulitest:            "
  printf("@moulitest: %5.x %5.0x", 0, 0);    // "@moulitest:            "
printf("\n");
  ft_printf("%10s is a string", "this");        // "      this is a string"
  printf("%10s is a string", "this");        // "      this is a string"
  printf("\n");

  ft_printf("%.2s is a string", "this");        // "th is a string"
  printf("%.2s is a string", "this");        // "th is a string"
printf("\n");

  ft_printf("%5.2s is a string", "this");       // "   th is a string"
  printf("%5.2s is a string", "this");       // "   th is a string"
printf("\n");
  ft_printf("%10s is a string", "");            // "           is a string"
  printf("%10s is a string", "");            // "           is a string"
printf("\n");

  ft_printf("%.2s is a string", "");            // " is a string"
  printf("%.2s is a string", "");            // " is a string"
printf("\n");

  ft_printf("%5.2s is a string", "");           // "      is a string"
  printf("%5.2s is a string", "");           // "      is a string"
printf("\n");

  ft_printf("%-10s is a string", "this");       // "this       is a string"
  printf("%-10s is a string", "this");       // "this       is a string"
printf("\n");

  ft_printf("%-.2s is a string", "this");       // "th is a string"
  printf("%-.2s is a string", "this");       // "th is a string"

printf("\n");
  ft_printf("%-5.2s is a string", "this");      // "th    is a string"
  printf("%-5.2s is a string", "this");      // "th    is a string"
printf("\n");

  ft_printf("%-10s is a string", "");           // "           is a string"
  printf("%-10s is a string", "");           // "           is a string"
printf("\n");
  ft_printf("%-.2s is a string", "");           // " is a string"
  printf("%-.2s is a string", "");           // " is a string"
printf("\n");
  ft_printf("%-5.2s is a string", "");          // "      is a string"
  printf("%-5.2s is a string", "");          // "      is a string"
printf("\n");

  ft_printf("@moulitest: %s", NULL);            // "@moulitest: (null)"
//  printf("@moulitest: %s", NULL);            // "@moulitest: (null)"
printf("\n");

  ft_printf("%.2c", NULL);                      // "^@"
  //printf("%.2c", NULL);                      // "^@"
printf("\n");

  ft_printf("%s %s", NULL, "string");             // "(null) string"
  //printf("%s %s", NULL, "string");             // "(null) string"
printf("\n");
  ft_printf("%c", 42);                          // "*"
  printf("%c", 42);                          // "*"
printf("\n");

  ft_printf("%5c", 42);                         // "    *"
  printf("%5c", 42);                         // "    *"
printf("\n");

  ft_printf("%-5c", 42);                        // "*    "
  printf("%-5c", 42);                        // "*    "
printf("\n");
  ft_printf("@moulitest: %c", 0);               // "@moulitest: ^@"
  printf("@moulitest: %c", 0);               // "@moulitest: ^@"
printf("\n");

  ft_printf("%2c", 0);                          // " ^@"
  printf("%2c", 0);                          // " ^@"
printf("\n");

  ft_printf("%5o", 41);                         // "   51"
  printf("%5o", 41);                         // "   51"
printf("\n");

  ft_printf("%05o", 42);                        // "00052"
  printf("%05o", 42);                        // "00052"
printf("\n");

  ft_printf("%-5o", 2500);                      // "4704 "
  printf("%-5o", 2500);                      // "4704 "
printf("\n");

  ft_printf("%#6o", 2500);                      // " 04704"
  printf("%#6o", 2500);                      // " 04704"
printf("\n");

  ft_printf("%-#6o", 2500);                     // "04704 "
  printf("%-#6o", 2500);                     // "04704 "
printf("\n");

  ft_printf("%-05o", 2500);                     // "4704 "
 // printf("%-05o", 2500);                     // "4704 "
printf("\n");
  ft_printf("%-5.10o", 2500);                   // "0000004704"
  printf("%-5.10o", 2500);                   // "0000004704"
printf("\n");

  ft_printf("%-10.5o", 2500);                   // "04704     "
  printf("%-10.5o", 2500);                   // "04704     "
printf("\n");

  ft_printf("@moulitest: %o", 0);               // "@moulitest: 0"
  printf("@moulitest: %o", 0);               // "@moulitest: 0"
printf("\n");

  ft_printf("@moulitest: %.o %.0o", 0, 0);      // "@moulitest:  "
  printf("@moulitest: %.o %.0o", 0, 0);      // "@moulitest:  "
printf("\n");

  ft_printf("@moulitest: %5.o %5.0o", 0, 0);    // "@moulitest:            "
  printf("@moulitest: %5.o %5.0o", 0, 0);    // "@moulitest:            "
printf("\n");
  ft_printf("@moulitest: %#.o %#.0o", 0, 0);    // "@moulitest: 0 0"
  printf("@moulitest: %#.o %#.0o", 0, 0);    // "@moulitest: 0 0"
printf("\n");
  ft_printf("@moulitest: %.10o", 42);           // "@moulitest: 0000000052"
  printf("@moulitest: %.10o", 42);           // "@moulitest: 0000000052"
printf("\n");
  ft_printf("%d", 1);                           // "1"
  printf("%d", 1);                           // "1"
printf("\n");
  ft_printf("%0+5d", 42);                       // "+0042"
  printf("%0+5d", 42);                       // "+0042"
printf("\n");
  ft_printf("%5d", -42);                        // "  -42"
  printf("%5d", -42);                        // "  -42"
printf("\n");
  ft_printf("%05d", -42);                       // "-0042"
  printf("%05d", -42);                       // "-0042"
printf("\n");
  ft_printf("%0+5d", -42);                      // "-0042"
  printf("%0+5d", -42);                      // "-0042"
printf("\n");
  ft_printf("%hd", 32768);                      // "-32768"
  printf("%hd", 32768);                      // "-32768"
printf("\n");
  ft_printf("%hhd", 128);                       // "-128"
  printf("%hhd", 128);                       // "-128"
printf("\n");
  ft_printf("%hhd", -129);                      // "127"
  printf("%hhd", -129);                      // "127"
printf("\n");
  ft_printf("%ld", 2147483648);                 // "2147483648"
  printf("%ld", 2147483648);                 // "2147483648"
printf("\n");
  ft_printf("%ld", -2147483649);                // "-2147483649"
  printf("%ld", -2147483649);                // "-2147483649"
printf("\n");
 // ft_printf("%lld", 9223372036854775807);       // "9223372036854775807"
 // printf("%lld", 9223372036854775807);       // "9223372036854775807"
printf("\n");
//  ft_printf("%lld", -9223372036854775808);      // "-9223372036854775808"
//  printf("%lld", -9223372036854775808);      // "-9223372036854775808"
printf("\n");
  ft_printf("%4.15d", 42);                      // "000000000000042"
  printf("%4.15d", 42);                      // "000000000000042"
printf("\n");
  ft_printf("%.10d", 4242);                     // "0000004242"
  printf("%.10d", 4242);                     // "0000004242"
printf("\n");
  ft_printf("%10.5d", 4242);                    // "     04242"
  printf("%10.5d", 4242);                    // "     04242"
printf("\n");
  ft_printf("%-10.5d", 4242);                   // "04242     "
  printf("%-10.5d", 4242);                   // "04242     "
printf("\n");
  ft_printf("% 10.5d", 4242);                   // "     04242"
  printf("% 10.5d", 4242);                   // "     04242"
printf("\n");
  ft_printf("%+10.5d", 4242);                   // "    +04242"
  printf("%+10.5d", 4242);                   // "    +04242"
  printf("\n");
  ft_printf("%-+10.5d", 4242);                  // "+04242    "
  printf("%-+10.5d", 4242);                  // "+04242    "
printf("\n");
  ft_printf("%03.2d", 0);                       // " 00"
  //printf("%03.2d", 0);                       // " 00"
printf("\n");

  ft_printf("%03.2d", 1);                       // " 01"
  //printf("%03.2d", 1);                       // " 01"
printf("\n");
  ft_printf("%03.2d", -1);                      // "-01"
  //printf("%03.2d", -1);                      // "-01"
printf("\n");
  ft_printf("@moulitest: %.10d", -42);          // "@moulitest: -0000000042"
  printf("@moulitest: %.10d", -42);          // "@moulitest: -0000000042"
printf("\n");
  ft_printf("@moulitest: %.d %.0d", 0, 0);      // "@moulitest:  "
  printf("@moulitest: %.d %.0d", 0, 0);      // "@moulitest:  "
printf("\n");

  ft_printf("@moulitest: %5.d %5.0d", 0, 0);    // "@moulitest:            "
  printf("@moulitest: %5.d %5.0d", 0, 0);    // "@moulitest:            "
printf("\n");
  ft_printf("%15u", (unsigned int)4294967295);                // "     4294967295"
  printf("%15u", (unsigned int)4294967295);                // "     4294967295"
printf("\n");
  ft_printf("%-15u", (unsigned int)4294967295);               // "4294967295     "
  printf("%-15u", (unsigned int)4294967295);               // "4294967295     "
printf("\n");
  
  ft_printf("%015u", (unsigned int)4294967295);               // "000004294967295"
  printf("%015u", (unsigned int)4294967295);               // "000004294967295"
printf("\n");
  ft_printf("%lu", 4294967296);                 // "4294967296"
  printf("%lu", 4294967296);                 // "4294967296"
printf("\n");
  ft_printf("%lu", (long unsigned int)-42);                        // "18446744073709551574"
  printf("%lu", (long unsigned int)-42);                        // "18446744073709551574"
printf("\n");
  ft_printf("%llu", (long long unsigned int)4999999999);                // "4999999999"
  printf("%llu", (long long unsigned int)4999999999);                // "4999999999"
printf("\n");
  ft_printf("@moulitest: %.5u", 42);            // "@moulitest: 00042"
  printf("@moulitest: %.5u", 42);            // "@moulitest: 00042"
  printf("\n");
  printf("***************END\n");


	printf ("*********************\n");
	printf("************************************\n");
	printf("     BONUSES\n");
	printf("*************************************\n");
	printf("BONUS: %%b prints binary\n");
	i = ft_printf("myve: %b,%b,%b,%b :\n", 888888, 256, 65535, 65536);	
	printf ("*********************\n");
	printf ("floats: %4.2f %+.0e %E \n", 3.1416, 3.1416, 3.1416);
	printf ("Width trick: %*d \n", 5, 10);
	printf ("%s \n", "A string");
	printf ("%% \n");
	printf("¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤\n¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤\n");
/*
	char *s1 = "hello";
	char *s2 = "world";
	char *s3[] = {"hello", "world"};
	printf("%s", s1);
	printf("\n");
	printf("%s", s2);
	printf("\n");
	printf("%s", s3[0]);
	printf(" - ");
	printf("%s", s3[1]);
	printf("\n");

	ft_add_zeros(&s1, 6);
	printf("%s", s1);
	printf("\n");
	ft_add_zeros(&s3[1], 5);
	printf("%s", s3[0]);
	printf(" - ");
	printf("%s", s3[1]);
	printf("\n");
*/
/*	float flo = 2.97f;
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
*/
/*
	char *s1;
	char *s2;
	char *s3;
	
	s1 = ft_strnew(4);
	s2 = ft_strnew(4);
	s1[0] = (char)192; // 1100 0000
	s1[1] = (char)128; // 1000 0000 
	s1[2] = (char)128; // 1000 0000
	s1[3] = (char)0;   // 0000 0000
	s2[0] = (char)255; // 1111 1111
	s2[1] = (char)255; // 1111 1111
	s2[2] = (char)255; // 1111 1111
	s2[3] = (char)127; // 0111 1111

	s3 = bigint_add(s1,s2);
	
	printf("after bigint add: [%hhu].[%hhu].[%hhu].[%hhu].[%hhu].[%hhu].[%hhu].[%hhu]. \n", s3[0],s3[1],s3[2],s3[3],s3[4],s3[5],s3[6],s3[7]);

	//s3 = bigint_add(s1, s1);
	//printf("after bigint add: [%hhu].[%hhu].[%hhu].[%hhu].[%hhu].[%hhu].[%hhu].[%hhu]. \n", s3[0],s3[1],s3[2],s3[3],s3[4],s3[5],s3[6],s3[7]);

	printf("bigint addition of 134 217 728 + 268 435 455         = 402653183\n");
	printf("                   0x0800 0000 + 0x0FFF FFFF         = 0x17FF FFFF\n");
	printf("           0xC0 0x80 0x80 0x00 + 0xFF 0xFF 0xFF 0x7F = 0x81 0xBF 0xFF 0xFF 0x7F\n");
	printf("                 192 128 128 0 + 255 255 255 127     = 129 191 255 255 127\n");
	
	char *s4 = ft_strnew(1);
	char *s5 = ft_strnew(1);

	s4[0] = (char)32;
	s5[0] = (char)34;

	char *s6 = bigint_add(s4, s5);
	printf("bigint_add(34, 32): %hhu, and it should equal to 66\n", s6[0]);
	char *s7 = ft_strnew(1);
	s7[0] = (char)100;
	char *s8 = bigint_add(s7, s7);
	printf("bigint_add(100, 100): %hhu,%hhu and it should equal to 129,72\n", s8[0], s8[1]);
	
	char *s10 = ft_strnew(2);
	s10[0] = (char)240;
	s10[1] = (char)112;
	char *s9 = bigint_add(s10, s10);
	printf("bigint_add(240'112, 240'112): %hhu,%hhu,%hhu and it should equal to 129,225,96\n", s9[0], s9[1], s9[2]);
*/
/*	int num = 0;
	while(num < 5)
	{
		printf("bigint_add(240'112, %i*240'112): %hhu,%hhu,%hhu,%hhu \n", num, s10[0], s10[1], s10[2], s10[3]);
		s10 = bigint_add(s10, s10);
		num++;
	}
*/
/*	char *s11 = ft_strnew(2);
	
	int num1 = 0;
	while(num1 < 8)
	{
		s11[num1] = (char)255;
		num1++;
	}
	s11[num1] = (char)0;
	num1 = 0;
	printf("bigint_add(");
	while(num1 < 13)
	{
		printf("%hhu,", s11[num1]);
		num1++;
	}
	printf(" + ");
	num1 = 0;
	while(num1 < 13)
	{
		printf("%hhu,", s11[num1]);
		num1++;
	}
	printf(")");
	char *s12 = bigint_add(s11, s11);
	num1 = 0;
	printf(" = ");
	while(num1 < 15)
	{
		printf("%hhu,", s12[num1]);
		num1++;
	}
	printf("\n");
*/	/*
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
