/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbert <ealbert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/02 12:16:28 by ealbert           #+#    #+#             */
/*   Updated: 2016/02/02 12:48:11 by ealbert          ###   ########.fr       */
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
	ret = 0;
	while ((ret = read(fd, &buf, BUFFER_SIZE)) == 20)
	{
		buf[ret] = '\0';
		if (!ft_valid_string(buf) || tetri > 25)
			ft_error(2);
		t1 = ft_save_tetri(t1, ft_trim_tetri(buf), tetri + 65);
		tetri++;
		ret = read(fd, &buf2, 1);
		buf2[ret] = '\0';
		if (buf2[0] != '\n')
			break ;
	}
	return (t1);
}
