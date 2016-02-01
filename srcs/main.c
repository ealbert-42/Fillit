/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbert <ealbert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/19 15:40:42 by ealbert           #+#    #+#             */
/*   Updated: 2016/01/19 15:46:26 by ealbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, char **argv)
{
	int			fd;
	t_triminos	*t;
	char 		**map;
	int			map_limit;
	
	if (argc != 2)
		ft_error(0);
	if ((fd = open(argv[1], O_RDONLY)) < 0)
		ft_error(1);
	t = ft_read_file(fd);
	close(fd)//read and save trimmed tetri to list and return pointer to beginlist
	map = ft_generate_map();
	map_limit = map_init(t);
	if (ft_algo(map, t) == 1)
		ft_print_map(map);
	else
		ft_error(4);
	return (0);
}
