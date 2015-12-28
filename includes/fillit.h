/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbert <ealbert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/22 15:35:42 by ealbert           #+#    #+#             */
/*   Updated: 2015/12/28 17:10:33 by ealbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H

# define FILLIT_H
# define BUFFER_SIZE 21
# define LETTER 65

#include "libft.h"
#include <fcntl.h>

typedef struct			s_triminos
{
	char				*piece;
	int					letter;
	struct s_triminos	*left;
	struct s_triminos	*right;
}						t_triminos;
#endif
