/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbert <ealbert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/22 15:35:42 by ealbert           #+#    #+#             */
/*   Updated: 2016/02/02 12:21:23 by ealbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H

# define FILLIT_H
# define BUFFER_SIZE 20
# define LETTER 65

# include "libft.h"
# include <fcntl.h>

typedef struct			s_map
{
	char	**map;
	int		maxsize;
	int		position;
	int		maxposition;
}						t_map;

typedef struct			s_triminos
{
	int					letter;
	int					x1;
	int					y1;
	int					x2;
	int					y2;
	int					x3;
	int					y3;
	int					x4;
	int					y4;
	struct s_triminos	*next;
}						t_triminos;

void					ft_error(int n);
t_map					*ft_generate_map(t_triminos *t1);
t_triminos				*ft_read_file(int fd);
int						ft_valid_string(char *str);
int						ft_algo(t_map *map, t_triminos *t);
void					ft_save_tetri(t_triminos **t1, char **p, int letter);
char					**ft_trim_tetri(char *input);

#endif
