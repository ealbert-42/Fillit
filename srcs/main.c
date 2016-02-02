/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbert <ealbert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/19 15:40:42 by ealbert           #+#    #+#             */
/*   Updated: 2016/02/02 16:27:54 by ealbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void	ft_print_map(char **map)
{
	int		i;

	i = 0;
	while (map[i])
	{
		ft_putendl(map[i]);
		i++;
	}
}

int			main(int argc, char **argv)
{
	int			fd;
	t_triminos	*t;
	t_map		*map;

	if (argc != 2)
		ft_error(0);
	if ((fd = open(argv[1], O_RDONLY)) < 0)
		ft_error(1);
	t = ft_read_file(fd);
	close(fd);
	map = ft_generate_map(t);
	while (map->maxsize != 13)
	{
		if (ft_algo(map, t) == 1)
		{
			ft_putendl("Success");
			ft_print_map(map->map);
			return (0);
		}
		map->maxsize++;
	}
	ft_error(4);
	ft_print_map(map->map);
	return (0);
}
