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

static t_triminos	*ft_return(t_triminos *t1, t_triminos *t, t_triminos *e)
{
	if (!t1)
		return (e);
	t = t1;
	while (t->next != NULL)
		t = t->next;
	t->next = e;
	return (t1);
}

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
	t_triminos	*elem;
	int			i;
	int			j;

	tmp = NULL;
	if (!(elem = (t_triminos *)malloc(sizeof(t_triminos))))
		ft_error();
	elem = ft_initetri(elem, letter);
	i = 0;
	while (p[i] != NULL)
	{
		j = 0;
		while (p[i][j] != '\0')
		{
			if (p[i][j] == '#')
				elem = ft_save_it(elem, i, j);
			j++;
		}
		i++;
	}
	return (ft_return(t1, tmp, elem));
}
