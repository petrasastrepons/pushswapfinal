# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: psastre <psastre@student.42barcelo>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/28 12:24:54 by psastre           #+#    #+#              #
#    Updated: 2024/02/10 10:18:31 by psastre          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = gcc
RM = rm -rf
LIBC = ar -rcs
FLAGS = -Wall -Wextra -Werror -g

SRC = parse.c sort.c s_sort.c push_swap.c init.c rotate.c r_rotate.c push.c swap.c utils.c
LIBFT = ./libft/
L_SRC = ./src
L_LIB = ./libft/libft.a
INC = 	-I ./inc/\
	-I ./libft/\
	

D_OBJ = $(L_SRC)/obj
OBJ = $(addprefix $(D_OBJ)/, $(SRC:.c=.o))
DEP = $(addprefix $(D_OBJ)/, $(SRC:.c=.d))

all: dir $(NAME) $(L_LIB)

-include $(DEP)

dir:
	make -C  $(LIBFT) --no-print-directory
	mkdir -p $(D_OBJ)

$(D_OBJ)/%.o: $(L_SRC)/%.c
	$(CC) -MMD $(FLAGS) -c $< -o $@ $(INC)

$(NAME): $(OBJ) $(L_LIB)
	@echo hello
	@echo OBJ: $(OBJ)	
	$(CC) $(FLAGS) $(OBJ) $(L_LIB) -o $(NAME) $(INC)

.PHONY: clean fclean re

fclean: clean
		$(RM) $(NAME) $(NAME) 
		make clean -C $(LIBFT) --no-print-directory

clean: 
		$(RM) $(D_OBJ)
		make clean -C $(LIBFT) --no-print-directory
	
re: fclean all 
.SILENT:
