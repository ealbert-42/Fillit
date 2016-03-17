# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ealbert <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/14 14:46:35 by ealbert           #+#    #+#              #
#    Updated: 2016/03/11 18:29:20 by ealbert          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY : all clean fclean re

NAME 	= fillit

COMPIL 	= gcc -Wall -Wextra -Werror -I ./includes/ -o fillit

SRC = srcs/main.c \
	  LIBFT/libft.a \
	  srcs/error.c \
	  srcs/read_file.c \
	  srcs/valid_file.c \
	  srcs/generate_map.c \
	  srcs/algo.c \
	  srcs/trim_tetri.c \
	  srcs/save_tetri.c

all: $(NAME)

$(NAME):
	@echo "\033[33;33m~~~FILLIT : Compilation...\033[0m"
	@make -C ./LIBFT
	@$(COMPIL) $(SRC)
	@echo "\033[33;32m~~~FILLIT : Done.\033[0m"

clean:
	@rm -rf fillit
	@make clean -C ./LIBFT
	@echo "\033[33;32m~~~FILLIT : Executable successfully removed.\033[0m"

fclean: clean
	@make fclean -C ./LIBFT

re: fclean all
