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
	char				**piece;
	int					letter;
	int					xcoor;
	int					ycoor;
	struct s_triminos	*next;
}						t_triminos;

typedef struct			s_map
{
	char	**map;
	int		xcoor;
	int		ycoor;
}						t_map;
#endif
