/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reading.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbert <ealbert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/19 15:45:50 by ealbert           #+#    #+#             */
/*   Updated: 2016/01/19 17:36:04 by ealbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_read_file(int fd)
{
	char	buf[BUFFER_SIZE + 1];
	int		ret;
	int		tetri;
	char	buf2[2];

	tetri = 0;
	while (read(fd, &buf, BUFFER_SIZE) == 20)
	{
		buf[ret] = '\0';
		if (!valid_string(str) || tetri > 25)
			ft_error();
		save_tetri(str);
		tetri++;
		if (!read(fd, &buf2, 1))
			break ;
	}
}
