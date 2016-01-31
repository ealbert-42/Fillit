//on note les coordonnees de chaque '#' de tetriminos
//ca rend les choses plus simple pour checker si un tetri rentre sur la map instantanément

typedef struct s_triminos  
{
	char 				**piece;
	int 				letter;
	int 				x1;
	int 				y1;
	int 				x2;
	int 				y2;
	int 				x3;
	int 				y3;
	int 				x4;
	int 				y4;
	struc s_triminos 	*next;
	
}				t_triminos;

typedef struct			s_map
{
	char	**map;
	int 	position;
	int 	maxsize;
	int 	maxposition;
}						t_map;


int			ft_checkblock(char **map, t_triminos t, int position) // permet de checker en un instant si c'est bon
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

void		ft_writeblock(char **map, t_triminos t, int position)
{
	int 	x = position % map->maxsize;
	int		y = position / map->maxsize;

	map[x + t->x1][y + t->y1] = 't->letter';
	map[x + t->x2][y + t->y2] = 't->letter';
	map[x + t->x3][y + t->y3] = 't->letter';
	map[x + t->x4][y + t->y4] = 't->letter';
}

void		ft_clearblock(char **map, t_triminos t, int position)
{
	int 	x = position % map->maxsize;
	int		y = position / map->maxsize;

	map[x + t->x1][y + t->y1] = '.';
	map[x + t->x2][y + t->y2] = '.';
	map[x + t->x3][y + t->y3] = '.';
	map[x + t->x4][y + t->y4] = '.';
}

int 		ft_algo(t_map map, t_triminos t, int map->position)
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
				if (ft_algo(map, t, t->next) == 1) //recursive : renvoi 1 seulement si le tetri d'après rentre aussi
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
}

