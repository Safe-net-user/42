# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gd-hallu <gd-hallu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/09 16:43:32 by gd-hallu          #+#    #+#              #
#    Updated: 2025/11/20 23:50:31 by gd-hallu         ###   ########.fr        #
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
ft_isalnum.c \
ft_atoi.c    \
ft_isalpha.c \
ft_memcmp.c  \
ft_strdup.c  \
ft_strnstr.c \
ft_bzero.c   \
ft_isascii.c \
ft_memcpy.c  \
ft_strlcat.c \
ft_strrchr.c \
ft_calloc.c  \
ft_isdigit.c \
ft_memmove.c \
ft_strlcpy.c \
ft_tolower.c \
ft_isprint.c \
ft_memset.c  \
ft_strlen.c  \
ft_toupper.c \
ft_memchr.c  \
ft_strchr.c  \
ft_strncmp.c \
ft_strjoin.c \
ft_substr.c  \
ft_strtrim.c \
ft_strtrim.c \
ft_split.c   \
ft_itoa.c    \
ft_strmapi.c \
ft_striteri.c\
ft_putchar_fd.c \
ft_putstr_fd.c  \
ft_putendl_fd.c \
ft_putnbr_fd.c \

SRCS_BONUS := ft_lstnew.c \
ft_lstadd_front.c \
ft_lstsize.c \
ft_lstclear.c \
ft_lstadd_back.c \
ft_lstdelone.c \
ft_lstiter.c \
ft_lstlast.c

OBJ			:= $(SRCS:.c=.o)
OBJ_BONUS	:= $(SRCS_BONUS:.c=.o)
INCLUDE		:= ./include

# rules
all: $(NAME)

$(NAME): $(OBJ)
	@$(AR) $(NAME) $(OBJ)

bonus: $(OBJ) $(OBJ_BONUS)
	@$(AR) $(NAME) $(OBJ) $(OBJ_BONUS)

%.o:%.c
	@$(CC) $(WFLAGS) -I$(INCLUDE) -c $< -o $@

%.o:%.c
	@$(CC) $(WFLAGS) -I$(INCLUDE) -c $< -o $@

clean:
	@$(RMF) $(OBJ)

fclean: clean
	@$(RMF) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
