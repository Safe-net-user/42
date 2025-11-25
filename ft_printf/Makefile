# constants

CC			:= gcc
RMF			:= rm -f
RMRF		:= rm -rf
MKDIR		:= mkdir -p
NORM		:= norminette
AR			:= ar rcs
MODE		:= debug
NAME		:= libftprintf.a
LIBFT		:= ./libft/libft.a

# directories

OBJ = ./obj
HDR = ./includes
SRCS = ./srcs

# paths

LIBFT_PATH	:= ./libft

# flags

WFLAGS		:= -Wall -Werror -Wextra -Wvla

# files

SOURCES		:=

# place .o of .c files into a directory called obj

OBJECTS2 = $(SOURCES:.c=.o)
OBJECTS1 = $(notdir $OBJECTS2)
OBJECTS = $(addprefix $(OBJ)/, $(OBJECTS1))

# rules

all: $(NAME) $(LIBFT)

$(NAME): $(OBJ) $(OBJECTS)
	@$(AR) $(NAME) $(OBJECTS)

$(OBJ)/%.o: $(SRCS)/%.c
	@$(CC) $(WFLAGS) -I$(HDR) -L$(LIBFT_PATH) -lft -c $< -o $@

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
