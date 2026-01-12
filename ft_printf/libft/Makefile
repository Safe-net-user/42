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

# PROJECT NAME

NAME			:= libft.a

# CONSTANTS

CC				:= cc
AR				:= ar rcs
NORM			:= norminette
RMRF			:= rm -rf
RMF				:= rm -f
MKDIR			:= mkdir -p
NAME			:= libft.a

# COLORS

RESET			:= \033[0m
GREEN			:= \033[0;32m
RED				:= \033[0;31m
BLUE			:= \033[0;34m


# DIRECTORIES

OBJ				:= ./obj
HDR				:= ./include
SRC				:= ./src

# FLAGS

WFLAG		:= -Wall -Wextra -Werror -Wvla

# FILES

SOURCES		:= $(SRC)/ft_isalnum.c \
$(SRC)/ft_atoi.c    \
$(SRC)/ft_isalpha.c \
$(SRC)/ft_memcmp.c  \
$(SRC)/ft_strdup.c  \
$(SRC)/ft_strnstr.c \
$(SRC)/ft_bzero.c   \
$(SRC)/ft_isascii.c \
$(SRC)/ft_memcpy.c  \
$(SRC)/ft_strlcat.c \
$(SRC)/ft_strrchr.c \
$(SRC)/ft_calloc.c  \
$(SRC)/ft_isdigit.c \
$(SRC)/ft_memmove.c \
$(SRC)/ft_strlcpy.c \
$(SRC)/ft_tolower.c \
$(SRC)/ft_isprint.c \
$(SRC)/ft_memset.c  \
$(SRC)/ft_strlen.c  \
$(SRC)/ft_toupper.c \
$(SRC)/ft_memchr.c  \
$(SRC)/ft_strchr.c  \
$(SRC)/ft_strncmp.c \
$(SRC)/ft_strjoin.c \
$(SRC)/ft_substr.c  \
$(SRC)/ft_strtrim.c \
$(SRC)/ft_split.c   \
$(SRC)/ft_itoa.c    \
$(SRC)/ft_strmapi.c \
$(SRC)/ft_striteri.c\
$(SRC)/ft_putchar_fd.c \
$(SRC)/ft_putstr_fd.c  \
$(SRC)/ft_putendl_fd.c \
$(SRC)/ft_putnbr_fd.c \
$(SRC)/ft_lstnew.c \
$(SRC)/ft_lstadd_front.c \
$(SRC)/ft_lstsize.c \
$(SRC)/ft_lstclear.c \
$(SRC)/ft_lstadd_back.c \
$(SRC)/ft_lstdelone.c \
$(SRC)/ft_lstiter.c \
$(SRC)/ft_lstlast.c \
$(SRC)/ft_lstmap.c

OBJECTS			:= $(patsubst $(SRC)/%.c, $(OBJ)/%.o, $(SOURCES))

# RULES

all: $(NAME)

$(NAME): $(OBJ) $(OBJECTS)
	@$(AR) $(NAME) $(OBJECTS)
	@echo "$(GREEN)$(NAME) succesfully created$(RESET)"

$(OBJ)/%.o: $(SRC)/%.c
	@$(CC) $(WFLAG) -I$(HDR) -c $< -o $@
	@echo "$(GREEN)[ ✔ ] Successfully processed $< into .o!$(RESET)"

$(OBJ):
	@$(MKDIR) $(OBJ)

norminette:
	@$(NORM)

clean:
	@$(RMRF) $(OBJ)

fclean: clean
	@$(RMF) $(NAME)

re: fclean $(NAME)

.PHONY: all obj norminette clean fclean re
