# ############################################################################ #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gd-hallu <gd-hallu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/14 18:07:42 by gd-hallu          #+#    #+#              #
#    Updated: 2026/01/08 17:35:12 by gd-hallu         ###   ########.fr        #
#                                                                              #
# ############################################################################ #

MAKEFLAGS += --no-print-directory

# PROJECT NAME

NAME		:= libftprintf.a

# CONSTANTS

CC			:= cc
RM			:= rm
RMF			:= rm -rf
AR			:= ar rcs
MKDIR		:= mkdir -p
NORM		:= norminette

# DIRECTORIES

OBJ			:= ./obj
SRC			:= ./src
HDR			:= ./include

# LIBRARIES

LIBFT_PATH	:= ./libft
LIBFT		:= $(LIBFT_PATH)/libft.a

# FLAGS

W_FLAGS		:= -Wall -Wextra -Werror
C_FLAGS		:= $(W_FLAGS) -I$(HDR) -I$(LIBFT_PATH)/include -std=c99

# COLORS

RESET				:= \033[0m
GREEN				:= \033[0;32m

# BANNER

define BANNER
$(GREEN)
███████╗████████╗     ██████╗ ██████╗ ██╗███╗   ██╗████████╗███████╗
██╔════╝╚══██╔══╝     ██╔══██╗██╔══██╗██║████╗  ██║╚══██╔══╝██╔════╝
█████╗     ██║        ██████╔╝██████╔╝██║██╔██╗ ██║   ██║   █████╗
██╔══╝     ██║        ██╔═══╝ ██╔══██╗██║██║╚██╗██║   ██║   ██╔══╝
██║        ██║███████╗██║     ██║  ██║██║██║ ╚████║   ██║   ██║
╚═╝        ╚═╝╚══════╝╚═╝     ╚═╝  ╚═╝╚═╝╚═╝  ╚═══╝   ╚═╝   ╚═╝
$(RESET)
endef
export BANNER

# FILES

SOURCES		:= $(SRC)/ft_printf.c \
$(SRC)/ft_parsing_format.c \
$(SRC)/handle_int.c \
$(SRC)/handle_string.c \
$(SRC)/putchar_fd.c \
$(SRC)/str_len.c \
$(SRC)/ft_printf_utils.c \
$(SRC)/putstr_fd.c \
$(SRC)/handle_lower_hexas.c \
$(SRC)/handle_upper_hexas.c \
$(SRC)/handle_hexas_utils.c \
$(SRC)/handle_unsigned_int.c \
$(SRC)/handle_char.c \
$(SRC)/handle_pointer.c \
$(SRC)/handle_pointer_utils.c \
$(SRC)/handle_percent.c

OBJECTS		:= $(patsubst $(SRC)/%.c, $(OBJ)/%.o, $(SOURCES))

# RULES

all: $(NAME)

$(LIBFT):
	@make -C $(LIBFT_PATH)
	@echo "$(GREEN)libft succesfuly compiled ✔$(RESET)"

$(NAME): $(LIBFT) $(OBJECTS)
	@cp $(LIBFT) $(NAME)
	@$(AR) $(NAME) $(OBJECTS)
	@echo "$$BANNER"

$(OBJ)/%.o: $(SRC)/%.c | $(OBJ)
	@$(CC) $(C_FLAGS) -c $< -o $@
	@echo "$(GREEN)[ ✔ ] Successfully processed $< into .o!$(RESET)"

$(OBJ):
	@$(MKDIR) $(OBJ)

bonus: all

clean:
	@$(RMF) $(OBJ)
	@make -C $(LIBFT_PATH) clean

fclean: clean
	@$(RM) $(NAME)
	@make -C $(LIBFT_PATH) fclean

re: fclean all

.PHONY: all clean fclean re
