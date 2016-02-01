/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_size.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbert <ealbert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/22 13:27:11 by ealbert           #+#    #+#             */
/*   Updated: 2016/01/22 15:30:23 by ealbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		map_init(t_triminos *t1)
{
	int		i;
	int		j;
	t_triminos	*tmp;
	
	tmp = t1;
	i = 0;
	j = 2;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	i *= 4;
	while (j * j < i)
	{
		j++;
	}
	return (j);
}
