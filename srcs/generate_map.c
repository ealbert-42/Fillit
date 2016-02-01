/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shill <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/31 22:34:39 by shill             #+#    #+#             */
/*   Updated: 2016/01/31 22:34:41 by shill            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_map	*ft_generate_map(t_triminos *t1)
{
	int		i;
	t_map	*map;
	
	i = 0;
	if (!(map = (t_map *)malloc(sizeof(t_map))))
		ft_error(3);
	if (!(map->map = (char **)malloc(sizeof(char *) * 12)))
		ft_error(3);
	while (i != 12)
	{
		if (!(map->map[i] = ft_strdup("............")))
			ft_error(3);
		i++;
	}
	map->position = 0;
	map->maxsize = ft_map_init(t1);
	return (map);
}

#include "fillit.h"

int		ft_map_init(t_triminos *t1)
{
	int		i;
	int		j;
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
