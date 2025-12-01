# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gd-hallu <gd-hallu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/28 07:37:23 by gd-hallu          #+#    #+#              #
#     Updated: 2025/11/28 07:37:23 by gd-hallu         ###   ########.fr       #
#                                                                              #
# **************************************************************************** #

# Projects

NAME				:= libftprintf.a

# constants

CC					:= cc
AR					:= ar rcs
RMF					:= rm -f
RMRF				:= rm -rf
MKDIR				:= mkdir -p
NORM				:= norminette
LIBFT				:= ./libft/libft.a

# directories

OBJ					:= ./obj
HDR					:= ./includes
SRCS				:= ./srcs

# paths

LIBFT_PATH			:= ./libft

# flags

W_FLAGS				:= -Wall -Werror -Wextra -Wvla
C_FLAGS				:= $(W_FLAGS) -I$(HDR) -std=c99

# files

SOURCES				:= ./$(SRCS)/ft_printf.c \
./$(SRCS)/ft_printf_utils.c \

#OBJECTS2 = $(SOURCES:.c=.o)
#OBJECTS1 = $(notdir $OBJECTS2)
#OBJECTS = $(addprefix $(OBJ)/, $(OBJECTS1))

OBJECTS				:=$(patsubst $(SRCS)/%.c, $(OBJ)/%.o, $(SOURCES))

# Build mode

MODE	:= release
ifeq ($(MODE), debug)
	W_FLAGS := $(W_FLAGS) # autres flags
endif

# rules

all: $(NAME) $(LIBFT)

$(NAME):  $(OBJECTS)
	@$(AR) $(NAME) $(OBJECTS)

$(OBJ)/%.o: $(SRCS)/%.c
	$(MKDIR) $(OBJ)
	@$(CC) $(WFLAGS) -I$(HDR) -L$(LIBFT_PATH) -lft -c $< -o $@

clean:
	@$(RMRF) $(OBJ)

fclean: clean
	@$(RMF) $(NAME)

re: fclean $(NAME)

norminette:
	@$(NORM)

.PHONY: all clean fclean re norminette
