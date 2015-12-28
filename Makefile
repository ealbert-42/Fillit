# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ealbert <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/14 14:46:35 by ealbert           #+#    #+#              #
#    Updated: 2015/12/28 16:34:51 by ealbert          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY : all clean fclean re

COMPIL = gcc -Wall -Wextra -Werror -I ./includes/ -o fillit

SRC = srcs/fi_main.c \
	  srcs/libft.a

all :
	make -C ./libft
	cp libft/libft.a ./srcs/
	$(COMPIL) $(SRC)

clean :
	rm -rf fillit

fclean : clean
	make fclean -C ./libft

re : fclean all
