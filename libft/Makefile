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

# constants

CC				:= gcc
AR				:= ar rcs
NORM			:= norminette
RMRF			:= rm -rf
RMF				:= rm -f
MKDIR			:= mkdir -p
NAME			:= libft.a
MODE			:= prod

# directories

OBJ				:= ./obj
HDR				:= ./includes
SRCS			:= ./srcs

# flags

WFLAGS		:= -Wall -Wextra -Werror -Wvla

# files

SOURCES		:= ./$(SRCS)/ft_isalnum.c \
./$(SRCS)/ft_atoi.c    \
./$(SRCS)/ft_isalpha.c \
./$(SRCS)/ft_memcmp.c  \
./$(SRCS)/ft_strdup.c  \
./$(SRCS)/ft_strnstr.c \
./$(SRCS)/ft_bzero.c   \
./$(SRCS)/ft_isascii.c \
./$(SRCS)/ft_memcpy.c  \
./$(SRCS)/ft_strlcat.c \
./$(SRCS)/ft_strrchr.c \
./$(SRCS)/ft_calloc.c  \
./$(SRCS)/ft_isdigit.c \
./$(SRCS)/ft_memmove.c \
./$(SRCS)/ft_strlcpy.c \
./$(SRCS)/ft_tolower.c \
./$(SRCS)/ft_isprint.c \
./$(SRCS)/ft_memset.c  \
./$(SRCS)/ft_strlen.c  \
./$(SRCS)/ft_toupper.c \
./$(SRCS)/ft_memchr.c  \
./$(SRCS)/ft_strchr.c  \
./$(SRCS)/ft_strncmp.c \
./$(SRCS)/ft_strjoin.c \
./$(SRCS)/ft_substr.c  \
./$(SRCS)/ft_strtrim.c \
./$(SRCS)/ft_split.c   \
./$(SRCS)/ft_itoa.c    \
./$(SRCS)/ft_strmapi.c \
./$(SRCS)/ft_striteri.c\
./$(SRCS)/ft_putchar_fd.c \
./$(SRCS)/ft_putstr_fd.c  \
./$(SRCS)/ft_putendl_fd.c \
./$(SRCS)/ft_putnbr_fd.c \
./$(SRCS)/ft_lstnew.c \
./$(SRCS)/ft_lstadd_front.c \
./$(SRCS)/ft_lstsize.c \
./$(SRCS)/ft_lstclear.c \
./$(SRCS)/ft_lstadd_back.c \
./$(SRCS)/ft_lstdelone.c \
./$(SRCS)/ft_lstiter.c \
./$(SRCS)/ft_lstlast.c \
./$(SRCS)/ft_lstmap.c

OBJECTS2 = $(SOURCES:.c=.o)
OBJECTS1 = $(notdir $(OBJETS2))
OBJECTS = $(addprefix obj/, $(OBJETS1))

# rules

all: $(NAME)

$(NAME): $(OBJ) $(NORM) $(OBJECTS)
	@$(AR) $(NAME) $(OBJETS)

$(OBJ)/%.o: $(SRCS)/%.c
	@$(CC) $(WFLAGS) -I$(HDR) -c $< -o $@

$(OBJ):
	@$(MKDIR) $(OBJ)

ifeq ($(MODE), debug)
	$(NORM)
endif

clean:
	@$(RMRF) $(OBJ)

fclean: clean
	@$(RMF) $(NAME)

re: fclean $(NAME)

.PHONY: all obj norminette clean fclean re
