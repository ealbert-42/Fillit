/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbert <ealbert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 20:19:06 by ealbert           #+#    #+#             */
/*   Updated: 2015/12/09 18:31:43 by ealbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>
#include <unistd.h>

int		main(int argc, char **argv)
{
	int		fd;
	char	*str;

	if (argc != 2)
	{
		ft_putendl_fd("There is no files to open. Please try again.", 2);
		return (0);
	}
	if (!(fd = open(argv[1], O_RDONLY)))
	{
		ft_putendl_fd("An error has been encountered. Please try again.", 2);
		return (0);
	}
	str = ft_read_it(fd);
	if (!str)
		return (0);
	ft_putstr(str);
	return (0);
}
