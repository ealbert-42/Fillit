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

	while (read(fd, &buf, BUFFER_SIZE) == 20)
	{
		buf[ret] = '\0';
		if (!valid_line(str))
			ft_error();
	}
}
