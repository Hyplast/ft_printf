
  printf("%5%");                             // "    %"
  printf("%-5%");                            // "%    "
  printf("%.0%");                            // "%"
  printf("%%", "test");                      // "%"
  printf("%   %", "test");                   // "%"
  printf("%#x", 0);                          // "0"
  printf("%#08x", 42);                       // "0x00002a"
  printf("@moulitest: %#.x %#.0x", 0, 0);    // "@moulitest:  "
  printf("@moulitest: %.x %.0x", 0, 0);      // "@moulitest:  "
  printf("@moulitest: %5.x %5.0x", 0, 0);    // "@moulitest:            "
  printf("%10s is a string", "this");        // "      this is a string"
  printf("%.2s is a string", "this");        // "th is a string"
  printf("%5.2s is a string", "this");       // "   th is a string"
  printf("%10s is a string", "");            // "           is a string"
  printf("%.2s is a string", "");            // " is a string"
  printf("%5.2s is a string", "");           // "      is a string"
  printf("%-10s is a string", "this");       // "this       is a string"
  printf("%-.2s is a string", "this");       // "th is a string"
  printf("%-5.2s is a string", "this");      // "th    is a string"
  printf("%-10s is a string", "");           // "           is a string"
  printf("%-.2s is a string", "");           // " is a string"
  printf("%-5.2s is a string", "");          // "      is a string"
  printf("@moulitest: %s", NULL);            // "@moulitest: (null)"
  printf("%.2c", NULL);                      // "^@"
  printf("%s %s", NULL, string);             // "(null) string"
  printf("%c", 42);                          // "*"
  printf("%5c", 42);                         // "    *"
  printf("%-5c", 42);                        // "*    "
  printf("@moulitest: %c", 0);               // "@moulitest: ^@"
  printf("%2c", 0);                          // " ^@"
  printf("%5o", 41);                         // "   51"
  printf("%05o", 42);                        // "00052"
  printf("%-5o", 2500);                      // "4704 "
  printf("%#6o", 2500);                      // " 04704"
  printf("%-#6o", 2500);                     // "04704 "
  printf("%-05o", 2500);                     // "4704 "
  printf("%-5.10o", 2500);                   // "0000004704"
  printf("%-10.5o", 2500);                   // "04704     "
  printf("@moulitest: %o", 0);               // "@moulitest: 0"
  printf("@moulitest: %.o %.0o", 0, 0);      // "@moulitest:  "
  printf("@moulitest: %5.o %5.0o", 0, 0);    // "@moulitest:            "
  printf("@moulitest: %#.o %#.0o", 0, 0);    // "@moulitest: 0 0"
  printf("@moulitest: %.10o", 42);           // "@moulitest: 0000000052"
  printf("%d", 1);                           // "1"
  printf("%0+5d", 42);                       // "+0042"
  printf("%5d", -42);                        // "  -42"
  printf("%05d", -42);                       // "-0042"
  printf("%0+5d", -42);                      // "-0042"
  printf("%hd", 32768);                      // "-32768"
  printf("%hhd", 128);                       // "-128"
  printf("%hhd", -129);                      // "127"
  printf("%ld", 2147483648);                 // "2147483648"
  printf("%ld", -2147483649);                // "-2147483649"
  printf("%lld", 9223372036854775807);       // "9223372036854775807"
  printf("%lld", -9223372036854775808);      // "-9223372036854775808"
  printf("%4.15d", 42);                      // "000000000000042"
  printf("%.10d", 4242);                     // "0000004242"
   printf("%10.5d", 4242);                    // "     04242"
  printf("%-10.5d", 4242);                   // "04242     "
  printf("% 10.5d", 4242);                   // "     04242"
  printf("%+10.5d", 4242);                   // "    +04242"
  printf("%-+10.5d", 4242);                  // "+04242    "
  printf("%03.2d", 0);                       // " 00"
  printf("%03.2d", 1);                       // " 01"
  printf("%03.2d", -1);                      // "-01"
  printf("@moulitest: %.10d", -42);          // "@moulitest: -0000000042"
  printf("@moulitest: %.d %.0d", 0, 0);      // "@moulitest:  "
  printf("@moulitest: %5.d %5.0d", 0, 0);    // "@moulitest:            "
  printf("%15u", 4294967295);                // "     4294967295"
  printf("%-15u", 4294967295);               // "4294967295     "
  printf("%015u", 4294967295);               // "000004294967295"
  printf("%lu", 4294967296);                 // "4294967296"
  printf("%lu", -42);                        // "18446744073709551574"
  printf("%llu", 4999999999);                // "4999999999"
  printf("@moulitest: %.5u", 42);            // "@moulitest: 00042"

  
  printf("\n");
  printf("**************THESE TESTS STILL FAIL\n");
  ft_printf("%5%");                             // "    %"
  printf("%5%");                             // "    %"
printf("\n");

  ft_printf("%-5%");                            // "%    "
  printf("%-5%");                            // "%    "
printf("\n");

  ft_printf("%.0%");                            // "%"
  printf("%.0%");                            // "%"
printf("\n");

  ft_printf("%%", "test");                      // "%"
  printf("%%", "test");                      // "%"
printf("\n");


  ft_printf("%   %", "test");                   // "%"
  printf("%   %", "test");                   // "%"
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
  printf("@moulitest: %s", NULL);            // "@moulitest: (null)"
printf("\n");

  ft_printf("%.2c", NULL);                      // "^@"
  printf("%.2c", NULL);                      // "^@"
printf("\n");

  ft_printf("%s %s", NULL, string);             // "(null) string"
  printf("%s %s", NULL, string);             // "(null) string"
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
  printf("%-05o", 2500);                     // "4704 "
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
  ft_printf("%lld", 9223372036854775807);       // "9223372036854775807"
  printf("%lld", 9223372036854775807);       // "9223372036854775807"
printf("\n");
  ft_printf("%lld", -9223372036854775808);      // "-9223372036854775808"
  printf("%lld", -9223372036854775808);      // "-9223372036854775808"
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
  printf("%03.2d", 0);                       // " 00"
printf("\n");

  ft_printf("%03.2d", 1);                       // " 01"
  printf("%03.2d", 1);                       // " 01"
printf("\n");
  ft_printf("%03.2d", -1);                      // "-01"
  printf("%03.2d", -1);                      // "-01"
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
  ft_printf("%15u", 4294967295);                // "     4294967295"
  printf("%15u", 4294967295);                // "     4294967295"
printf("\n");
  ft_printf("%-15u", 4294967295);               // "4294967295     "
  printf("%-15u", 4294967295);               // "4294967295     "
printf("\n");
  
  ft_printf("%015u", 4294967295);               // "000004294967295"
  printf("%015u", 4294967295);               // "000004294967295"
printf("\n");
  ft_printf("%lu", 4294967296);                 // "4294967296"
  printf("%lu", 4294967296);                 // "4294967296"
printf("\n");
  ft_printf("%lu", -42);                        // "18446744073709551574"
  printf("%lu", -42);                        // "18446744073709551574"
printf("\n");
  ft_printf("%llu", 4999999999);                // "4999999999"
  printf("%llu", 4999999999);                // "4999999999"
printf("\n");
  ft_printf("@moulitest: %.5u", 42);            // "@moulitest: 00042"
  printf("@moulitest: %.5u", 42);            // "@moulitest: 00042"
  printf("\n");
  printf("***************END\n");