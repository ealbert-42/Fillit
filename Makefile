# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ealbert <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/14 14:46:35 by ealbert           #+#    #+#              #
#    Updated: 2016/02/11 16:28:31 by ealbert          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY : all clean fclean re

NAME 	= fillit

COMPIL 	= gcc -Wall -Wextra -Werror -I ./includes/ -o fillit

SRC = srcs/main.c \
	  libft/libft.a \
	  srcs/error.c \
	  srcs/read_file.c \
	  srcs/valid_file.c \
	  srcs/generate_map.c \
	  srcs/algo.c \
	  srcs/trim_tetri.c \
	  srcs/save_tetri.c

all: $(NAME)

$(NAME):
	make re -C ./libft
	$(COMPIL) $(SRC)

clean:
	rm fillit

fclean: clean
	make fclean -C ./libft
	
re: fclean all
