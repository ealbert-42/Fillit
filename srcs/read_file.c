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

t_triminos	*ft_read_file(int fd)
{
	char		buf[BUFFER_SIZE + 1];
	int			ret;
	int			tetri;
	char		buf2[2];
	t_triminos	*t1;

	t1 = NULL;
	tetri = 0;
	while (read(fd, &buf, BUFFER_SIZE) == 20)
	{
		buf[ret] = '\0';
		if (!valid_string(str) || tetri > 25)
			ft_error(2);
		t1 = ft_save_tetri(t1, ft_trim_tetri(str), tetri + 65);
		tetri++;
		read(fd, &buf2, 1);
		buf2[ret] = '\0';
		if (buf2[0] != '\n')
			break;
	}
	return (t1);
}
