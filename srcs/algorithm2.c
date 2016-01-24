/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbert <ealbert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/24 15:30:10 by ealbert           #+#    #+#             */
/*   Updated: 2016/01/24 18:51:27 by ealbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	print_map(t_map *t2, int map_limit)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < map_limit)
	{
		j = 0;
		while (j < map_limit)
		{
			ft_putchar(t2->map[i][j]);
			j++;
		}
		ft_putendl("");
		i++;
	}
	while (t2->map[i])
		free(t2->map[i--]);
	map = NULL;
	exit(EXIT_SUCCESS);
}

char	**clear_map(t_map *t2)
{
	int		i;

	i = 0;
	while (i < 13)
	{
		t2->map[i] = "............\0";
		i++;
	}
	t2->xcoor = 0;
	t2->ycoor = 0;
	return (t2);
}
