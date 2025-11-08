# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gd-hallu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/05 13:38:47 by gd-hallu          #+#    #+#              #
#    Updated: 2025/11/07 15:21:19 by gd-hallu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

SRC = ./srcs/ft_putchar.c \
./srcs/ft_strcmp.c \
./srcs/ft_strlen.c \
./srcs/ft_swap.c \
./srcs/ft_putstr.c

INCLUDE = ./includes

OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJ)
	ar -rv $(NAME) $(OBJ)

$(OBJ): $(SRC)
	$(CC) $(CFLAGS) -I$(INCLUDE) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
