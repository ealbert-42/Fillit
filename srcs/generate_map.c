/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shill <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/31 22:34:39 by shill             #+#    #+#             */
/*   Updated: 2016/02/02 13:22:08 by ealbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	ft_map_init(t_triminos *t1)
{
	int			i;
	int			j;
	t_triminos	*tmp;

	tmp = t1;
	i = 0;
	j = 2;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	i *= 4;
	while (j * j < i)
	{
		j++;
	}
	return (j);
}

t_map		*ft_generate_map(t_triminos *t1)
{
	int		i;
	t_map	*map;

	i = 0;
	if (!(map = (t_map *)malloc(sizeof(t_map))))
		ft_error();
	if (!(map->map = (char **)malloc(sizeof(char *) * 12)))
		ft_error();
	while (i != 12)
	{
		if (!(map->map[i] = ft_strdup("............")))
			ft_error();
		i++;
	}
	map->position = 0;
	map->maxsize = ft_map_init(t1);
	map->maxposition = (map->maxsize * map->maxsize) - 1;
	return (map);
}
