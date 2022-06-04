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
	//ft_printf("%-#6o", 2500);                     // "04704 "
	//ft_printf("%-5c", 42);                        // "*    "

//	ft_printf("%#6o", 2500);                      // " 04704"
//	ft_printf("%-5.10o", 2500);                   // "0000004704"
	char *my;
	char *system;
	int i=0,o=0;
	long double lo = 1249328409.34897329487;
	long double li = 1249328409.34897329487;

	my = "hello";
	system = "hello";


printf("\n");
//ft_printf("%d\\n", 42);

ft_printf("%ld\\n", 2147483647);

/*

printf("\n");
printf("\n");
printf("\n");
o = printf("%s\\n", L"ݗݜशব");
printf("\n");
printf("\n");
printf(" my length %i. system lenght %i\n", i,o);
printf("\n");
printf("\n");
printf("\n");
printf("\n");
i = ft_printf("%s\\n", L"ݗݜशব");
printf("\n");
printf(" my length %i. system lenght %i\n", i,o);
printf("\n");
printf("\n");
printf("Normal hlet okay");
printf("\n");
printf("\n");


*/

ft_printf("\\n");
ft_printf("%%\\n");

printf("\n");
printf("****1******");
printf("\n");
  ft_printf("%%\\n");
printf("\n");
printf("%%\\n");
printf("\n");
printf("****2******");
printf("\n");
  ft_printf("%d\\n", 42);
printf("\n");
printf("%d\\n", 42);
printf("\n");
printf("****3******");
printf("\n");
  ft_printf("%d%d\\n", 42, 41);
  printf("\n");
  printf("%d%d\\n", 42, 41);
printf("\n");
printf("\n");
printf("****4******");
printf("\n");
  ft_printf("%d%d%d\\n", 42, 43, 44);
  printf("\n");
  printf("%d%d%d\\n", 42, 43, 44);
printf("\n");
printf("\n");
printf("****5******");
printf("\n");
  ft_printf("%ld\\n", 2147483647);
  printf("\n");
  printf("%ld\\n", 2147483647);
printf("\n");
printf("\n");
printf("****6******");
printf("\n");
  ft_printf("%lld\\n", 9223372036854775807);
  printf("\n");
  printf("%lld\\n", 9223372036854775807);
printf("\n");
printf("\n");
printf("****7******");
printf("\n");
  ft_printf("%x\\n", 505);
  printf("\n");
  printf("%x\\n", 505);
printf("\n");
printf("\n");
printf("****8******");
printf("\n");
  ft_printf("%X\\n", 505);
  printf("\n");
  printf("%X\\n", 505);
printf("\n");
printf("\n");
printf("****9******");
printf("\n");
  ft_printf("%p\\n", &ft_printf);
  printf("\n");
  printf("%p\\n", &ft_printf);
printf("\n");
printf("\n");



printf("****10******");
printf("\n");
  ft_printf("%20.15d\\n", 54321);
  printf("\n");

/*
  printf("%20.15d\\n", 54321);
printf("\n");
printf("\n");
printf("****11******");
printf("\n");
  ft_printf("%-10d\\n", 3);
  printf("\n");
  printf("%-10d\\n", 3);
printf("\n");
printf("\n");
printf("****12******");
printf("\n");
  ft_printf("% d\\n", 3);
  printf("\n");
  printf("% d\\n", 3);
printf("\n");
printf("\n");
printf("****13******");
printf("\n");
  ft_printf("%+d\\n", 3);
  printf("\n");
  printf("%+d\\n", 3);
printf("\n");
printf("\n");
printf("****14******");
printf("\n");
  ft_printf("%010d\\n", 1);
  printf("\n");
  printf("%010d\\n", 1);
printf("\n");
printf("\n");
printf("****15******");
printf("\n");
  ft_printf("%hhd\\n", 0);
  printf("\n");
  printf("%hhd\\n", 0);
printf("\n");
printf("\n");
printf("****16******");
printf("\n");
  ft_printf("%jd\\n", 9223372036854775807);
  printf("\n");
  printf("%jd\\n", 9223372036854775807);
printf("\n");
printf("\n");

printf("****16 without j******");
printf("\n");
  ft_printf("%d\\n", 9223372036854775807);
  printf("\n");
  printf("%d\\n", 9223372036854775807);
printf("\n");
printf("\n");


printf("****17******");
printf("\n");
  ft_printf("%zd\\n", 4294967295);
  printf("\n");
  printf("%zd\\n", 4294967295);
printf("\n");
printf("\n");

printf("****17***without z***");
printf("\n");
  ft_printf("%d\\n", 4294967295);
  printf("\n");
  printf("%d\\n", 4294967295);
printf("\n");
printf("\n");


printf("****18**a****");
printf("\n");
printf("->");
printf("\n");
  ft_printf("%");
    printf("\n");
  printf("<-");
  printf("\n");
printf("\n");
printf("->");
printf("\n");
  printf("%");
    printf("\n");
  printf("<-");
  printf("\n");
printf("\n");
printf("\n");


printf("****18******");
printf("\n");
printf("->");
printf("\n");
  ft_printf("%\\n");
    printf("\n");
  printf("<-");
  printf("\n");
printf("\n");
printf("->");
printf("\n");
  printf("%\\n");
    printf("\n");
  printf("<-");
  printf("\n");
printf("\n");
printf("\n");
printf("****19******");
printf("\n");
printf("->");
printf("\n");
  ft_printf("%U\\n", 4294967295);
  printf("\n");
  printf("<-");
  printf("\n");
printf("->");
printf("\n");
  printf("%U\\n", 4294967295);
  printf("\n");
  printf("<-");
printf("\n");
printf("\n");
printf("****20******");
printf("\n");
  ft_printf("%u\\n", 4294967295);
  printf("\n");
  printf("%u\\n", 4294967295);
printf("\n");
printf("\n");
printf("****21******");
printf("\n");
  ft_printf("%o\\n", 40);
  printf("\n");
  printf("%o\\n", 40);
printf("\n");
printf("\n");
printf("****22******");
printf("\n");
  ft_printf("%%#08x\\n", 42);
  printf("\n");
  printf("%%#08x\\n", 42);
printf("\n");
printf("\n");
printf("****21******");
printf("\n");
  ft_printf("%x\\n", 1000);
  printf("\n");
  printf("%x\\n", 1000);
printf("\n");
printf("\n");
printf("****22******");
printf("\n");
  ft_printf("%#X\\n", 1000);
  printf("\n");
  printf("%#X\\n", 1000);
printf("\n");
printf("\n");
printf("****23******");
printf("\n");
  ft_printf("%s\\n", NULL);
  printf("\n");
  printf("%s\\n", NULL);
printf("\n");
printf("\n");
printf("****24******");
printf("\n");
printf("->");
  ft_printf("%S\\n", L"ݗݜशব");
  printf("<-");
  printf("\n");
  printf("->");
  printf("%S\\n", L"ݗݜशব");
  printf("<-");
printf("\n");
printf("what is going on\n");
printf("****25******");
printf("\n");
printf("here?");
printf("\n");
printf("->");
  ft_printf("%s%s\\n", "test", "test");
printf("<-");
  printf("\n");
  printf("->");
  printf("%s%s\\n", "test", "test");
  printf("<-");
printf("\n");
printf("\n");
printf("****26******");
printf("\n");
  ft_printf("%s%s%s\\n", "test", "test", "test");
  printf("\n");
  printf("%s%s%s\\n", "test", "test", "test");
printf("\n");
printf("\n");

printf("****27***c***");
printf("\n");
  ft_printf("%c\\n", 15000);
  printf("\n");
  printf("%c\\n", 15000);

printf("\n");
printf("\n");


printf("****27******");
printf("\n");
  ft_printf("%C\\n", 15000);
  printf("\n");
  printf("%C\\n", 15000);

printf("\n");
printf("\n");
printf("\n");
printf("\n");

printf("\n");



   printf("\\n");
printf("\n");

   printf("%%\\n");
printf("\n");

   printf("%d\\n", 42);
printf("\n");

   printf("%d%d\\n", 42, 41);
printf("\n");

   printf("%d%d%d\\n", 42, 43, 44);
printf("\n");

   printf("%ld\\n", 2147483647);
printf("\n");

   printf("%lld\\n", 9223372036854775807);
printf("\n");

   printf("%x\\n", 505);
printf("\n");

   printf("%X\\n", 505);
printf("\n");

   printf("%p\\n", &ft_printf);
printf("\n");

   printf("%20.15d\\n", 54321);
printf("\n");

   printf("%-10d\\n", 3);
printf("\n");

   printf("% d\\n", 3);
printf("\n");

   printf("%+d\\n", 3);
printf("\n");

   printf("%010d\\n", 1);
printf("\n");

   printf("%hhd\\n", 0);
printf("\n");

   printf("%jd\\n", 9223372036854775807);
printf("\n");

   printf("%zd\\n", 4294967295);
printf("\n");

   printf("%\\n");
printf("\n");

   printf("%U\\n", 4294967295);
printf("\n");

   printf("%u\\n", 4294967295);
printf("\n");

   printf("%o\\n", 40);
printf("\n");

   printf("%%#08x\\n", 42);
printf("\n");

   printf("%x\\n", 1000);
printf("\n");

   printf("%#X\\n", 1000);
printf("\n");

   printf("%s\\n", NULL);
printf("\n");

   printf("%S\\n", L"ݗݜशব");
printf("\n");

   printf("%s%s\\n", "test", "test");
printf("\n");

   printf("%s%s%s\\n", "test", "test", "test");
printf("\n");

   printf("%C\\n", 15000);
printf("\n");





/*
ft_printf("sdaölkdölAS<LDKWe%35oweröwk5po5e5ölj5jkl%ölwölaejsjj5eaw", 2423423423);
printf("\n");
// ft_printf("%js");
// printf("\n");
// printf("%js");
// printf("\n");

// ft_printf("%ölwölaejs");
// printf("\n");
// printf("%ölwölaejs");

ft_printf("sdaölkdölAS<LDKWe%3523.432422oweröwk5po5e5ölj5jkl%ölwölaejsjj5eaw", 2423423423);
printf("\n");

printf("# 0176 (%% ho)");
printf("\n");
  ft_printf("%ho", 67295);
printf("\n");
printf("%ho", 67295);
printf("\n");
printf("\n");

printf("# 0176 (%% hx)");
printf("\n");
  ft_printf("%hx", 4294967295);
printf("\n");
printf("%hx", 4294967295);
printf("\n");
printf("\n");


printf("# 0176 (%% hX)");
printf("\n");
  ft_printf("%hX", 4294967295);
printf("\n");
printf("%hX", 4294967295);
printf("\n");
printf("\n");

printf("# 0176 (%% hu)");
printf("\n");
  ft_printf("%hu", 4294967295);
printf("\n");
printf("%hu", 4294967295);
printf("\n");
printf("\n");



printf("\n");

printf("# 0176 (%% hho)");
printf("\n");
  ft_printf("%hho", 67295);
printf("\n");
printf("%hho", 67295);
printf("\n");
printf("\n");

printf("# 0176 (%% hhx)");
printf("\n");
  ft_printf("%hhx", 4294967295);
printf("\n");
printf("%hhx", 4294967295);
printf("\n");
printf("\n");


printf("# 0176 (%% hhX)");
printf("\n");
  ft_printf("%hhX", 4294967295);
printf("\n");
printf("%hhX", 4294967295);
printf("\n");
printf("\n");

printf("# 0176 (%% hhu)");
printf("\n");
  ft_printf("%hhu", 4294967295);
printf("\n");
printf("%hhu", 4294967295);
printf("\n");
printf("\n");






printf("\n");

printf("# 0176 (%% o)");
printf("\n");
  ft_printf("%o", 67295);
printf("\n");
printf("%o", 67295);
printf("\n");
printf("\n");

printf("# 0176 (%% x)");
printf("\n");
  ft_printf("%x", 4294967295);
printf("\n");
printf("%x", 4294967295);
printf("\n");
printf("\n");


printf("# 0176 (%% X)");
printf("\n");
  ft_printf("%X", 4294967295);
printf("\n");
printf("%X", 4294967295);
printf("\n");
printf("\n");

printf("# 0176 (%% u)");
printf("\n");
  ft_printf("%u", 4294967295);
printf("\n");
printf("%u", 4294967295);
printf("\n");
printf("\n");

printf("\n");

printf("# 0176 (%% lo)");
printf("\n");
  ft_printf("%lo", (long unsigned)4294967295);
printf("\n");
printf("%lo", (long unsigned)4294967295);
printf("\n");
printf("\n");

printf("# 0176 (%% lx)");
printf("\n");
  ft_printf("%lx", 4294967295);
printf("\n");
printf("%lx", 4294967295);
printf("\n");
printf("\n");


printf("# 0176 (%% lX)");
printf("\n");
  ft_printf("%lX", 4294967295);
printf("\n");
printf("%lX", 4294967295);
printf("\n");
printf("\n");

printf("# 0176 (%% lu)");
printf("\n");
  ft_printf("%lu", 4294967295);
printf("\n");
printf("%lu", 4294967295);
printf("\n");
printf("\n");


printf("# 0176 (%%llx)");
printf("\n");
  ft_printf("%llx", 9223372036854775807);
printf("\n");
printf("%llx", 9223372036854775807);
printf("\n");
printf("\n");

printf("# 0176 (%%llX)");
printf("\n");
  ft_printf("%llX", 9223372036854775807);
printf("\n");
printf("%llX", 9223372036854775807);
printf("\n");
printf("\n");

printf("# 0176 (%%llu)");
printf("\n");
  ft_printf("%llu", 9223372036854775807);
printf("\n");
printf("%llu", 9223372036854775807);
printf("\n");
printf("\n");
 
printf("# 0176 (%%llo)");
printf("\n");
  ft_printf("%llo", 9223372036854775807);
printf("\n");
printf("%llo", 9223372036854775807);
printf("\n");
printf("\n");
*/
/*

printf("\n");
printf("#d 0070 (NULL)");
printf("\n");
 i =  ft_printf("->%03c<-", NULL);
  printf("\n");
o =      printf("->%03c<-", NULL);
printf("\n");
printf(" my length %i. system lenght %i\n", i,o);
//   1. (    0) --><--
//   2. (    1) -->^@<--

//   1. (   12) -->@moulitest: <--
//   2. (   13) -->@moulitest: ^@<--

printf("\n");
printf("\n");
 i =  ft_printf("%+d", 111114242424242424242424242);

// printf("\n");
//   1. (    3) -->-1<--
//   2. (    2) -->-1<--

printf("\n");
o =  printf("%+d", 111114242424242424242424242);
printf("\n");
printf(" my length %i. system lenght %i\n", i,o);
  printf("\n");


  
printf("# 0076 (char)");
printf("\n");
i =   ft_printf("->%2c<-", 0);
printf("\n");
o = printf("->%2c<-", 0);
printf("\n");
printf(" my length %i. system lenght %i\n", i,o);
printf("\n");
printf("\n");

//   1. (    2) -->  <--
//   2. (    2) --> ^@<--

printf("# 0077 (char)");
printf("\n");
 i =    ft_printf("null %c and text", 0);
printf("\n");
o = printf("null %c and text", 0);
printf("\n");
printf(" my length %i. system lenght %i\n", i,o);
printf("\n");
printf("\n");

//   1. (   14) -->null  and text<--
//   2. (   15) -->null ^@ and text<--

printf("# 0078 (char)");
printf("\n");
 i =    ft_printf("->% c<-", 0);
printf("\n");
o = printf("->% c<-", 0);
printf("\n");
printf(" my length %i. system lenght %i\n", i,o);
printf("\n");
printf("\n");



printf("# 0108 (int)");
printf("\n");
  i =   ft_printf("%+d", 4242424242424242424242);
  printf("\n");
o = printf("%+d", 4242424242424242424242);
printf("\n");
printf(" my length %i. system lenght %i\n", i,o);
  printf("\n");
  printf("\n");
//   1. (    3) -->-1<--
//   2. (    2) -->-1<--


printf("# 0108 (int)");
printf("\n");
  i =   ft_printf("->%+d<-", 4242424242424242424242);
  printf("\n");
o = printf("->%+d<-", 4242424242424242424242);
printf("\n");
printf(" my length %i. system lenght %i\n", i,o);
  printf("\n");
  printf("\n");
//   1. (    3) -->-1<--
//   2. (    2) -->-1<--




printf("# 0176 (unsigned int)");
printf("\n");
  i =   ft_printf("% i", 4294967295);
printf("\n");
o = printf("% i", 4294967295);
printf("\n");
printf(" my length %i. system lenght %i\n", i,o);
printf("\n");
printf("\n");




printf("\n");

printf("# 0176 (unsigned int)");
printf("\n");
 i = ft_printf("% d", 4294967295);
printf("\n");
o = printf("% d", 4294967295);
printf("\n");
printf(" my length %i. system lenght %i\n", i,o);
printf("\n");
printf("\n");


printf("\n");

printf("# 0176 (unsigned int)");
printf("\n");
  ft_printf("% u", 4294967295);
printf("\n");
printf("% u", 4294967295);
printf("\n");
printf("\n");

//   1. (   11) --> 4294967295<--
//   2. (   10) -->4294967295<--

printf("# 0177 (unsigned int)");
printf("\n");
  ft_printf("%+u", 4294967295);
printf("\n");
printf("%+u", 4294967295);
printf("\n");
printf("\n");

//   1. (   11) -->+4294967295<--
//   2. (   10) -->4294967295<--

printf("# 0146 (long long)");
printf("\n");     //-9223372036854775807
  ft_printf("%lld", -9223372036854775807);
printf("\n");
printf("%lld", -9223372036854775807);
printf("\n");
printf("\n");



printf("\n");


printf("# 0146 (long long)");
printf("\n");     //-9223372036854775808
  ft_printf("%lld", -9223372036854775808);
printf("\n");
printf("%lld", -9223372036854775808);
printf("\n");
printf("\n");

//   1. (    1) -->-0<--
//   2. (   20) -->-9223372036854775808<--

printf("# 0162 (int)");
printf("\n");
  ft_printf("%03.2d", -1);
printf("\n");
printf("%03.2d", -1);
printf("\n");
printf("\n");

//   1. (    3) --> -01<--
//   2. (    3) -->-01<--

printf("# 0163 (int)");
printf("\n");
  ft_printf("@moulitest: %.10d", -42);
printf("\n");
printf("@moulitest: %.10d", -42);
printf("\n");
printf("\n");

//   1. (   22) -->@moulitest: -0000000042<--
//   2. (   23) -->@moulitest: -0000000042<--




//   1. (    1) --> <--
//   2. (    1) -->^@<--

printf("# 0106 (int)");
printf("\n");
  ft_printf("%+d", -42);
printf("\n");
printf("%+d", -42);
printf("\n");
printf("\n");

//   1. (    3) -->42<--
//   2. (    3) -->-42<--

printf("# 0108 (int)");
printf("\n");
  ft_printf("%+d", 4242424242424242424242);
printf("\n");
printf("%+d", 4242424242424242424242);
printf("\n");
printf("\n");

//   1. (    2) -->1<--
//   2. (    2) -->-1<--

printf("# 0110 (int)");
printf("\n");
  ft_printf("% +d", -42);
printf("\n");
printf("% +d", -42);
printf("\n");
printf("\n");

//   1. (    3) -->42<--
//   2. (    3) -->-42<--



printf("# 0112 (int)");
printf("\n");
  ft_printf("%+ d", -42);
printf("\n");
printf("%+ d", -42);
printf("\n");
printf("\n");

//   1. (    3) -->42<--
//   2. (    3) -->-42<--

printf("# 0114 (int)");
printf("\n");
  ft_printf("%  +d", -42);
printf("\n");
printf("%  +d", -42);
printf("\n");
printf("\n");

//   1. (    3) -->42<--
//   2. (    3) -->-42<--

printf("# 0116 (int)");
printf("\n");
  ft_printf("%+  d", -42);
printf("\n");
printf("%+  d", -42);
printf("\n");
printf("\n");

//   1. (    3) -->42<--
//   2. (    3) -->-42<--

printf("# 0118 (int)");
printf("\n");
  ft_printf("% ++d", -42);
printf("\n");
printf("% ++d", -42);
printf("\n");
printf("\n");

//   1. (    3) -->42<--
//   2. (    3) -->-42<--

printf("# 0120 (int)");
printf("\n");
  ft_printf("%++ d", -42);
printf("\n");
printf("%++ d", -42);
printf("\n");
printf("\n");

//   1. (    3) -->42<--
//   2. (    3) -->-42<--


printf("\n");
printf(" # 0069 (NULL)");
printf("\n");
 i =  ft_printf("@moulitest: %s", NULL);
printf("\n");
o =printf("@moulitest: %s", NULL);
printf("\n");
printf(" my length %i. system lenght %i\n", i,o);
// 1. (   12) -->@moulitest: <--
// 2. (   18) -->@moulitest: (null)<--

printf("\n");
printf("#a 0070 (NULL)");
printf("\n");
 i =  ft_printf("->%.2c<-", NULL);
  printf("\n");
o = printf("->%.2c<-", NULL);
printf("\n");
printf(" my length %i. system lenght %i\n", i,o);
//   1. (    0) --><--
//   2. (    1) -->^@<--


printf("\n");
printf("#b 0070 (NULL)");
printf("\n");
 i =  ft_printf("->%.c<-", NULL);
  printf("\n");
o = printf("->%.c<-", NULL);
printf("\n");
printf(" my length %i. system lenght %i\n", i,o);
//   1. (    0) --><--
//   2. (    1) -->^@<--

printf("\n");
printf("#c 0070 (NULL)");
printf("\n");
 i =  ft_printf("->%c<-", NULL);
  printf("\n");
o = printf("->%c<-", NULL);
printf("\n");
printf(" my length %i. system lenght %i\n", i,o);
//   1. (    0) --><--
//   2. (    1) -->^@<--

printf("\n");
printf("#d 0070 (NULL)");
printf("\n");
 i =  ft_printf("->%08c<-", NULL);
  printf("\n");
o = printf("->%08c<-", NULL);
printf("\n");
printf(" my length %i. system lenght %i\n", i,o);
//   1. (    0) --><--
//   2. (    1) -->^@<--

printf("# 0069 (NULL)");
printf("\n");
 i = ft_printf("@moulitest: %s", NULL);
printf("\n");
o = printf("@moulitest: %s", NULL);
printf("\n");
printf(" my length %i. system lenght %i\n", i,o);
printf("\n");

//   1. (   12) -->@moulitest: <--
//   2. (   18) -->@moulitest: (null)<--

printf("# 0070 (NULL)");
printf("\n");
 i =  ft_printf("%.2c", NULL);
printf("\n");
o = printf("%.2c", NULL);
printf("\n");
printf(" my length %i. system lenght %i\n", i,o);
printf("\n");
printf("\n");

//   1. (    0) --><--
//   2. (    1) -->^@<--

char *string = "string";

printf("# 0071 (NULL)");
printf("\n");
i =   ft_printf("%s %s", NULL, string);
printf("\n");
o =printf("%s %s", NULL, string);
printf("\n");
printf(" my length %i. system lenght %i\n", i,o);
printf("\n");
printf("\n");

//   1. (    7) --> string<--
//   2. (   13) -->(null) string<--

printf("# 0075 (char)");
printf("\n");
  ft_printf("@moulitest: %c", 0);
printf("\n");
printf("@moulitest: %c", 0);
printf("\n");
printf("\n");






printf("FAIL: 62");
printf("\n");
  ft_printf("%03.2d", 0);                       // " 00"
  printf("\n");
  printf("%03.2d", 0);                       // " 00"
printf("\n");
printf("\n");

printf("FAIL: 63");
printf("\n");

  ft_printf("%03.2d", 1);                       // " 01"
  printf("\n");
  printf("%03.2d", 1);                       // " 01"
printf("\n");
printf("\n");



printf("FAIL: 66");
printf("\n");
  ft_printf("@moulitest: %.d %.0d", 0, 0);      // "@moulitest:  "
  printf("\n");
  printf("@moulitest: %.d %.0d", 0, 0);      // "@moulitest:  "
printf("\n");


printf("FAIL: 71");
printf("\n");
  ft_printf("%lu", 4294967296);                 // "4294967296"
  printf("\n");
  printf("%lu", 4294967296);                 // "4294967296"
  printf("\n");
printf("\n");


printf("FAIL: 72- a");
printf("\n");
    ft_printf("%u", (unsigned int)-42);                        // "18446744073709551574"
	printf("\n");
  printf("%u", (unsigned int)-42);                        // "18446744073709551574"
printf("\n");
printf("\n");

printf("FAIL: 72");
printf("\n");
    ft_printf("%lu", (long unsigned int)-42);                        // "18446744073709551574"
	printf("\n");
  printf("%lu", (long unsigned int)-42);                        // "18446744073709551574"
printf("\n");
printf("\n");


printf("FAIL: 73");
printf("\n");
    ft_printf("%llu", (long long unsigned int)4999999999);                // "4999999999"
	printf("\n");
  printf("%llu", (long long unsigned int)4999999999);                // "4999999999"
printf("\n");
printf("\n");

printf("FAIL: 70");
printf("\n");
ft_printf("%015u", (unsigned int)4294967295);               // "000004294967295"
	printf("\n");
  printf("%015u", (unsigned int)4294967295);               // "000004294967295"
printf("\n");
printf("\n");


	printf("\n");
printf("FAIL: 40");
printf("\n");
  i = ft_printf("@moulitest: %5.o %5.0o", 0, 0);    // "@moulitest:            "
  printf("\n");
  o = printf("@moulitest: %5.o %5.0o", 0, 0);    // "@moulitest:            "
printf("\n");
printf(" my length %i. system lenght %i\n", i,o);
printf("\n");
printf("\n");
  i = ft_printf("%5.o", 0);    // "@moulitest:            "
  printf("\n");
  o = printf("%5.o", 0);    // "@moulitest:            "
printf("\n");
printf(" my length %i. system lenght %i\n", i,o);
printf("\n");
printf("\n");
  i = ft_printf("@moulitest: %5.0o", 0);    // "@moulitest:            "
  printf("\n");
  o =    printf("@moulitest: %5.0o", 0);    // "@moulitest:            "
printf("\n");
printf(" my length %i. system lenght %i\n", i,o);
printf("\n");
 o = printf("@moulitest: %5.o %5.0o", 13, 13);    // "@moulitest:            "
printf("\n");
printf("\n");
printf("FAIL: 60");
printf("\n");
  ft_printf("%+10.5d", 4242);                   // "    +04242"
  printf("\n");
  printf("%+10.5d", 4242);                   // "    +04242"
printf("\n");

printf("FAIL: 65");
printf("\n");
  ft_printf("@moulitest: %.10d", -42);          // "@moulitest: -0000000042"
  printf("\n");
  printf("@moulitest: %.10d", -42);          // "@moulitest: -0000000042"
printf("\n");
printf("\n");





printf("\n");

printf("\n");

		printf("\n");
		ft_printf("Test 38. \n");
	o =    printf ("Preceding with plus:  '%+10d' \n", 1977);
	i = ft_printf ("Preceding with plus:  '%+10d' \n", 1977);
	printf(" my length %i. system lenght %i\n", i,o);



printf("\n");

	ft_printf("Test 66. \n");
	i = ft_printf("%10x", 42);
	printf(" <-- yours\n");
	o = printf("%10x", 42);
	printf(" <-- system\n");
	printf(" my length %i. system lenght %i\n", i,o);


	ft_printf("Test 66.a \n");
	i = ft_printf("%10.4x", 42);
	printf(" <-- yours\n");
	o = printf("%10.4x", 42);
	printf(" <-- system\n");
	printf(" my length %i. system lenght %i\n", i,o);

	ft_printf("Test 66.b \n");
	i = ft_printf("%10.14x", 42);
	printf(" <-- yours\n");
	o = printf("%10.14x", 42);
	printf(" <-- system\n");
	printf(" my length %i. system lenght %i\n", i,o);

printf("\n");
	
printf("\n");
	ft_printf("Test 56. \n");
	o =    printf ("Preceding with 0' ': '%0 10d' \n", -1977);
	i = ft_printf ("Preceding with 0' ': '%0 10d' \n", -1977);
	printf(" my length %i. system lenght %i\n", i,o);
printf("\n");


	ft_printf("Test 47. \n");
	o =    printf ("Preceding with - 10d: '%- 10d' \n", -1977);
	i = ft_printf ("Preceding with - 10d: '%- 10d' \n", -1977);
	printf(" my length %i. system lenght %i\n", i,o);

	ft_printf("Test 48. \n");
	o =    printf ("Preceding with -10d:  '% -10d' \n", -1977);
	i = ft_printf ("Preceding with -10d:  '% -10d' \n", -1977);
	printf(" my length %i. system lenght %i\n", i,o);

	ft_printf("Test 49. \n");
	o =    printf ("Preceding with -10d:  '% -10d' \n", -1977);
	i = ft_printf ("Preceding with -10d:  '% -10d' \n", -1977);
	printf(" my length %i. system lenght %i\n", i,o);

	ft_printf("Test 50. \n");
	o =    printf ("Preceding with blanks:'% 10d'", 1977);
	printf(" <-- system\n");
	i = ft_printf ("Preceding with blanks:'% 10d'", 1977);
	printf(" <-- yours\n");
	printf(" my length %i. system lenght %i\n", o,i);

	ft_printf("Test 51. \n");
	o =    printf ("Preceding with blanks:'% 10d' \n", -1977);
	i = ft_printf ("Preceding with blanks:'% 10d' \n", -1977);
	printf(" my length %i. system lenght %i\n", i,o);

	ft_printf("Test 52. \n");
	o =    printf ("Preceding with zeros: '%0 10d' \n", 1977);
	i = ft_printf ("Preceding with zeros: '%0 10d' \n", 1977);
	printf(" my length %i. system lenght %i\n", o,i);


	printf("\n");

printf("FAIL: 48");
printf("\n");
ft_printf("%b", 32768);                      // "-32768"
printf("\n");
  ft_printf("%hd", 32768);                      // "-32768"
  printf("\n");
  printf("%hd", 32768);                      // "-32768"
printf("\n");
printf("\n");

printf("FAIL: 49");
printf("\n");
  ft_printf("%hhd", 128);                       // "-128"
  printf("\n");
  printf("%hhd", 128);                       // "-128"
printf("\n");
printf("\n");

printf("FAIL: 50");
printf("\n");
  ft_printf("%hhd", -129);                      // "127"
  printf("\n");
  printf("%hhd", -129);                      // "127"
printf("\n");
printf("\n");

printf("FAIL: 51");
printf("\n");
  ft_printf("%ld", 2147483648);                 // "2147483648"
  printf("\n");
  printf("%ld", 2147483648);                 // "2147483648"
  printf("\n");
printf("\n");



ft_printf("Test 45. \n");
	o =    printf ("Preceding with blanks:'%10d' \n", -1977);
	i = ft_printf ("Preceding with blanks:'%10d' \n", -1977);
	printf(" my length %i. system lenght %i\n", i,o);

	ft_printf("Test 45. \n");
	o =    printf("Preceding with - 10d: '%- 10d' \n", 1977);
	i = ft_printf("Preceding with - 10d: '%- 10d' \n", 1977);
	printf(" my length %i. system lenght %i\n", i,o);

	ft_printf("Test 46. \n");
	o =    printf("Preceding with -10d:  '% -10d' \n", 1977);
	i = ft_printf("Preceding with -10d:  '% -10d' \n", 1977);
	printf(" my length %i. system lenght %i\n", i,o);



printf("\n");
printf("FAIL: 47");
printf("\n");
  ft_printf("%0+5d", -42);                      // "-0042"
  printf("\n");
  printf("%0+5d", -42);                      // "-0042"
printf("\n");
printf("\n");



printf("FAIL: 44");
printf("\n");
  ft_printf("%0+5d", 42);                       // "+0042"
  printf("\n");
  printf("%0+5d", 42);                       // "+0042"
printf("\n");
printf("\n");



printf("\n");
	
		ft_printf("Test 67. \n");
	i = ft_printf("%-10x", 42);
	printf(" <-- yours\n");
	o = printf("%-10x", 42);
	printf(" <-- system\n");
	printf(" my length %i. system lenght %i\n", i,o);





printf("FAIL: 42");
printf("\n");
  ft_printf("@moulitest: %.10o", 42);           // "@moulitest: 0000000052"
  printf("\n");
  printf("@moulitest: %.10o", 42);           // "@moulitest: 0000000052"
printf("\n");


printf("FAIL: 36");
printf("\n");
  ft_printf("%-5.10o", 2500);                   // "0000004704"
  printf("\n");
  printf("%-5.10o", 2500);                   // "0000004704"
printf("\n");



	printf("\n");
printf("FAIL: 6");
printf("\n");

  ft_printf("%#08x", 42);                       // "0x00002a"
  printf("\n");
  printf("%#08x", 42);                       // "0x00002a"

  printf("\n6.b\n");
ft_printf("%#8x", 42);                       // "    0x2a"
  printf("\n");
  printf("%#8x", 42);                       // "    0x2a"¨

printf("\n6.c\n");
  ft_printf("%-#8x", 42);                       // "    0x2a"
  printf("\n");
  printf("%-#8x", 42);                       // "    0x2a"

printf("\n");





		printf("FAIL: XXX");
		printf("\n");
	i = ft_printf("%#6o", 2500);                      // " 04704"
	printf("\n");
	o = printf("%#6o", 2500);                      // " 04704"
	printf("\n");
	printf(" my length %i. system lenght %i\n", i,o);
	printf("\n");


	ft_printf("Test 31. c with #x,#X,#o \n");
	o =    printf("sysv:   %#o :\n",    100000);
	i = ft_printf("myve:   %#o :\n",  100000);	
	printf(" my length %i. system lenght %i\n", i,o);

printf("\n");
	o =    printf("%#o",    10);
	printf("\n");
	i = ft_printf("%#o",  10);	
	printf("\n");
	printf(" my length %i. system lenght %i\n", i,o);
printf("\n");
	ft_printf("Test 31. a with #x,#X,#o \n");
	o =    printf("sysv: %#x,   :\n", 100   );
	i = ft_printf("myve: %#x,   :\n", 100   );	
	printf(" my length %i. system lenght %i\n", i,o);
	ft_printf("Test 31. b with #x,#X,#o \n");
	o =    printf("sysv:   %#X,   :\n",  1000  );
	i = ft_printf("myve:   %#X,   :\n",   1000  );	
	printf(" my length %i. system lenght %i\n", i,o);
	
	

/*
0007 
*/


/*
 printf("\n");
  printf("**1**");
  printf("\n");

	ft_printf("%5%53%43%");
	printf("\n");
printf("%5%53%43%");
  printf("\n");
  printf("\n");
  printf("**2**");
  printf("\n");

  ft_printf("%5%");
  printf("\n");
  printf("%5%");

printf("\n");
  printf("\n");
  printf("*3*");
  printf("\n");

	ft_printf("%5%53%43%");
	printf("\n");
  printf("%5%53%43%");
  printf("\n");

  printf("\n");
  printf("*4*");
  printf("\n");

  ft_printf("%5%53%43%");
printf("\n");
  printf("%5%53%43%");

	printf("\n");
	printf("\n");



//# 0008 
  ft_printf("%-5%");
  printf("\n");
  printf("%-5%");
 // 1. (    0) --><--
  //2. (    1) -->%<--


 printf("\n");
  printf("*5*");
  printf("\n");

//# 0009 
  ft_printf("%.0%");
  printf("\n");
  printf("%.0%");
  //1. (    0) --><--
  //2. (    1) -->%<--
 printf("\n");
 printf("\n");
  printf("*6*");
  printf("\n");
//# 0011 (char *)
  ft_printf("%   %", "test");
	printf("\n");
	printf("%   %", "test");
 // 1. (    0) --><--
 // 2. (    1) -->%<--
 printf("\n");
 printf("\n");
  printf("*7*");
  printf("\n");
//# 0034 (int)
  ft_printf("%#x", 42);
  printf("\n");
  printf("%#x", 42);
 // 1. (    6) -->0x2a<--
 // 2. (    4) -->0x2a<--
  printf("\n");
  printf("\n");
  printf("*8*");
  printf("\n");

//# 0035 (int)

printf("\n");
  ft_printf("%#llx", 9223372036854775807);
	printf("\n");
	printf("%#llx", 9223372036854775807);
	printf("\n");

  printf("\n");
  printf("*9*");
  printf("\n");
//  1. (   20) -->0x7fffffffffffffff<--
//  2. (   18) -->0x7fffffffffffffff<--
/*
# 0037 (int)
  ft_printf("%#x", 42);
  1. (    6) -->0x2a<--
  2. (    4) -->0x2a<--


# 0038 (int)
  ft_printf("%#X", 42);
  1. (    6) -->0X2A<--
  2. (    4) -->0X2A<--

# 0039 (int)
  ft_printf("%#8x", 42);
  1. (   10) -->    0x2a<--
  2. (    8) -->    0x2a<--

# 0069 (NULL)
  ft_printf("@moulitest: %s", NULL);
  1. (   12) -->@moulitest: <--
  2. (   18) -->@moulitest: (null)<--

# 0070 (NULL)
  ft_printf("%.2c", NULL);
  1. (    0) --><--
  2. (    1) -->^@<--

# 0071 (NULL)
  ft_printf("%s %s", NULL, string);
  1. (    7) --> string<--
  2. (   13) -->(null) string<--

# 0075 (char)
  ft_printf("@moulitest: %c", 0);
  1. (   12) -->@moulitest: <--
  2. (   13) -->@moulitest: ^@<--


# 0076 (char)
  ft_printf("%2c", 0);
  1. (    2) -->  <--
  2. (    2) --> ^@<--

# 0077 (char)
  ft_printf("null %c and text", 0);
  1. (   14) -->null  and text<--
  2. (   15) -->null ^@ and text<--

# 0078 (char)
  ft_printf("% c", 0);
  1. (    1) --> <--
  2. (    1) -->^@<--

# 0087 (int)
  ft_printf("%-10.5o", 2500);
  1. (    5) -->04704<--
  2. (   10) -->04704     <--

# 0089 (int)
  ft_printf("@moulitest: %.o %.0o", 0, 0);
  1. (   15) -->@moulitest: 0 0<--
  2. (   13) -->@moulitest:  <--

# 0106 (int)
  ft_printf("%+d", -42);
  1. (    2) -->42<--
  2. (    3) -->-42<--

# 0108 (int)
  ft_printf("%+d", 4242424242424242424242);
  1. (    1) -->1<--
  2. (    2) -->-1<--

# 0110 (int)
  ft_printf("% +d", -42);
  1. (    2) -->42<--
  2. (    3) -->-42<--

# 0112 (int)
  ft_printf("%+ d", -42);
  1. (    2) -->42<--
  2. (    3) -->-42<--

# 0114 (int)
  ft_printf("%  +d", -42);
  1. (    2) -->42<--
  2. (    3) -->-42<--

  
# 0116 (int)
  ft_printf("%+  d", -42);
  1. (    2) -->42<--
  2. (    3) -->-42<--

# 0118 (int)
  ft_printf("% ++d", -42);
  1. (    2) -->42<--
  2. (    3) -->-42<--

# 0120 (int)
  ft_printf("%++ d", -42);
  1. (    2) -->42<--
  2. (    3) -->-42<--

# 0121 (int)
  ft_printf("%0d", -42);
  1. (    4) -->--42<--
  2. (    3) -->-42<--

# 0122 (int)
  ft_printf("%00d", -42);
  1. (    4) -->--42<--
  2. (    3) -->-42<--

# 0127 (int)
  ft_printf("%05d", -42);
  1. (    5) -->-0-42<--
  2. (    5) -->-0042<--

# 0135 (short)
  ft_printf("%hd", 32768);
  1. (    5) -->32768<--
  2. (    6) -->-32768<--

# 0138 (signed char)
  ft_printf("%hhd", 128);
  1. (    3) -->128<--
  2. (    4) -->-128<--

# 0140 (signed char)
  ft_printf("%hhd", -129);
  1. (    4) -->-129<--
  2. (    3) -->127<--

# 0143 (long)
  ft_printf("%ld", 2147483648);
  1. (   11) -->-2147483648<--
  2. (   10) -->2147483648<--

# 0144 (long)
  ft_printf("%ld", -2147483649);
  1. (   10) -->2147483647<--
  2. (   11) -->-2147483649<--

# 0145 (long long)
  ft_printf("%lld", 9223372036854775807);
  1. (    2) -->-1<--
  2. (   19) -->9223372036854775807<--

# 0146 (long long)
  ft_printf("%lld", -9223372036854775808);
  1. (    1) -->0<--
  2. (   20) -->-9223372036854775808<--

# 0152 (int)
  ft_printf("%4.15d", 42);
  1. (    4) -->  42<--
  2. (   15) -->000000000000042<--

# 0154 (int)
  ft_printf("%.10d", 4242);
  1. (    4) -->4242<--
  2. (   10) -->0000004242<--

# 0155 (int)
  ft_printf("%10.5d", 4242);
  1. (   10) -->      4242<--
  2. (   10) -->     04242<--

# 0156 (int)
  ft_printf("%-10.5d", 4242);
  1. (    5) --> 4242<--
  2. (   10) -->04242     <--

# 0157 (int)
  ft_printf("% 10.5d", 4242);
  1. (    5) --> 4242<--
  2. (   10) -->     04242<--

# 0158 (int)
  ft_printf("%+10.5d", 4242);
  1. (    5) -->+4242<--
  2. (   10) -->    +04242<--

# 0159 (int)
  ft_printf("%-+10.5d", 4242);
  1. (    5) -->+4242<--
  2. (   10) -->+04242    <--


# 0160 (int)
  ft_printf("%03.2d", 0);
  1. (    3) -->000<--
  2. (    3) --> 00<--

# 0161 (int)
  ft_printf("%03.2d", 1);
  1. (    3) -->001<--
  2. (    3) --> 01<--

# 0162 (int)
  ft_printf("%03.2d", -1);
  1. (    3) -->--1<--
  2. (    3) -->-01<--

# 0163 (int)
  ft_printf("@moulitest: %.10d", -42);
  1. (   15) -->@moulitest: -42<--
  2. (   23) -->@moulitest: -0000000042<--

# 0165 (int)
  ft_printf("@moulitest: %.d %.0d", 0, 0);
  1. (   15) -->@moulitest: 0 0<--
  2. (   13) -->@moulitest:  <--

# 0166 (int)
  ft_printf("@moulitest: %5.d %5.0d", 0, 0);
  1. (   23) -->@moulitest:     0     0<--
  2. (   23) -->@moulitest:            <--

# 0173 (unsigned int)
  ft_printf("%15u", 4294967295);
  1. (   10) -->4294967295<--
  2. (   15) -->     4294967295<--

# 0174 (unsigned int)
  ft_printf("%-15u", 4294967295);
  1. (   10) -->4294967295<--
  2. (   15) -->4294967295     <--

# 0175 (unsigned int)
  ft_printf("%015u", 4294967295);
  1. (   10) -->4294967295<--
  2. (   15) -->000004294967295<--

# 0179 (unsigned long)
  ft_printf("%lu", 4294967296);
  1. (    1) -->0<--
  2. (   10) -->4294967296<--

# 0180 (unsigned long)
  ft_printf("%lu", -42);
  1. (   10) -->4294967254<--
  2. (   20) -->18446744073709551574<--

# 0181 (unsigned long long)
  ft_printf("%llu", 4999999999);
  1. (    9) -->705032703<--
  2. (   10) -->4999999999<--

# 0182 (unsigned int)
  ft_printf("@moulitest: %.5u", 42);
  1. (   14) -->@moulitest: 42<--
  2. (   17) -->@moulitest: 00042<-- 

# 0013 (char *)
  ft_printf("%%%", "test");
includes/projects/ft_printf/ft_printf_main.sh: line 206: printf: %: invalid number
  1. (    0) -->%<--
  2. (   -1) -->%<--

# 0014 (char *)
  ft_printf("%%   %", "test");
includes/projects/ft_printf/ft_printf_main.sh: line 206: printf: %   : invalid number
  1. (    0) -->%   <--
  2. (   -1) -->%   <--


# 0053 (int)
  ft_printf("@main_ftprintf: %####0000 33..1..#00d\\n", 256);
  1. (   23) -->@main_ftprintf: 0 256\\n<--
  2. (   34) -->@main_ftprintf: %# 033.0.1..#00d\\n<--

# 0054 (int)
  ft_printf("@main_ftprintf: %####0000 33..1d", 256);
  1. (   21) -->@main_ftprintf: 0 256<--
  2. (   27) -->@main_ftprintf: %# 033.0.1d<--

# 0055 (int)
  ft_printf("@main_ftprintf: %###-#0000 33...12..#0+0d", 256);
  1. (   22) -->@main_ftprintf:  0 256<--
  2. (   35) -->@main_ftprintf: %# -33.0..12..#0+0d<--


*/


/*
	li = 3.1416;
	lo = 3.1416;
	ft_printf("Test 18.c)1 L \n");
	o =    printf ("   printf printing float 3.1416 with .153 = %.153Lf\n", lo);
	i = ft_printf("ft_printf printing float 3.1416 with .153 = %.153Lf\n", li);
	printf(" my length %i. system lenght %i\n\n", i,o);

	ft_printf("Test 18.c)2 L \n");
	o =    printf ("   printf printing float 3.1416 with .112 = %.112Lf\n", lo);
	i = ft_printf("ft_printf printing float 3.1416 with .112 = %.112Lf\n", li);
	printf(" my length %i. system lenght %i\n\n", i,o);

	ft_printf("Test 18.c)3 L \n");
	o =    printf ("   printf printing float 3.1416 with .192 = %.192Lf\n", lo);
	i = ft_printf("ft_printf printing float 3.1416 with .192 = %.192Lf\n", li);
	printf(" my length %i. system lenght %i\n\n", i,o);


	ft_printf("Test 18. \n");
	o =    printf ("   printf printing float 3.1416 with .153 = %.153f\n", 3.1416);
	i = ft_printf("ft_printf printing float 3.1416 with .153 = %.153f\n", 3.1416);
	printf(" my length %i. system lenght %i\n\n", i,o);

	ft_printf("Test 18. \n");
	o =    printf ("   printf printing float 3.1416 with .99 = %.99f\n", 3.1416);
	i = ft_printf("ft_printf printing float 3.1416 with .99 = %.99f\n", 3.1416);
	printf(" my length %i. system lenght %i\n\n", i,o);

	ft_printf("Test 18. \n");
	o =    printf ("   printf printing float 3.1416 with .99 = %.199f\n", 3.1416);
	i = ft_printf("ft_printf printing float 3.1416 with .99 = %.199f\n", 3.1416);
	printf(" my length %i. system lenght %i\n\n", i,o);


	printf("\n");
	i = ft_printf("ft_printf printing float 3.1416 with . = %.f\n", 3.1416);
	o =    printf("   printf printing float 3.1416 with . = %.f\n", 3.1416);

	i = ft_printf("ft_printf printing float 3.1416 with . = %.Lf\n", li);
	o =    printf("   printf printing float 3.1416 with . = %.Lf\n", li);
	i = ft_printf("ft_printf printing float 3.1416 with .1 = %.1Lf\n", li);
	o =    printf("   printf printing float 3.1416 with .1 = %.1Lf\n", li);
	i = ft_printf("ft_printf printing float 3.1416 with .11 = %.11Lf\n", li);
	o =    printf("   printf printing float 3.1416 with .11 = %.11Lf\n", li);
	i = ft_printf("ft_printf printing float 3.1416 with .31 = %.31Lf\n", li);
	o =    printf("   printf printing float 3.1416 with .31 = %.31Lf\n", li);
	i = ft_printf("ft_printf printing float 3.1416 with .111 = %.111Lf\n", li);
	o =    printf("   printf printing float 3.1416 with .111 = %.111Lf\n", li);

	lo = 1249328409.34897329487;
	li = 1249328409.34897329487;
	

	i = ft_printf("ft_printf printing float 1249328409.34897329487 with . = %.f\n", 1249328409.34897329487);
	o =    printf("   printf printing float 1249328409.34897329487 with . = %.f\n", 1249328409.34897329487);

	i = ft_printf("ft_printf printing float 1249328409.34897329487 with . = %.Lf\n", li);
	o =    printf("   printf printing float 1249328409.34897329487 with . = %.Lf\n", li);
	i = ft_printf("ft_printf printing float 1249328409.34897329487 with .1 = %.1Lf\n", li);
	o =    printf("   printf printing float 1249328409.34897329487 with .1 = %.1Lf\n", li);
	i = ft_printf("ft_printf printing float 1249328409.34897329487 with .11 = %.11Lf\n", li);
	o =    printf("   printf printing float 1249328409.34897329487 with .11 = %.11Lf\n", li);
	i = ft_printf("ft_printf printing float 1249328409.34897329487 with .32 = %.32Lf\n", li);
	o =    printf("   printf printing float 1249328409.34897329487 with .32 = %.32Lf\n", li);
	i = ft_printf("ft_printf printing float 1249328409.34897329487 with .52 = %.52Lf\n", li);
	o =    printf("   printf printing float 1249328409.34897329487 with .52 = %.52Lf\n", li);
	i = ft_printf("ft_printf printing float 1249328409.34897329487 with .53 = %.53Lf\n", li);
	o =    printf("   printf printing float 1249328409.34897329487 with .53 = %.53Lf\n", li);
	i = ft_printf("ft_printf printing float 1249328409.34897329487 with .54 = %.54Lf\n", li);
	o =    printf("   printf printing float 1249328409.34897329487 with .54 = %.54Lf\n", li);
	i = ft_printf("ft_printf printing float 1249328409.34897329487 with .111 = %.111Lf\n", li);
	o =    printf("   printf printing float 1249328409.34897329487 with .111 = %.111Lf\n", li);




	i = ft_printf("ft_printf printing float 3.1416 with . = %.48f\n", 3.1416);
	o =    printf("   printf printing float 3.1416 with . = %.48f\n", 3.1416);
	i = ft_printf("ft_printf printing float 3.1416 with . = %.49f\n", 3.1416);
	o =    printf("   printf printing float 3.1416 with . = %.49f\n", 3.1416);
	i = ft_printf("ft_printf printing float 3.1416 with . = %.50f\n", 3.1416);
	o =    printf("   printf printing float 3.1416 with . = %.50f\n", 3.1416);
	i = ft_printf("ft_printf printing float 3.1416 with . = %.51f\n", 3.1416);
	o =    printf("   printf printing float 3.1416 with . = %.51f\n", 3.1416);
	i = ft_printf("ft_printf printing float 3.1416 with . = %.52f\n", 3.1416);
	o =    printf("   printf printing float 3.1416 with . = %.52f\n", 3.1416);
	i = ft_printf("ft_printf printing float 3.1416 with . = %.53f\n", 3.1416);
	o =    printf("   printf printing float 3.1416 with . = %.53f\n", 3.1416);
	i = ft_printf("ft_printf printing float 3.1416 with . = %.54f\n", 3.1416);
	o =    printf("   printf printing float 3.1416 with . = %.54f\n", 3.1416);
	i = ft_printf("ft_printf printing float 3.1416 with . = %.55f\n", 3.1416);
	o =    printf("   printf printing float 3.1416 with . = %.55f\n", 3.1416);








	
		ft_printf("Test 38. \n");
	o =    printf ("Preceding with plus:  '%+10d' \n", 1977);
	i = ft_printf ("Preceding with plus:  '%+10d' \n", 1977);
	printf(" my length %i. system lenght %i\n", i,o);


	printf("\n");
	printf("FAIL: 31");
	printf("\n");
	ft_printf("%05o", 42);                        // "00052"
	printf("\n");
	printf("%05o", 42);                        // "00052"
	printf("\n");
	printf("\n");


	printf("\n");
	ft_printf("Test 52. \n");
	o =    printf ("Preceding with zeros: '%0 10d' \n", 1977);
	i = ft_printf ("Preceding with zeros: '%0 10d' \n", 1977);
	printf(" my length %i. system lenght %i\n", o,i);
	

	printf("\n");
	printf("FAIL: 3623");
	printf("\n");
	i = ft_printf("%-.2s is a string", "");          	 // " is a string"
	printf("\n");
	o = printf("%-.2s is a string", "");           		// " is a string"
	printf("\n");
	printf(" my length %i. system lenght %i\n", i,o);
	printf("\n");


	ft_printf("Test 44. \n");
	o =    printf ("Preceding with -10d:  '%-10d' \n", 1977);
	i = ft_printf ("Preceding with -10d:  '%-10d' \n", 1977);
	printf(" my length %i. system lenght %i\n", i,o);

	ft_printf("Test 45. \n");
	i =    printf ("Preceding with blanks:'%10d' \n", -1977);
	o = ft_printf ("Preceding with blanks:'%10d' \n", -1977);
	printf(" my length %i. system lenght %i\n", i,o);






printf("\n");
printf(" my length %i. system lenght %i\n", o,i);

	ft_printf("Test 50. \n");
	o =    printf ("Preceding with blanks:'% 10d'", 1977);
	printf(" <-- system\n");
	i = ft_printf ("Preceding with blanks:'% 10d'", 1977);
	printf(" <-- yours\n");
	printf(" my length %i. system lenght %i\n", o,i);








	ft_printf("Test 46. b)\n");
	o =    printf("->% -10d<-", 1977);
	printf("\n");
	i = ft_printf("->% -10d<-", 1977);
	printf("\n");
	printf(" my length %i. system lenght %i\n", i,o);


	printf("************************************\n");
	printf("BASIC TESTING WITH ONLY SPECIFIERS\n");
	printf("*************************************\n");
	

	printf("Test 1. \n");
	i = ft_printf("myve: %s :\n", my);
	o =    printf("sysv: %s :\n", system);
	printf(" my length %i. system lenght %i\n\n", i,o);
	
	printf("Test 2. \n");
	i = ft_printf("myve: %i :\n", 333);
	o =    printf("sysv: %i :\n", 333);
	printf(" my length %i. system lenght %i\n\n", i,o);

	printf("Test 3. \n"); 
	i = ft_printf("myve: %c :\n", 'X');
	o =    printf("sysv: %c :\n", 'X');
	printf(" my length %i. system lenght %i\n\n", i,o);

	printf("Test 4. \n");
	i = ft_printf("myve: \"%s\" starts with letter %c and is %i long.\n", my, my[0], ft_strlen(my));
	o =    printf("sysv: \"%s\" starts with letter %c and is %i long.\n", my, my[0], (int)ft_strlen(my));
	printf(" my length %i. system lenght %i\n\n", i,o);

	ft_printf("Test 5. (now with ft_printf) \n");
	i = ft_printf("myve: %p :\n", system);
	o =    printf("sysv: %p :\n", system);
	printf(" my length %i. system lenght %i\n\n", i,o);

	ft_printf("Test 6. \n");
	o =    printf("sysv: %x,%x,%x :\n", 100, 1000, 100000);
	i = ft_printf("myve: %x,%x,%x :\n", 100, 1000, 100000);	
	printf(" my length %i. system lenght %i\n\n", i,o);

	ft_printf("Test 7. \n");
	o =    printf("sysv: %X,%X,%X :\n", 100, 1000, 100000);
	i = ft_printf("myve: %X,%X,%X :\n", 100, 1000, 100000);	
	printf(" my length %i. system lenght %i\n\n", i,o);

	ft_printf("Test 8. \n");
	o =    printf("sysv: %o,%o,%o :\n", 100, 1000, 100000);
	i = ft_printf("myve: %o,%o,%o :\n", 100, 1000, 100000);	
	printf(" my length %i. system lenght %i\n\n", i,o);

	ft_printf("Test 9. \n");
	o =    printf("sysv: %u,%u,%u :\n", -100, -1000, -100000);
	i = ft_printf("myve: %u,%u,%u :\n", -100, -1000, -100000);	
	printf(" my length %i. system lenght %i\n\n", i,o);


	ft_printf("Test 24. - ");
	printf("From discord\n");
	o = printf("%.30f", 0.0025);
	printf(" <-- system\n");
	i = ft_printf("%.30f", 0.0025);
	printf(" <-- yours\n");
	printf(" my length %i. system lenght %i\n", i,o);


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
	printf(" my length %i. system lenght %i\n\n", i,o);

	lo = 1249328409.34897329487;
	li = 1249328409.34897329487;

	ft_printf("Test 11.b) L \n");
	o =    printf("long    float 1249328409.34897329487 = %Lf\n", lo);
	i = ft_printf ("long ft_float 1249328409.34897329487 = %Lf\n", li);
	printf(" my length %i. system lenght %i\n\n", i,o);

	ft_printf("Test 12. \n");
	o =    printf("   float 12493284091249328409.34897329487 = %f\n", 12493284091249328409.34897329487);
	i = ft_printf ("ft_float 12493284091249328409.34897329487 = %f\n", 12493284091249328409.34897329487);
	printf(" my length %i. system lenght %i\n\n", i,o);

	lo = 12493284091249328409.34897329487;
	li = 12493284091249328409.34897329487;
	ft_printf("Test 12.b) L \n");
	o =    printf("   float 12493284091249328409.34897329487 = %Lf\n", lo);
	i = ft_printf ("ft_float 12493284091249328409.34897329487 = %Lf\n", li);
	printf(" my length %i. system lenght %i\n\n", i,o);

	ft_printf("Test 13. \n");
	o =    printf("   float 123456789123456789123456789.123456789 = %f\n", 123456789123456789123456789.123456789);
	i = ft_printf ("ft_float 123456789123456789123456789.123456789 = %f\n", 123456789123456789123456789.123456789);
	printf(" my length %i. system lenght %i\n\n", i,o);

	ft_printf("Test 14. \n");
	o =    printf ("   printf printing float 3.1416 = %f\n", 3.1416);
	i = ft_printf("ft_printf printing float 3.1416 = %f\n", 3.1416);
	printf(" my length %i. system lenght %i\n\n", i,o);
	
	ft_printf("Test 15. \n");
	o =    printf ("   printf printing float 3.1416 with .10 = %.10f\n", 3.1416);
	i = ft_printf("ft_printf printing float 3.1416 with .10 = %.10f\n", 3.1416);
	printf(" my length %i. system lenght %i\n\n", i,o);
	
	ft_printf("Test 16. \n");
	o =    printf ("   printf printing float 3.1416 with .3 = %.3f\n", 3.1416);
	i = ft_printf("ft_printf printing float 3.1416 with .3 = %.3f\n", 3.1416);
	printf(" my length %i. system lenght %i\n\n", i,o);
	
	ft_printf("Test 17. \n");
	o =    printf ("   printf printing float 3.1416 with .53 = %.53f\n", 3.1416);
	i = ft_printf("ft_printf printing float 3.1416 with .53 = %.53f\n", 3.1416);
	printf(" my length %i. system lenght %i\n\n", i,o);
	
	ft_printf("Test 18. \n");
	o =    printf ("   printf printing float 3.1416 with .153 = %.153f\n", 3.1416);
	i = ft_printf("ft_printf printing float 3.1416 with .153 = %.153f\n", 3.1416);
	printf(" my length %i. system lenght %i\n\n", i,o);

	ft_printf("Test 18.b) 0-pad \n");
	o =    printf ("   printf printing float 3.1416 with .153 = %0.153f\n", 3.1416);
	i = ft_printf("ft_printf printing float 3.1416 with .153 = %0.153f\n", 3.1416);
	printf(" my length %i. system lenght %i\n\n", i,o);

	li = 3.1416;
	lo = 3.1416;
	ft_printf("Test 18.c) L \n");
	o =    printf ("   printf printing float 3.1416 with .153 = %.153Lf\n", lo);
	i = ft_printf("ft_printf printing float 3.1416 with .153 = %.153Lf\n", li);
	printf(" my length %i. system lenght %i\n\n", i,o);
	
	ft_printf("Test 19. \n");
	o =    printf("ft_printf printing float 3.1416 with .10 = %.10f\n", 3.1416);
	i = ft_printf("ft_printf printing float 3.1416 with .10 = %.10f\n", 3.1416);
	printf(" my length %i. system lenght %i\n\n", i,o);
	
	ft_printf("Test 20. \n");
	float flow = 2.96f;
	o =    printf("double with    printf: %f \n", flow);
	i = ft_printf("double with ft_printf: %f \n", flow);
	printf(" my length %i. system lenght %i\n\n", i,o);
	
	ft_printf("Test 21. \n");
	o =    printf ("   printf printing float 3.1416 with .10 = %14.10f\n", 3.1416);
	i = ft_printf("ft_printf printing float 3.1416 with .10 = %14.10f\n", 3.1416);
	printf(" my length %i. system lenght %i\n\n", i,o);
	
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
	o =    printf ("Preceding with blanks:'%10d' \n", -1977);
	i = ft_printf ("Preceding with blanks:'%10d' \n", -1977);
	printf(" my length %i. system lenght %i\n", i,o);

	ft_printf("Test 45. \n");
	o =    printf("Preceding with - 10d: '%- 10d' \n", 1977);
	i = ft_printf("Preceding with - 10d: '%- 10d' \n", 1977);
	printf(" my length %i. system lenght %i\n", i,o);

	ft_printf("Test 46. \n");
	o =    printf("Preceding with -10d:  '% -10d' \n", 1977);
	i = ft_printf("Preceding with -10d:  '% -10d' \n", 1977);
	printf(" my length %i. system lenght %i\n", i,o);

	ft_printf("Test 46. b)\n");
	o =    printf("% -10d\n", 1977);
	i = ft_printf("% -10d\n", 1977);
	printf(" my length %i. system lenght %i\n", i,o);

	ft_printf("Test 46. c) \n");
	o =    printf("Preceding with -10d:  '      ' \n");
	i = ft_printf("Preceding with -10d:  '      ' \n");
	printf(" my length %i. system lenght %i\n", i,o);

	ft_printf("Test 47. \n");
	o =    printf ("Preceding with - 10d: '%- 10d' \n", -1977);
	i = ft_printf ("Preceding with - 10d: '%- 10d' \n", -1977);
	printf(" my length %i. system lenght %i\n", i,o);

	ft_printf("Test 48. \n");
	o =    printf ("Preceding with -10d:  '% -10d' \n", -1977);
	i = ft_printf ("Preceding with -10d:  '% -10d' \n", -1977);
	printf(" my length %i. system lenght %i\n", i,o);

	ft_printf("Test 49. \n");
	o =    printf ("Preceding with -10d:  '% -10d' \n", -1977);
	i = ft_printf ("Preceding with -10d:  '% -10d' \n", -1977);
	printf(" my length %i. system lenght %i\n", i,o);

	ft_printf("Test 50. \n");
	o =    printf ("Preceding with blanks:'% 10d'", 1977);
	printf(" <-- system\n");
	i = ft_printf ("Preceding with blanks:'% 10d'", 1977);
	printf(" <-- yours\n");
	printf(" my length %i. system lenght %i\n", o,i);

	ft_printf("Test 51. \n");
	o =    printf ("Preceding with blanks:'% 10d' \n", -1977);
	i = ft_printf ("Preceding with blanks:'% 10d' \n", -1977);
	printf(" my length %i. system lenght %i\n", i,o);

	ft_printf("Test 52. \n");
	o =    printf ("Preceding with zeros: '%0 10d' \n", 1977);
	i = ft_printf ("Preceding with zeros: '%0 10d' \n", 1977);
	printf(" my length %i. system lenght %i\n", o,i);

	ft_printf("Test 53. \n");
	o =    printf ("Preceding with -+: '%-+10d' \n", 1977);
	i = ft_printf ("Preceding with -+: '%-+10d' \n", 1977);
	printf(" my length %i. system lenght %i\n", i,o);

	ft_printf("Test 54. \n");
	o =    printf ("Preceding with +-: '%+-10d' \n", 1977);
	i = ft_printf ("Preceding with +-: '%+-10d' \n", 1977);
	printf(" my length %i. system lenght %i\n", i,o);

	ft_printf("Test 55. \n");
	o =    printf ("Preceding with ' ': '% 10d' \n", -1977);
	i = ft_printf ("Preceding with ' ': '% 10d' \n", -1977);
	printf(" my length %i. system lenght %i\n", i,o);

	ft_printf("Test 56. \n");
	o =    printf ("Preceding with 0' ': '%0 10d' \n", -1977);
	i = ft_printf ("Preceding with 0' ': '%0 10d' \n", -1977);
	printf(" my length %i. system lenght %i\n", i,o);

	ft_printf("Test 57. \n");
	o =    printf ("Preceding with 0' ': '% d' \n", 1977);
	i = ft_printf ("Preceding with 0' ': '% d' \n", 1977);
	printf(" my length %i. system lenght %i\n", i,o);

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

	ft_printf("Test 60. \n");
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

	
	// ft_printf("Test 65. \n");
	// i = ft_printf("%x", test);
	// printf(" <-- yours\n");
	// o = printf("%x", test);
	// printf(" <-- system\n");
	// printf(" my length %i. system lenght %i\n", i,o);

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

	// printf("{%*d}\n", -5, 42); 	
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

/*


  printf("\n");
  printf("**************THESE TESTS STILL FAIL\n");
printf("\n");
printf("FAIL: 0");
printf("\n");














  ft_printf("%5%");                             // "    %"
  printf("%5%");                             // "    %"
printf("\n");
printf("FAIL: 1");
printf("\n");
  ft_printf("%-5%");                            // "%    "
  printf("%-5%");                            // "%    "
printf("\n");
printf("FAIL: 2");
printf("\n");
  ft_printf("%.0%");                            // "%"
  printf("%.0%");                            // "%"
printf("\n");
printf("FAIL: 3");
printf("\n");

  ft_printf("%%", "test");                      // "%"
  printf("%%", "test");                      // "%"
printf("\n");
printf("FAIL: 4");
printf("\n");


   ft_printf("%   %", "test");                   // "%"
  printf("%   %", "test");                   // "%"
printf("\n");
printf("FAIL: 5");
printf("\n");

  ft_printf("%#x", 0);                          // "0"
  printf("\n");
  printf("%#x", 0);                          // "0"
printf("\n");
printf("FAIL: 6");
printf("\n");

  ft_printf("%#08x", 42);                       // "0x00002a"
  printf("\n");
  printf("%#08x", 42);                       // "0x00002a"

  printf("\n6.b\n");
ft_printf("%#8x", 42);                       // "    0x2a"
  printf("\n");
  printf("%#8x", 42);                       // "    0x2a"¨

printf("\n6.c\n");
  ft_printf("%-#8x", 42);                       // "    0x2a"
  printf("\n");
  printf("%-#8x", 42);                       // "    0x2a"

printf("\n");
printf("FAIL: 7");
printf("\n");

  ft_printf("@moulitest: %#.x %#.0x", 0, 0);    // "@moulitest:  "
  printf("<->");
  printf("\n");
  printf("@moulitest: %#.x %#.0x", 0, 0);    // "@moulitest:  "
  printf("<->");
printf("\n");
printf("FAIL: 8");
printf("\n");


  ft_printf("@moulitest: %.x %.0x", 0, 0);      // "@moulitest:  "
  printf("<->");
  printf("\n");
  printf("@moulitest: %.x %.0x", 0, 0);      // "@moulitest:  
  printf("<->");
printf("\n");
printf("FAIL: 9");
printf("\n");

  ft_printf("@moulitest: %5.x %5.0x", 0, 0);    // "@moulitest:            "
  printf("<->");
  printf("\n");
  printf("@moulitest: %5.x %5.0x", 0, 0);    // "@moulitest:            "
  printf("<->");
printf("\n");
printf("FAIL: 10");
printf("\n");
  ft_printf("%10s is a string", "this");        // "      this is a string"
  printf("\n");
  printf("%10s is a string", "this");        // "      this is a string"
printf("\n");
printf("FAIL: 11");
printf("\n");

  ft_printf("%.2s is a string", "this");        // "th is a string"
  printf("\n");
  printf("%.2s is a string", "this");        // "th is a string"
printf("\n");
printf("FAIL: 12");
printf("\n");

  ft_printf("%5.2s is a string", "this");       // "   th is a string"
  printf("\n");
  printf("%5.2s is a string", "this");       // "   th is a string"
printf("\n");
printf("FAIL: 13");
printf("\n");
  ft_printf("%10s is a string", "");            // "           is a string"
  printf("\n");
  printf("%10s is a string", "");            // "           is a string"
printf("\n");
printf("FAIL: 14");
printf("\n");

  ft_printf("%.2s is a string", "");            // " is a string"
  printf("\n");
  printf("%.2s is a string", "");            // " is a string"
printf("\n");
printf("FAIL: 15");
printf("\n");

  ft_printf("%5.2s is a string", "");           // "      is a string"
  printf("\n");
  printf("%5.2s is a string", "");           // "      is a string"
printf("\n");
printf("FAIL: 16");
printf("\n");

  ft_printf("%-10s is a string", "this");       // "this       is a string"
  printf("\n");
  printf("%-10s is a string", "this");       // "this       is a string"
printf("\n");
printf("FAIL: 17");
printf("\n");

  ft_printf("%-.2s is a string", "this");       // "th is a string"
  printf("\n");
  printf("%-.2s is a string", "this");       // "th is a string"

printf("\n");
printf("FAIL: 18");
printf("\n");
  ft_printf("%-5.2s is a string", "this");      // "th    is a string"
  printf("\n");
  printf("%-5.2s is a string", "this");      // "th    is a string"
printf("\n");
printf("FAIL: 19");
printf("\n");

  ft_printf("%-10s is a string", "");           // "           is a string"
  printf("\n");
  printf("%-10s is a string", "");           // "           is a string"
printf("\n");

printf("FAIL: 20");
printf("\n");
  ft_printf("%-.2s is a string", "");           // " is a string"
  printf("\n");
  printf("%-.2s is a string", "");           // " is a string"
printf("\n");


printf("FAIL: 21");
printf("\n");
  ft_printf("%-5.2s is a string", "");          // "      is a string"
  printf("\n");
  printf("%-5.2s is a string", "");          // "      is a string"
printf("\n");
printf("FAIL: 22");
printf("\n");

  ft_printf("@moulitest: %s", NULL);            // "@moulitest: (null)"
  printf("\n");
printf("@moulitest: %s", NULL);            // "@moulitest: (null)"
printf("\n");

printf("FAIL: 23");
printf("\n");
  ft_printf("%.2c", NULL);                      // "^@"
  printf("\n");
  printf("%.2c", NULL);                      // "^@"
printf("\n");
printf("\n");

printf("FAIL: 24");
printf("\n");
  ft_printf("%s %s", NULL, "string");             // "(null) string"
  printf("\n");
  printf("%s %s", NULL, "string");             // "(null) string"
printf("\n");
printf("\n");

printf("FAIL: 25");
printf("\n");
  ft_printf("%c", 42);                          // "*"
  printf("\n");
  printf("%c", 42);                          // "*"
printf("\n");
printf("\n");

printf("FAIL: 26");
printf("\n");
  ft_printf("%5c", 42);                         // "    *"
  printf("\n");
  printf("%5c", 42);                         // "    *"
printf("\n");
printf("\n");

printf("FAIL: 27");
printf("\n");
  ft_printf("%-5c", 42);                        // "*    "
  printf("\n");
  printf("%-5c", 42);                        // "*    "
printf("\n");
printf("\n");


printf("FAIL: 28");
printf("\n");
  ft_printf("@moulitest: %c", 0);               // "@moulitest: ^@"
  printf("\n");
  printf("@moulitest: %c", 0);               // "@moulitest: ^@"
printf("\n");
printf("\n");

printf("FAIL: 29");
printf("\n");
  ft_printf("%2c", 0);                          // " ^@"
  printf("\n");
  printf("%2c", 0);                          // " ^@"
printf("\n");
printf("\n");

printf("FAIL: 30");
printf("\n");
  ft_printf("%5o", 41);                         // "   51"
  printf("\n");
  printf("%5o", 41);                         // "   51"
printf("\n");
printf("\n");

printf("FAIL: 31");
printf("\n");
  ft_printf("%05o", 42);                        // "00052"
  printf("\n");
  printf("%05o", 42);                        // "00052"
printf("\n");
printf("\n");

printf("FAIL: 32");
printf("\n");
  ft_printf("%-5o", 2500);                      // "4704 "
  printf("\n");
  printf("%-5o", 2500);                      // "4704 "
printf("\n");
printf("\n");

printf("FAIL: 33");
printf("\n");
  ft_printf("%#6o", 2500);                      // " 04704"
  printf("\n");
  printf("%#6o", 2500);                      // " 04704"
printf("\n");
printf("\n");

printf("FAIL: 34");
printf("\n");
  ft_printf("%-#6o", 2500);                     // "04704 "
  printf("\n");
  printf("%-#6o", 2500);                     // "04704 "
printf("\n");
printf("\n");

printf("FAIL: 35");
printf("\n");
  ft_printf("%-05o", 2500);                     // "4704 "
  printf("\n");
  printf("%-05o", 2500);                     // "4704 "
printf("\n");
printf("\n");


printf("FAIL: 36");
printf("\n");
  ft_printf("%-5.10o", 2500);                   // "0000004704"
  printf("\n");
  printf("%-5.10o", 2500);                   // "0000004704"
printf("\n");
printf("\n");

printf("FAIL: 37");
printf("\n");
  ft_printf("%-10.5o", 2500);                   // "04704     "
  printf("\n");
  printf("%-10.5o", 2500);                   // "04704     "
printf("\n");
printf("\n");

printf("FAIL: 38");
printf("\n");
  ft_printf("@moulitest: %o", 0);               // "@moulitest: 0"
  printf("\n");
  printf("@moulitest: %o", 0);               // "@moulitest: 0"
printf("\n");
printf("\n");

printf("FAIL: 39");
printf("\n");
  ft_printf("@moulitest: %.o %.0o", 0, 0);      // "@moulitest:  "
  printf("\n");
  printf("@moulitest: %.o %.0o", 0, 0);      // "@moulitest:  "
printf("\n");
printf("\n");

printf("FAIL: 40");
printf("\n");
  ft_printf("@moulitest: %5.o %5.0o", 0, 0);    // "@moulitest:            "
  printf("\n");
  printf("@moulitest: %5.o %5.0o", 0, 0);    // "@moulitest:            "
printf("\n");
printf("\n");

printf("FAIL: 41");
printf("\n");
  ft_printf("@moulitest: %#.o %#.0o", 0, 0);    // "@moulitest: 0 0"
  printf("\n");
  printf("@moulitest: %#.o %#.0o", 0, 0);    // "@moulitest: 0 0"
  printf("\n");
printf("\n");

printf("FAIL: 42");
printf("\n");
  ft_printf("@moulitest: %.10o", 42);           // "@moulitest: 0000000052"
  printf("\n");
  printf("@moulitest: %.10o", 42);           // "@moulitest: 0000000052"
printf("\n");
printf("\n");

printf("FAIL: 43");
printf("\n");
  ft_printf("%d", 1);                           // "1"
  printf("\n");
  printf("%d", 1);                           // "1"
printf("\n");
printf("\n");

printf("FAIL: 44");
printf("\n");
  ft_printf("%0+5d", 42);                       // "+0042"
  printf("\n");
  printf("%0+5d", 42);                       // "+0042"
printf("\n");
printf("\n");

printf("FAIL: 45");
printf("\n");
  ft_printf("%5d", -42);                        // "  -42"
  printf("\n");
  printf("%5d", -42);                        // "  -42"
printf("\n");
printf("\n");

printf("FAIL: 46");
printf("\n");
  ft_printf("%05d", -42);                       // "-0042"
  printf("\n");
  printf("%05d", -42);                       // "-0042"
printf("\n");
printf("\n");

printf("FAIL: 47");
printf("\n");
  ft_printf("%0+5d", -42);                      // "-0042"
  printf("\n");
  printf("%0+5d", -42);                      // "-0042"
printf("\n");
printf("\n");

printf("FAIL: 48");
printf("\n");
  ft_printf("%hd", 32768);                      // "-32768"
  printf("\n");
  printf("%hd", 32768);                      // "-32768"
printf("\n");
printf("\n");

printf("FAIL: 49");
printf("\n");
  ft_printf("%hhd", 128);                       // "-128"
  printf("\n");
  printf("%hhd", 128);                       // "-128"
printf("\n");
printf("\n");

printf("FAIL: 50");
printf("\n");
  ft_printf("%hhd", -129);                      // "127"
  printf("\n");
  printf("%hhd", -129);                      // "127"
printf("\n");
printf("\n");

printf("FAIL: 51");
printf("\n");
  ft_printf("%ld", 2147483648);                 // "2147483648"
  printf("\n");
  printf("%ld", 2147483648);                 // "2147483648"
  printf("\n");
printf("\n");

printf("FAIL: 52");
printf("\n");
  ft_printf("%ld", -2147483649);                // "-2147483649"
  printf("\n");
  printf("%ld", -2147483649);                // "-2147483649"
printf("\n");
printf("\n");

printf("FAIL: 53");
printf("\n");
  ft_printf("%lld", 9223372036854775807);       // "9223372036854775807"
  printf("%lld", 9223372036854775807);       // "9223372036854775807"
printf("\n");

printf("FAIL: 54");
printf("\n");
  ft_printf("%lld", -9223372036854775808);      // "-9223372036854775808"
  printf("%lld", -9223372036854775808);      // "-9223372036854775808"
printf("\n");

printf("FAIL: 55");
printf("\n");
  ft_printf("%4.15d", 42);                      // "000000000000042"
  printf("\n");
  printf("%4.15d", 42);                      // "000000000000042"
printf("\n");
printf("\n");

printf("FAIL: 56");
printf("\n");
  ft_printf("%.10d", 4242);                     // "0000004242"
  printf("\n");
  printf("%.10d", 4242);                     // "0000004242"
printf("\n");
printf("\n");

printf("FAIL: 57");
printf("\n");
  ft_printf("%10.5d", 4242);                    // "     04242"
  printf("\n");
  printf("%10.5d", 4242);                    // "     04242"
printf("\n");

printf("FAIL: 58");
printf("\n");
  ft_printf("%-10.5d", 4242);                   // "04242     "
  printf("\n");
  printf("%-10.5d", 4242);                   // "04242     "
printf("\n");
printf("\n");

printf("FAIL: 59");
printf("\n");
  ft_printf("% 10.5d", 4242);                   // "     04242"
  printf("\n");
  printf("% 10.5d", 4242);                   // "     04242"
printf("\n");
printf("\n");

printf("FAIL: 60");
printf("\n");
  ft_printf("%+10.5d", 4242);                   // "    +04242"
  printf("\n");
  printf("%+10.5d", 4242);                   // "    +04242"
printf("\n");
printf("\n");

printf("FAIL: 61");
printf("\n");
  ft_printf("%-+10.5d", 4242);                  // "+04242    "
  printf("\n");
  printf("%-+10.5d", 4242);                  // "+04242    "
printf("\n");
printf("\n");

printf("FAIL: 62");
printf("\n");
  ft_printf("%03.2d", 0);                       // " 00"
  printf("%03.2d", 0);                       // " 00"
printf("\n");
printf("\n");

printf("FAIL: 63");
printf("\n");

  ft_printf("%03.2d", 1);                       // " 01"
  printf("%03.2d", 1);                       // " 01"
printf("\n");
printf("\n");

printf("FAIL: 64");
printf("\n");
  ft_printf("%03.2d", -1);                      // "-01"
  printf("%03.2d", -1);                      // "-01"
printf("\n");
printf("\n");

printf("FAIL: 65");
printf("\n");
  ft_printf("@moulitest: %.10d", -42);          // "@moulitest: -0000000042"
  printf("\n");
  printf("@moulitest: %.10d", -42);          // "@moulitest: -0000000042"
printf("\n");
printf("\n");

printf("FAIL: 66");
printf("\n");
  ft_printf("@moulitest: %.d %.0d", 0, 0);      // "@moulitest:  "
  printf("\n");
  printf("@moulitest: %.d %.0d", 0, 0);      // "@moulitest:  "
printf("\n");

printf("FAIL: 67");
printf("\n");
  ft_printf("@moulitest: %5.d %5.0d", 0, 0);    // "@moulitest:            "
  printf("\n");
  printf("@moulitest: %5.d %5.0d", 0, 0);    // "@moulitest:            "
printf("\n");

printf("FAIL: 68");
printf("\n");
  ft_printf("%15u", (unsigned int)4294967295);                // "     4294967295"
  printf("\n");
  printf("%15u", (unsigned int)4294967295);                // "     4294967295"
printf("\n");
printf("\n");

printf("FAIL: 69");
printf("\n");
  ft_printf("%-15u", (unsigned int)4294967295);               // "4294967295     "
  printf("\n");
  printf("%-15u", (unsigned int)4294967295);               // "4294967295     "
printf("\n");
printf("\n");

printf("FAIL: 70");
printf("\n");
ft_printf("%015u", (unsigned int)4294967295);               // "000004294967295"
	printf("\n");
  printf("%015u", (unsigned int)4294967295);               // "000004294967295"
printf("\n");
printf("\n");

printf("FAIL: 71");
printf("\n");
  ft_printf("%lu", 4294967296);                 // "4294967296"
  printf("\n");
  printf("%lu", 4294967296);                 // "4294967296"
  printf("\n");
printf("\n");

printf("FAIL: 72");
printf("\n");
    ft_printf("%lu", (long unsigned int)-42);                        // "18446744073709551574"
	printf("\n");
  printf("%lu", (long unsigned int)-42);                        // "18446744073709551574"
printf("\n");
printf("\n");

printf("FAIL: 73");
printf("\n");
    ft_printf("%llu", (long long unsigned int)4999999999);                // "4999999999"
	printf("\n");
  printf("%llu", (long long unsigned int)4999999999);                // "4999999999"
printf("\n");
printf("\n");

printf("FAIL: 74");
printf("\n");
  
  ft_printf("@moulitest: %.5u", 42);            // "@moulitest: 00042"
  printf("\n");
  printf("@moulitest: %.5u", 42);            // "@moulitest: 00042"
  printf("\n");
  	printf("\n");

	printf("@moulitest:            <-- example output");
	printf("\n");
	ft_printf("@moulitest: %5.x %5.0x", 0, 0);    // "@moulitest:            "
	printf("<-- mine\n");
	printf("@moulitest: %5.x %5.0x", 0, 0);    // "@moulitest:            "

	printf("<-- system\n");
	printf("\n");
	printf("@moulitest:  <-- example output");
	printf("\n");
	ft_printf("@moulitest: %#.x %#.0x", 0, 0);    // "@moulitest:  "
	printf("<-- mine\n");
	printf("@moulitest: %#.x %#.0x", 0, 0);    // "@moulitest:  "
		printf("<-- system\n");
		printf("\n");

	printf("\n");
	ft_printf("@moulitest: ->%#.x<-", 0);    // "@moulitest:  "
	printf("\n");
	ft_printf("@moulitest: ->%#.0x<-", 0);    // "@moulitest:  "
	printf("\n");

	printf("\n");
	printf("@moulitest: ->%#.x<-", 0);    // "@moulitest:  "
	printf("\n");
	printf("@moulitest: ->%#.0x<-", 0);    // "@moulitest:  "
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
