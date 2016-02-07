/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   save_tetri.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbert <ealbert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/02 11:45:59 by ealbert           #+#    #+#             */
/*   Updated: 2016/02/07 14:22:54 by ealbert          ###   ########.fr       */
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
	t2->next = NULL;
	return (t2);
}

t_triminos			*ft_save_tetri(t_triminos *t1, char **p, int letter)
{
	t_triminos	*tmp;
	t_triminos	*new;
	int			i;
	int			j;

	if (!(new = (t_triminos *)malloc(sizeof(t_triminos))))
		ft_error(3);
	new = ft_initetri(new, letter);
	i = 0;
	while (p[i] != NULL)
	{
		j = 0;
		while (p[i][j] != '\0')
		{
			if (p[i][j] == '#')
				new = ft_save_it(new, i, j);
			j++;
		}
		i++;
	}
	if (t1 == NULL)
		return (new);
	tmp = t1;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new;
	return (t1);
}
