# include <string.h>
# include <stdlib.h>
# include <unistd.h>


size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

static void	ft_memdel(void	**ap)
{
	if (ap == NULL)
		return ;
	else if (*ap != NULL)
	{
		free(*ap);
		*ap = NULL;
	}
}

static void	ft_strdel(char **as)
{
	ft_memdel((void **)as);
}

static void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*c;

	i = 0;
	c = (char *)s;
	while (i < n)
		c[i++] = '\0';
}

static void	*ft_memalloc(size_t size)
{
	void	*mem;

	mem = (void *) malloc(sizeof(*mem) * size);
	if (mem != NULL)
		ft_bzero(mem, size);
	return (mem);
}


static char	*ft_strnew(size_t size)
{
	return ((char *)ft_memalloc(size + 1));
}

char	*ft_strdup(const char *src)
{
	char	*str;
	int		i;

	i = 0;
	str = ft_strnew(ft_strlen(src));
	if (str == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}


static size_t	count_ldigits(unsigned long long c)
{
	size_t	digits;

	digits = 0;
	if ((long unsigned int)c == 0x8000000000000000)
		return (20);
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

static size_t	count_u_ldigits(unsigned long long c)
{
	size_t	digits;

	digits = 0;
	while (c > 0)
	{
		digits++;
		c /= 10;
	}
	return (digits);
}

static char	*ft_lutoa(long unsigned int c)
{
	char				*s;
	size_t				digits;
	unsigned long long	value;

	value = c;
	digits = count_u_ldigits(value);
	s = ft_strnew(digits);
	if (s == NULL)
		return (NULL);
	if (c == 0)
		s[0] = '0';
	while (value > 0)
	{
		s[--digits] = (char)((value % 10) + '0');
		value /= 10;
	}
	return (s);
}



// static void set_chars(char **)
// {
//     char *max = "-9223372036854775808";



// }


static char	*ft_llitoa(unsigned long long c)
{
	char		*s;
	size_t		digits;
	long long	value;

    if ((long unsigned int)c == 0x8000000000000000)
        return (ft_strdup("-9223372036854775808"));
	value = c;
	digits = count_ldigits(value);
	s = ft_strnew(digits);
	if (s == NULL)
		return (NULL);
	if (c < 0)
	{
		s[0] = '-';
		value *= -1;
	}
	if (c == 0)
		s[0] = '0';
	while (value > 0)
	{
		s[--digits] = (char)((value % 10) + '0');
		value /= 10;
	}
	return (s);
}

static void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

static void	ft_putchar(char c)
{
	ft_putchar_fd(c, 1);
}

static int	ft_putnchar(const char *s, size_t n)
{
	int	i;

	i = 0;
	while (n-- > 0 && *s != '\0')
	{	
		ft_putchar(*s++);
		i++;
	}
	return (i);
}

void	ft_strclr(char *s)
{
	if (s != NULL)
		ft_bzero(s, ft_strlen(s));
}
void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	size_t		i;
	const char	*s;
	char		*d;

	i = 0;
	s = (const char *)src;
	d = (char *)dest;
	while (i < size && (src != NULL || dest != NULL))
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}


char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*subs;

	i = 0;
	if (s == NULL || start > ft_strlen(s) || len > ft_strlen(s))
		return (NULL);
	subs = ft_strnew(len);
	if (subs == NULL)
		return (NULL);
	while (i < len)
	{
		subs[i] = s[start + i];
		i++;
	}
	return (subs);
}

static void    move_forward_adree(char **s)
{
    (*s) += 1;
}

static void    move_forward(char *s)
{
    s += 1;
}

static char    *move_forward_sub(char *s)
{
    char *temp;
    temp = ft_strsub(s, 0, ft_strlen(s) - 1);
    ft_strclr(s);
    s = ft_memcpy(s, temp, ft_strlen(temp));
    ft_strdel(&temp);
    return (s);
}

static char     *move_forward_return(char *s)
{
    s += 1;
    return (s);
}


void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		n = 147483648;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = n * -1;
	}
	if (n / 10 > 0)
		ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd((char)(n % 10 + 48), fd);
}

char	**create_str(void)
{
	char		**str;

	str = (char **)malloc(sizeof(char *) * 3);

	str[0] = ft_llitoa(-9223372036854775808);
	str[1] = ft_llitoa(36854775);
	str[2] = ft_strnew(1);
	// str[2][0] = '\0';
	return	(str);
}


// void	free_all(char	**s)
// {
// 	if (!s)

// }

int    main(void)
{
    // char		*s;
    // char    *copy;
    // int i;
	char		**str;
	size_t		test_size;

    // s = ft_lutoa(-9223372036854775808);
    

	

	str = create_str();


	test_size = ft_strlen((const char*)str);


	ft_putnchar("\n", 1);
ft_putnchar("ft_p", 4);
	ft_putnbr_fd(test_size, 1);
ft_putnchar("\n", 1);

	ft_putnchar("\n", 1);
    ft_putnchar("str0", 4);
    ft_putnchar("\n", 1);
    	ft_putnchar(str[0], 20);
    ft_putnchar("\n", 1);
	ft_putnchar("\n", 1);
    ft_putnchar("str1", 4);
    ft_putnchar("\n", 1);
    	ft_putnchar(str[1], 20);
    ft_putnchar("\n", 1);
	ft_putnchar("\n", 1);
    ft_putnchar("str2", 4);
    ft_putnchar("\n", 1);
    	ft_putnchar(str[2], 20);
    ft_putnchar("\n", 1);

	ft_strdel(&str[0]);
	ft_strdel(&str[1]);
	ft_strdel(&str[2]);
	
	free(str);
	str = NULL;
	// ft_strdel(str);


	/*
    s = ft_llitoa(-9223372036854775808);

    copy = s;

        ft_putnchar("\n", 1);
    ft_putnchar("copy", 4);
    ft_putnchar("\n", 1);
    ft_putnchar(copy, 20);
    ft_putnchar("\n", 1);
    ft_putnchar("s", 1);
    ft_putnchar("\n", 1);
    ft_putnchar(s, 20);
    ft_putnchar("\n", 1);
    ft_putnchar("\n", 1);
    
    move_forward(s);

       ft_putnchar("\n", 1);
    ft_putnchar("copy", 4);
    ft_putnchar("\n", 1);
    ft_putnchar(copy, 20);
    ft_putnchar("\n", 1);
    ft_putnchar("s", 1);
    ft_putnchar("\n", 1);
    ft_putnchar(s, 20);
    ft_putnchar("\n", 1);
    ft_putnchar("\n", 1);
    ft_putnchar("ret4", 4);

// this is okay
    s = move_forward_return(s);

       ft_putnchar("\n", 1);
    ft_putnchar("copy", 4);
    ft_putnchar("\n", 1);
    ft_putnchar(copy, 20);
    ft_putnchar("\n", 1);
    ft_putnchar("s", 1);
    ft_putnchar("\n", 1);
    ft_putnchar(s, 20);
    ft_putnchar("\n", 1);
    ft_putnchar("\n", 1);
    
    move_forward(s);

       ft_putnchar("\n", 1);
    ft_putnchar("copy", 4);
    ft_putnchar("\n", 1);
    ft_putnchar(copy, 20);
    ft_putnchar("\n", 1);
    ft_putnchar("s", 1);
    ft_putnchar("\n", 1);
    ft_putnchar(s, 20);
    ft_putnchar("\n", 1);
    ft_putnchar("\n", 1);
    ft_putnchar("sub1", 4);

    s = move_forward_sub(s);

       ft_putnchar("\n", 1);
    ft_putnchar("copy", 4);
    ft_putnchar("\n", 1);
    ft_putnchar(copy, 20);
    ft_putnchar("\n", 1);
    ft_putnchar("s", 1);
    ft_putnchar("\n", 1);
    ft_putnchar(s, 20);
    ft_putnchar("\n", 1);
    ft_putnchar("\n", 1);
    ft_putnchar("adree", 4);

// and this is also okay
   move_forward_adree(&s);

       ft_putnchar("\n", 1);
    ft_putnchar("copy", 4);
    ft_putnchar("\n", 1);
    ft_putnchar(copy, 20);
    ft_putnchar("\n", 1);
    ft_putnchar("s", 1);
    ft_putnchar("\n", 1);
    ft_putnchar(s, 20);
    ft_putnchar("\n", 1);
    ft_putnchar("\n", 1);


    // i = count_u_ldigits(s);
    // s += 1;

    ft_strdel(&copy);

	*/
    return (0);
}

