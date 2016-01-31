/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shill <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/31 22:34:39 by shill             #+#    #+#             */
/*   Updated: 2016/01/31 22:34:41 by shill            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char 	**ft_generate_map()
{
	int		i;
	
	i = 0;
	map = (char **)malloc(sizeof(char *) * 12);
	if (!map)
		ft_error(3)
	while (i != 12)
	{
		map[i] = ft_strdup("............");
		if (!map[i])
			ft_error(3);
		i++;
	}
	return (map);
}