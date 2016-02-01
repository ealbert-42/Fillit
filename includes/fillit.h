/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbert <ealbert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/22 15:35:42 by ealbert           #+#    #+#             */
/*   Updated: 2016/01/24 18:51:32 by ealbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H

# define FILLIT_H
# define BUFFER_SIZE 20
# define LETTER 65

#include "libft.h"
#include <fcntl.h>

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

typedef struct			s_map
{
	char	**map;
	int		xcoor;
	int		ycoor;
}						t_map;
#endif
