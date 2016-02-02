/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbert <ealbert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/19 15:40:42 by ealbert           #+#    #+#             */
/*   Updated: 2016/02/02 13:24:35 by ealbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, char **argv)
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
			ft_putendl("Bravo");
			return (0);
		}
		map->maxsize++;
	}
	ft_error(4);
	return (0);
}
