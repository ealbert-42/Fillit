# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ealbert <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/14 14:46:35 by ealbert           #+#    #+#              #
#    Updated: 2016/01/19 17:38:15 by ealbert          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY : all clean fclean re

COMPIL = gcc -Wall -Wextra -Werror -I ./includes/ -o fillit

SRC = srcs/main.c \
	  srcs/libft.a \
	  srcs/error.c \
	  srcs/read_file.c \
	  srcs/valid_file.c \
	  srcs/main.c \
	  srcs/generate_map.c \
	  srcs/algo.c \
	  srcs/trim_tetri.c \

all :
	make -C ./libft
	cp libft/libft.a ./srcs/
	$(COMPIL) $(SRC)

clean :
	rm -rf fillit

fclean : clean
	make fclean -C ./libft

re : fclean all
