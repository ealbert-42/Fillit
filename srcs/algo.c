/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shill <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/31 19:15:17 by shill             #+#    #+#             */
/*   Updated: 2016/02/02 12:14:29 by ealbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int		ft_checkblock(t_map *map, t_triminos *t, int position)
{
	int		x;
	int		y;

	x = position % map->maxsize;
	y = position / map->maxsize;
	if (map->map[x + t->x1][y + t->y1] == '.'
		&& map->map[x + t->x2][y + t->y2] == '.'
		&& map->map[x + t->x3][y + t->y3] == '.'
		&& map->map[x + t->x4][y + t->y4] == '.')
		return (1);
	return (0);
}

static void		ft_writeblock(t_map *map, t_triminos *t, int position)
{
	int		x;
	int		y;

	x = position % map->maxsize;
	y = position / map->maxsize;
	map->map[x + t->x1][y + t->y1] = t->letter;
	map->map[x + t->x2][y + t->y2] = t->letter;
	map->map[x + t->x3][y + t->y3] = t->letter;
	map->map[x + t->x4][y + t->y4] = t->letter;
}

static void		ft_clearblock(t_map *map, t_triminos *t, int position)
{
	int		x;
	int		y;

	x = position % map->maxsize;
	y = position / map->maxsize;
	map->map[x + t->x1][y + t->y1] = '.';
	map->map[x + t->x2][y + t->y2] = '.';
	map->map[x + t->x3][y + t->y3] = '.';
	map->map[x + t->x4][y + t->y4] = '.';
}

int				ft_algo(t_map *map, t_triminos *t)
{
	map->position = 0;
	while (t != NULL)
	{
		while (map->position != map->maxposition)
		{
			if (ft_checkblock(map, t, map->position) == 1)
			{
				ft_writeblock(map, t, map->position);
				if (t->next == NULL)
					return (1);
				if (ft_algo(map, t->next) == 1)
					return (1);
				else
					ft_clearblock(map, t, map->position);
			}
			map->position++;
		}
		if (map->maxsize == 12)
			return (0);
		map->maxsize++;
	}
	return (0);
}
