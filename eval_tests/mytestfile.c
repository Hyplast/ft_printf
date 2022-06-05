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


static void    move_forward_adree(char **s)
{
    (*s) += 1;
}

static void    move_forward(char *s)
{
    s += 1;
}

static char     *move_forward_return(char *s)
{
    s += 1;
    return (s);
}


int    main(void)
{
    char		*s;
    char    *copy;
    int i;

    // s = ft_lutoa(-9223372036854775808);
    


    s = ft_llitoa(-9223372036854775808);

    copy = s;

    ft_putnchar("\n", 1);
    ft_putnchar("copy", 4);
    ft_putnchar("\n", 1);
    ft_putnchar(copy, 20);
    ft_putnchar("\n", 1);

    ft_putnchar("\n", 1);
    ft_putnchar("s", 1);
    ft_putnchar("\n", 1);
    ft_putnchar(s, 20);
    ft_putnchar("\n", 1);
    
    move_forward(s);

    ft_putnchar("\n", 1);
    ft_putnchar("copy", 4);
    ft_putnchar("\n", 1);
    ft_putnchar(copy, 20);
    ft_putnchar("\n", 1);

    ft_putnchar("\n", 1);
    ft_putnchar("s", 1);
    ft_putnchar("\n", 1);
    ft_putnchar(s, 20);
    ft_putnchar("\n", 1);
    
// this is okay
    s = move_forward_return(s);

        ft_putnchar("\n", 1);
    ft_putnchar("copy", 4);
    ft_putnchar("\n", 1);
    ft_putnchar(copy, 20);
    ft_putnchar("\n", 1);

    ft_putnchar("\n", 1);
    ft_putnchar("s", 1);
    ft_putnchar("\n", 1);
    ft_putnchar(s, 20);
    ft_putnchar("\n", 1);
    
    s = copy;
    move_forward(s);

    ft_putnchar("\n", 1);
    ft_putnchar("copy", 4);
    ft_putnchar("\n", 1);
    ft_putnchar(copy, 20);
    ft_putnchar("\n", 1);

    ft_putnchar("\n", 1);
    ft_putnchar("s", 1);
    ft_putnchar("\n", 1);
    ft_putnchar(s, 20);
    ft_putnchar("\n", 1);
    

// and this is also okay
    move_forward_adree(&s);

       ft_putnchar("\n", 1);
    ft_putnchar("copy", 4);
    ft_putnchar("\n", 1);
    ft_putnchar(copy, 20);
    ft_putnchar("\n", 1);

    ft_putnchar("\n", 1);
    ft_putnchar("s", 1);
    ft_putnchar("\n", 1);
    ft_putnchar(s, 20);
    ft_putnchar("\n", 1);


    // i = count_u_ldigits(s);
    // s += 1;

    ft_strdel(&copy);
    return (0);
}

