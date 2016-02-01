//header

t_triminos	*ft_save_tetri(t_triminos *t2, int i, int j)
{
	if (t2->x1 == -42)
	{
		t2->x1 = i;
		t2->y1 = j;
	}
	else if (t2-> x2 == -42)
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

t_triminos	*ft_initetri(t_triminos *t2, int letter)
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

t_triminos	*ft_save_tetri(t_triminos *t1, char **piece, int letter)
{
	t_triminos	*t2;
	int		i;
	int		j;

	if (!(t2 = (t_triminos)malloc(sizeof(t_triminos))))
		return (NULL);
	t2 = ft_initetri(t2, letter);
	i = 0;
	j = 0;
	while (piece[i])
	{
		while (piece[i][j])
		{
			if (piece[i][j] == '#')
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
