# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: severi <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/30 18:43:06 by severi            #+#    #+#              #
#    Updated: 2022/04/08 01:22:16 by severi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

LIBFT_DIR = libft

LIBFT = libft.a

LIBFT_SRC = \
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
ft_litoa.c \
ft_utoa.c \
ft_lutoa.c \
ft_putchar_fd.c \
ft_putstr_fd.c \
ft_putendl_fd.c \
ft_putchar.c \
ft_putstr.c \
ft_putendl.c \
ft_putnbr.c \
ft_putnbr_fd.c \
get_next_line.c

SRC = ft_printf.c \
ft_frexp.c \
ft_frexpl.c \
ft_calc_str.c \
ft_float_conv.c \
ft_floatl.c \
ft_get_res.c \
ft_vlq.c \
ft_vlq_sum.c \
ft_vlq_mult.c \
ft_vlq_conv.c \
ft_vlq_pow.c \
ft_print_flags.c \
ft_print_before.c \
ft_return_flags.c \
ft_print_f.c \
ft_print_i.c \
ft_print_x.c \
ft_basetoa.c \
ft_utils.c \
ft_round.c 

SRCS = $(addprefix srcs/, $(SRC))

OBJ = $(SRC:.c=.o)

OBJS = $(addprefix srcs/, $(OBJ))

LIB_OBJ = $(LIBFT_SRC:.c=.o)

LIB_OBJS = $(addprefix libft/, $(LIB_OBJ))

INC = includes/

LIBFT_INC = libft/includes/

OBJ_DIR = obj/

CC = gcc

CFLAGS = -Wall -Werror -Wextra -g#-Wconversion -g
# -g -fsanitize=address

all: $(NAME) 

$(NAME): $(OBJS) $(LIB_OBJS)
	ar rc $(NAME) $(OBJS) $(LIB_OBJS)
	ranlib $(NAME)

$(OBJS): srcs/%.o : srcs/%.c
	$(CC) $(CFLAGS) -I $(LIBFT_INC) -I $(INC) -c $< -o $@ 

$(LIB_OBJS): libft/%.o : libft/%.c
	$(CC) $(CFLAGS) -I $(LIBFT_INC) -c $< -o $@

dir:
	mkdir -p $(OBJ_DIR)

clean:
	rm -f $(OBJS)
	rm -f $(LIB_OBJS) 

fclean: clean
	rm -f $(NAME)
	rm -f $(LIBFT_DIR)/$(LIBFT)

re: fclean all

.PHONY: clean fclean all
