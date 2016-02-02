/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   save_tetri.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbert <ealbert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/02 11:45:59 by ealbert           #+#    #+#             */
/*   Updated: 2016/02/02 12:48:14 by ealbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static t_triminos	*ft_save_it(t_triminos *t2, int i, int j)
{
	if (t2->x1 == -42)
	{
		t2->x1 = i;
		t2->y1 = j;
	}
	else if (t2->x2 == -42)
	{
		t2->x2 = i;
		t2->y2 = j;
	}
	else if (t2->x3 == -42)
	{
		t2->x3 = i;
		t2->y3 = j;
	}
	else
	{
		t2->x4 = i;
		t2->y4 = j;
	}
	return (t2);
}

static t_triminos	*ft_initetri(t_triminos *t2, int letter)
{
	t2->letter = letter;
	t2->x1 = -42;
	t2->y1 = -42;
	t2->x2 = -42;
	t2->y2 = -42;
	t2->x3 = -42;
	t2->y3 = -42;
	t2->x4 = -42;
	t2->y4 = -42;
	return (t2);
}

t_triminos			*ft_save_tetri(t_triminos *t1, char **p, int letter)
{
	t_triminos	*t2;
	int			i;
	int			j;

	if (!(t2 = (t_triminos *)malloc(sizeof(t_triminos))))
		return (NULL);
	t2 = ft_initetri(t2, letter);
	i = 0;
	j = 0;
	while (p[i])
	{
		while (p[i][j])
		{
			if (p[i][j] == '#')
				ft_save_it(t2, i, j);
			j++;
		}
		i++;
		j = 0;
	}
	if (t1 == NULL)
		t1 = t2;
	else
		t1->next = t2;
	return (t1);
}
