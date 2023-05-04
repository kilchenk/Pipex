# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/20 21:05:37 by kilchenk          #+#    #+#              #
#    Updated: 2023/05/04 16:34:38 by kilchenk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = pipex

SRC =	pipex.c
OBJ =	$(SRC:.c=.o)

CC = gcc
FLAGS = -Wall -Wextra -Werror -g
RM = rm -rf

LIBFT = ./Libft/libft.a

all: $(NAME)

%.o: %.c
	@$(CC) $(FLAGS) -c $< -o $@
	@echo "\033[92m•\033[0m\c"

$(NAME): $(OBJ) $(SRC)
	@$(MAKE) -C Libft
	@$(CC) $(LIBFT) $(OBJ) -o $(NAME) $(LIBFT)
	@echo "\033[92mPipex successfully compiled!\033[0m"

clean:
	@$(MAKE) fclean -C Libft
	@$(RM) $(OBJ)
	@echo "\033[0;31mPipex successfully cleaned!\033[0m"

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re