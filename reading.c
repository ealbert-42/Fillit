/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reading.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbert <ealbert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 21:34:09 by ealbert           #+#    #+#             */
/*   Updated: 2015/12/09 17:50:03 by ealbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_read_it(int fd)
{
	char	*str;
	int		ret;
	char	buf;
	int		i;

	i = 0;
	while ((ret = read(fd, &buf, 1)) > 0)
	{
		i += 1;
	}
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	while ((ret = read(fd, &buf, 1)) > 0)
	{
		*str = buf;
		str++;
	}
	*str = '\0';
	return (str);
}
