# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: severi <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/30 18:43:06 by severi            #+#    #+#              #
#    Updated: 2022/01/27 15:21:11 by severi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = \
ft_atoi.c \
ft_bzero.c \
ft_strlen.c \
ft_strdup.c \
ft_strcmp.c \
ft_strncmp.c\
ft_strcpy.c \
ft_strncpy.c \
ft_strcat.c \
ft_strncat.c \
ft_strlcat.c \
ft_strchr.c \
ft_strrchr.c \
ft_strstr.c \
ft_strnstr.c \
ft_isalpha.c \
ft_isdigit.c \
ft_isalnum.c \
ft_isprint.c \
ft_isascii.c \
ft_toupper.c \
ft_tolower.c \
ft_memset.c \
ft_memcpy.c \
ft_memccpy.c \
ft_memchr.c \
ft_memmove.c \
ft_memcmp.c \
ft_memalloc.c \
ft_memdel.c \
ft_strnew.c \
ft_strdel.c \
ft_strclr.c \
ft_striter.c \
ft_striteri.c \
ft_strmap.c \
ft_strmapi.c \
ft_strequ.c \
ft_strnequ.c \
ft_strsub.c \
ft_strtrim.c \
ft_strjoin.c \
ft_strsplit.c \
ft_itoa.c \
ft_putchar_fd.c \
ft_putstr_fd.c \
ft_putendl_fd.c \
ft_putchar.c \
ft_putstr.c \
ft_putendl.c \
ft_putnbr.c \
ft_putnbr_fd.c \
get_next_line.c \
ft_printf.c

OBJ = $(SRC:.c=.o)

INC = includes/

CC = gcc

CFLAGS = -Wall -Werror -Wextra -Wconversion -g
# -g -fsanitize=address

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -I $(INC) -c $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJ)

.PHONY: clean fclean all
