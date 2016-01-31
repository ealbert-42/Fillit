/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shill <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/31 19:15:17 by shill             #+#    #+#             */
/*   Updated: 2016/01/31 19:15:24 by shill            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

/*typedef struct			s_map
{
	char	**map;
	int 	position;
	int 	maxsize;
	int 	maxposition;
}						t_map;*/

static int		ft_checkblock(char **map, t_triminos t, int position) // permet de checker en un instant si c'est bon
{
	int 	x = position % map->maxsize; //on recupère les coordonnés
	int		y = position / map->maxsize;

	if (map[x + t->x1][y + t->y1] == '.'
		&& map[x + t->x2][y + t->y2] == '.'
		&& map[x + t->x3][y + t->y3] == '.'
		&& map[x + t->x4][y + t->y4] == '.')
		return (1);
	return (0);
}

static void		ft_writeblock(char **map, t_triminos t, int position)
{
	int 	x = position % map->maxsize;
	int		y = position / map->maxsize;

	map[x + t->x1][y + t->y1] = 't->letter';
	map[x + t->x2][y + t->y2] = 't->letter';
	map[x + t->x3][y + t->y3] = 't->letter';
	map[x + t->x4][y + t->y4] = 't->letter';
}

static void		ft_clearblock(char **map, t_triminos t, int position)
{
	int 	x = position % map->maxsize;
	int		y = position / map->maxsize;

	map[x + t->x1][y + t->y1] = '.';
	map[x + t->x2][y + t->y2] = '.';
	map[x + t->x3][y + t->y3] = '.';
	map[x + t->x4][y + t->y4] = '.';
}

int 			ft_algo(t_map map, t_triminos t)
{
	map->position = 0;
	while (t != NULL) //tant qu'on a pas testé tout les tetri
	{
		while (map->position != map->maxposition) //tant qu'on a pas parcouru toute la map avec le tetri en cours
		{
			if (ft_checkblock(map, t, pos) == 1)
			{
				ft_writeblock(map, t, position);
				if (t->next == NULL) //si le tetri rentre et que c'est le dernier, on renvoi 1, c'est gagné!
					return (1);
				if (ft_algo(map, t->next) == 1) //recursive : renvoi 1 seulement si le tetri d'après rentre aussi
					return (1);
				else
					ft_clearblock(map, t, position); //efface le bloc de la map si le block suivant n'est pas rentré
			}
			map->position++; //ça rentre pas, on check la position d'apres.
		}
		return (0); //c'est pas rentré, on remonte d'un cran dans la recurisive
		
	}
	ft_mapextend(map); //fonction qui agrandi la map de 1
	}
	return (0); //rien n'est rentré : FAIL !
}

