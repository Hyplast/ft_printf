/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: severi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 09:54:52 by severi            #+#    #+#             */
/*   Updated: 2022/02/11 15:49:29 by severi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"


static size_t	count_digits(long c)
{
	size_t	digits;

	digits = 0;
	if (c <= 0)
	{
		digits++;
		c *= -1;
	}
	while (c > 0)
	{
		digits++;
		c /= 10;
	}
	return (digits);
}

char	*ft_basetoa(unsigned long n, unsigned long base, char sign)
{
	char	*s;
	//size_t	digits;
	int		i;
	int		j;

	i = 19;
	j = 0;
	if (base == 2)
		s = ft_strnew(count_digits((long)n * 100));
	else
		s = ft_strnew(count_digits((long)n));
	while (n > 0)
	{
		s[i] = "0123456789abcdef"[(n % base)];
		i--;
		n = n / base;
	}
	if (sign != ' ')
	{
		s[0] = sign;
		++j;
	}
	while(++i < 20)
		s[j++] = s[i];
	s[j] = 0;
	return (s);
}

int		ft_lookforchar(const char *s, int c)
{
	int	s_len;
	int	i;

	i = -1;
	s_len = (int)ft_strlen(s);
	while (s_len >= ++i)
	{
		if (s[i] == c)
			return (i);
	}
	return (-1);
}


int	print_b(const char *flags, va_list ap, int chars_printed)
{
	char	*s;
	unsigned int	i;

	i = (unsigned int)flags[0];
	i = (unsigned int) va_arg(ap, unsigned int);
	s = ft_basetoa(i, 2, ' ');
	chars_printed += ft_putnchar(s, ft_strlen(s));
	return (chars_printed);
}

int	print_c(char c)
{
	ft_putchar(c);
	return (1);
}

t_flags *return_flags(const char *flags)
{
	t_flags *flag_s;
	char	c;
	int		i;
	int		found;

	found = -1;
	i = 0;
	c = 1;

	flag_s = malloc(sizeof(t_flags));
	flag_s->len = ft_strlen(flags);
	//flags->spec = 
	
	while (i < flag_s->len)
	{
		found = ft_lookforchar(flags, c);
		i++;
	}

	ft_putstr("flag_s: ");
	ft_putnbr(found);
	ft_putstr(" and ");
	ft_putnbr(flag_s->len);
	ft_putstr(" and ");
	ft_putstr(flags);
	ft_putstr("-\n");

	return (flag_s);
}

int	print_d(const char *flags, int d, int chars_printed)
{
	char *s;
	int		num;
	int		num2;
	int		num3;
	t_flags *flag_s;

	num = -1;
	num2 = -1;
	num3 = -1;
	flag_s = return_flags(flags);
	ft_putstr("flasg len ");
	ft_putnbr(flag_s->len);
	ft_putstr("-\n");
	num = ft_lookforchar(flags, '0');
	num2 = ft_lookforchar(flags, 'd');
	if(num >= 0 && num2 != 0)
	{
		num3 = ft_atoi(ft_strsub(flags, 0, num));
	}
	chars_printed += ft_print_c_ntimes('0', num3);

	//ft_putstr(flags);
	s = ft_itoa(d);
	//if (ft_strlen(s) < )
	chars_printed += ft_putnchar(s, ft_strlen(s));
	return (chars_printed);
}
/*
char	*ft_ftoa(float f, size_t digits)
{
	char	*s;

	f = 2 / 3;
	digits = 2;
	
	s = "2342.3424";
	return (s);	
}
*/

void	ft_add_zeros(char **str, int zeros)
{
	char	*str_0;
	size_t	len;
	int		i;

	i = 0;
	len = ft_strlen(*str);
	str_0 = ft_strnew(zeros + len);
	ft_strncpy(str_0, *str, len);
	while(i < zeros)
	{
		str_0[len + i] = '0';
		i++;
	}
	ft_strcpy(*str, str_0);
}

int	print_f(const char *flags, va_list ap, int chars_printed)
{
	char found;
	//char *s;
	double f;
	double lf;
 	long double ld;
	char	**s;
	int	num;
	int	num2;
	int	num3;
	int num4;
	int round;
	int i;

	i = -1;
	num = -1;
	num2 = -1;
	num3 = -1;
	num4 = -1;
	round = 0;
	f = 0;
	lf = 0;
	ld = 0;
	found = 'x';

	if (found == 'l')
	{
		lf = (double) va_arg(ap, double);
		ft_printf("%lf", lf);

	}
	else if (found == 'L')
	{
		ld = (long double) va_arg(ap, long double);
		ft_printf("%Lf", ld);
	}
	else
	{
		f = va_arg(ap, double);
		s = ft_frexp(f);
	}
	num = ft_lookforchar(flags, '.');
	num2 = ft_lookforchar(flags, 'f');
	if(num > 0 && num2 != 0)
	{
		num3 = ft_atoi(ft_strsub(flags, 0, num));
	}
	else if(num2 != 0 && num == -1)
		num3 = ft_atoi(ft_strsub(flags, 0, num2));
	if (num != -1)
	{
		round = ft_atoi(ft_strsub(flags, num + 1, num2 - num));
		ft_round(s, round);
		//	if (num > 51)
		//ft_add_zeros(&s[1], num - 51);
	}
	else
	{
		ft_round(s, 6);
		ft_add_zeros(&s[1], 5);
		//if (ft_round(s, 6))
		//	chars_printed += print_c_ntimes('0', 5);
	}

	num4 = ft_strlen(s[0]) + ft_strlen(s[1]) + 1;
	if (num4 < num3)
	{
		while(++i + num4 < num3)
			chars_printed += ft_putnchar(" ", 1);
		i = -1;
	}
	chars_printed += ft_putnchar(s[0], ft_strlen(s[0]));
	chars_printed += ft_putnchar(".", 1);
	chars_printed += ft_putnchar(s[1], ft_strlen(s[1]));
	if (round > 51)
		while (++i < round - 51)
			chars_printed += ft_putnchar("0", 1);
	

	return (chars_printed);
}

int	print_i(int i)
{
	char *s;
	int	chars_printed;

	chars_printed = 0;
	//ft_putstr(flags);
	s = ft_itoa(i);
	chars_printed = ft_putnchar(s, ft_strlen(s));
	return (chars_printed);
}

int	print_p(void *pointer)
{
	char	*s;
	size_t	ptr;
	int		chars_printed;

	ptr = (size_t)pointer;
	chars_printed = 0;
	//ft_putstr(flags);
	//s = ptr;
	s = ft_basetoa((long unsigned int)ptr, 16, ' ');
	chars_printed = ft_putnchar("0x", 2);
	chars_printed += ft_putnchar(s, ft_strlen(s));
	return (chars_printed);
}
int	print_s(char *s, int chars_printed)
{
	chars_printed += ft_putnchar(s, ft_strlen(s));
	return (chars_printed);
}

int	print_o(const char *flags, va_list ap, int chars_printed)
{
	char	*s;
	unsigned int	i;

	i = (unsigned int) va_arg(ap, unsigned int);
	s = ft_basetoa(i, 8, ' ');
	if (flags[0] == '#')
		chars_printed += ft_putnchar("0", 1);
	chars_printed += ft_putnchar(s, ft_strlen(s));
	return (chars_printed);
}
// TODO: Does it work?
int	print_u(const char *flags, va_list ap, int chars_printed)
{
	char	*s;
	unsigned int	u;

	u = (unsigned int)flags[0];
	u = (unsigned int) va_arg(ap, unsigned int);
	//s = ft_basetoa(i, 10, ' ');
	s = ft_utoa(u);
		chars_printed += ft_putnchar(s, ft_strlen(s));
	return (chars_printed);
}

int	print_x(const char *flags, va_list ap, int chars_printed)
{
	char	*s;
	unsigned int	i;

	if (flags[0] == '#')
		chars_printed += ft_putnchar("0x", 2);
	i = (unsigned int) va_arg(ap, unsigned int);
	s = ft_basetoa(i, 16, ' ');
	chars_printed += ft_putnchar(s, ft_strlen(s));
	return (chars_printed);
}

int	print_X(const char *flags, va_list ap, int chars_printed)
{
	char	*s;
	unsigned int	i;
	int	j;

	j = 0;
	i = (unsigned int)flags[0];
	i = (unsigned int) va_arg(ap, unsigned int);
	s = ft_basetoa(i, 16, ' ');
	if (flags[0] == '#')
		chars_printed += ft_putnchar("0X", 2);
	while (s[j] != '\0')
	{
		s[j] = (char)ft_toupper(s[j]);
		j++;
	}
	chars_printed += ft_putnchar(s, ft_strlen(s));
	return (chars_printed);
}
static const int	g_specifier[] = {'b', 'c', 'd', 'f', 'i', 'o', 'p', 's', 'u', 'x', 'X'};
/*
static const char	*g_extra_f[] = {"hh", "h", "l", "ll", "L", "#", "0", "-", "+"};

static const void	(*g_f_ptrs[]) = {print_c, print_i, print_s};
*/
//const static g_print_f = [print_c()]

int	match_function(const char *flags, va_list ap, int c, int printed_chars)
{
	if (c == 'b')
		printed_chars += print_b(flags, ap, printed_chars);
	else if (c == 'c')
		printed_chars += print_c((char) va_arg(ap, int));
	else if (c == 'd')
		printed_chars += print_d(flags, (int) va_arg(ap, int), printed_chars);
	else if (c == 'f')
		printed_chars += print_f(flags, ap, printed_chars);
	else if (c == 'i')
		printed_chars += print_i((int) va_arg(ap, int));
	else if (c == 'o')
		printed_chars += print_o(flags, ap, printed_chars);
	else if (c == 'p')
		printed_chars += print_p((void*) va_arg(ap, void*));
	else if (c == 's')
		printed_chars += print_s((char*) va_arg(ap, char*), printed_chars);
	else if (c == 'u')
		printed_chars += print_u(flags, ap, printed_chars);
	else if (c == 'x')
		printed_chars += print_x(flags, ap, printed_chars);
	else if (c == 'X')
		printed_chars += print_X(flags, ap, printed_chars);
	return (printed_chars);
}

int	read_flags(char *flags, va_list ap)
{
	int		chars_printed;
	size_t	len;

	len = ft_strlen(flags);
	chars_printed = 0;
	chars_printed = match_function(flags, ap, flags[len - 1], 0);	
	return (chars_printed);
}

char	*parse_specifier(const char *flags)
{
	size_t	len;
	int		i;
	int		elem;

	i = 0;
	elem = (sizeof(g_specifier)/sizeof(g_specifier[0]));
	len = 0;
	if (*flags == '%')
		return ("%");
	while (flags[len] != '\0')
	{
		while(flags[len] != g_specifier[i] && i < elem)
		{
			i++;
		}
		if (flags[len] == g_specifier[i])
		{
			return (ft_strsub(flags, 0, len + 1));
		}
		i = 0;
		len++;
	}
	exit(1);
	return (NULL);
}

/*
*	Print function, use % with specifiers.
*
*	@param string in ("string %'x'", %bcdfiopsuxX) -format
*	@return Number characters written in stdout
*/
int	ft_printf(const char *format, ...)
{
	va_list ap;
	char	*flags;
	int		i;
	int		chars_printed;
	va_start(ap, format);

	chars_printed = 0;
	i = ft_lookforchar(format, '%');
	while (i != -1)
	{
		chars_printed += ft_putnchar(format, (size_t)i);
		format = ft_strchr(format, '%') + 1;
		flags = parse_specifier(format);
		if (flags[0] != '%')
			chars_printed += read_flags(flags, ap);
		else
			chars_printed += ft_putnchar("%", 1);
		format += ft_strlen(flags);
		i = ft_lookforchar(format, '%');
	}
	chars_printed += ft_putnchar(format, ft_strlen(format));
	va_end(ap);
	return (chars_printed);
}
