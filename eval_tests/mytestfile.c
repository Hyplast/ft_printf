#include <stddef.h>
#include <stdlib.h>


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


static size_t	count_ldigits(long long c)
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

static char	*ft_llitoa(long long c)
{
	char		*s;
	size_t		digits;
	long long	value;

	value = c;
	digits = count_ldigits(value);
	s = ft_strnew(digits);
	if (s == NULL || (long unsigned int)c == 0x8000000000000000)
	{
		if ((long unsigned int)c == 0x8000000000000000)
			s = "-9223372036854775808";
		else
			s = NULL;
		return (s);
	}
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

int    main(void)
{
    char		*s;
    s = ft_lutoa(-9223372036854775808);
    // s = ft_llitoa(-9223372036854775808);

    ft_strdel(&s);
    return (0);
}

