# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: severi <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/27 13:32:02 by severi            #+#    #+#              #
#    Updated: 2022/01/28 09:14:00 by severi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = test_ftprintf.a

LIB = libftprintf

SRC = main.c

INC = ../includes

LIB_INC = ../libft/includes

LIBDIR = ../

OBJ = $(SRC:.c=.o)

CC = gcc

#CFLAGS = -Wall -Wextra -Werror -Wconversion -g
CFLAGS = -Wall -Wextra -w -g -fsanitize=address

all: $(NAME)

$(NAME): $(LIB)
#$(CC) $(CFLAGS) -I $(INC) -I $(LIB_INC) -o $(OBJ) -c $(SRC)
	$(CC) $(CFLAGS) -o $(NAME) $(SRC) -I $(INC) -I $(LIB_INC) -L $(LIBDIR) -lftprintf

$(LIB):
	make -C $(LIBDIR) 
#fclean && make -C $(LIBDIR)

clean:
	make clean -C $(LIBDIR)
	rm -f $(OBJ)

fclean: clean
	make fclean -C $(LIBDIR)
	rm -f $(NAME)

re: fclean all
