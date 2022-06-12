# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: severi <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/30 18:43:06 by severi            #+#    #+#              #
#    Updated: 2022/06/06 08:43:32 by severi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

LIBFT_DIR = libft

LIBFT = libft.a

LIB = libft/libft.a

SRC = ft_printf.c \
ft_frexp.c \
ft_frexpl.c \
ft_calc_str.c \
ft_float_conv.c \
ft_int_conv.c \
ft_floatl.c \
ft_get_res.c \
ft_vlq.c \
ft_vlq_sum.c \
ft_vlq_mult.c \
ft_vlq_conv.c \
ft_vlq_pow.c \
ft_print_flags.c \
ft_print_before.c \
ft_print_signed.c \
ft_print_str.c \
ft_print_unsigned.c \
ft_return_flags.c \
ft_print_f.c \
ft_print_i.c \
ft_print_x.c \
ft_basetoa.c \
ft_utils.c \
ft_utils_2.c \
ft_round.c \
ft_read_match.c

SRCS = $(addprefix srcs/, $(SRC))

OBJ = $(SRC:.c=.o)

OBJS = $(addprefix obj/, $(SRC:.c=.o))

INC = includes/

LIBFT_INC = libft/includes/

OBJ_DIR = obj/

CC = gcc

CFLAGS = -Wall -Werror -Wextra

all: $(NAME) 

$(NAME): $(OBJS)
	mkdir -p $(OBJ_DIR)
	make -C $(LIBFT_DIR)
	mkdir -p $(OBJ_DIR)
	cp $(LIBFT_DIR)/$(LIBFT) ./$(NAME)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

dir:
	mkdir -p $(OBJ_DIR)
	
$(OBJS): obj/%.o : srcs/%.c
	$(CC) $(CFLAGS) -I $(LIBFT_INC) -I $(INC) -c $< -o $@

clean:
	make clean -C $(LIBFT_DIR)
	rm -f -r $(OBJS)

fclean: clean
	make fclean -C $(LIBFT_DIR)
	rm -f $(NAME)
	
re: fclean all

.PHONY: clean fclean all
