/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_read.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbert <ealbert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/11 12:00:58 by ealbert           #+#    #+#             */
/*   Updated: 2016/02/11 12:11:12 by ealbert          ###   ########.fr       */
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
	ret = 1;
	while (ret)
	{
		ret = read(fd, &buf, BUFFER_SIZE);
		buf[ret] = '\0';
		if (!ft_valid_string(buf) || tetri > 25)
			ft_error();
		t1 = ft_save_tetri(t1, ft_trim_tetri(buf), tetri + 65);
		tetri = tetri + 1;
		ret = read(fd, &buf2, 1);
		buf2[1] = '\0';
	}
	return (t1);
}
