# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ealbert <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/03/17 18:04:02 by ealbert           #+#    #+#              #
#    Updated: 2016/03/17 18:26:13 by ealbert          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.SUFFIXES :

.PHONY : all clean fclean re

NAME = fillit

COMPIL = gcc -Wall -Wextra -Werror

SRCS =	srcs/read_file.c \
		srcs/main.c \
		srcs/save_tetri.c \
		srcs/trim_tetri.c \
		srcs/valid_file.c \
		srcs/error.c \
		srcs/algo.c \
		srcs/generate_map.c \
		LIBFT/libft.a

$(NAME) :
	@echo "\033[33;33m~~~FILLIT : Compilation...\033[0m"
	@make all -C LIBFT
	@$(COMPIL) -o fillit -I includes/ $(SRCS)
	@echo "\033[33;32m~~~FILLIT : Compilation done.\033[0m"

all : $(NAME)

clean :
	@make clean -C LIBFT/

fclean : clean
	@rm $(NAME)
	@make fclean -C LIBFT/
	@echo "\033[33;32m~~~FILLIT : Executable removed.\033[0m"

re : fclean all
