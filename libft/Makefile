# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gd-hallu <gd-hallu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/09 16:43:32 by gd-hallu          #+#    #+#              #
#    Updated: 2025/11/09 19:14:58 by gd-hallu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# variables
CC			:= cc
AR			:= ar rcs
NORM		:= norminette
RMRF		:= rm -rf
RMF			:= rm -f
MKDIR		:= mkdir -p
NAME		:= libft.a

# flags
WFLAG		:= -Wall -Wextra -Werror -Wvla

# files
SRCS		:= ft_isdigit.c \
ft_isalpha.c \
ft_isalnum.c

OBJ			:= $(SRCS:.c=.o)
INCLUDE		:= libft.h

# rules
all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o:%.c
	$(CC) $(WFLAGS) -I$(INCLUDE) -c $< -o $@

clean:
	$(RMF) $(OBJ)

fclean: clean
	$(RMF) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
