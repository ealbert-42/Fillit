/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trim_tetri.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shill <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/21 13:52:12 by shill             #+#    #+#             */
/*   Updated: 2016/02/02 13:19:31 by ealbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	ft_emptycol(char *input, int i)
{
	if (input[i] == '.' && input[i + 5] == '.' && input[i + 10] == '.'
		&& input[i + 15] == '.')
		return (1);
	else
		return (0);
}

static int	ft_emptyline(char *input, int i)
{
	int		ret;

	ret = 1;
	while (input[i] != '\n')
	{
		if (input[i] != '.')
			ret = 0;
		i++;
	}
	return (ret);
}

static char	*ft_trimline(char *input)
{
	int		i;

	i = 0;
	while (input[i])
	{
		if (ft_emptyline(input, i))
		{
			while (input[i] != '\n')
			{
				input[i] = '\n';
				i++;
			}
		}
		i++;
	}
	return (input);
}

char		**ft_trim_tetri(char *input)
{
	int		i;
	char	**matrix;

	i = 0;
	while (input[i])
	{
		if (ft_emptycol(input, i) == 1)
		{
			input[i] = '\n';
			input[i + 5] = '\n';
			input[i + 10] = '\n';
			input[i + 15] = '\n';
		}
		i++;
	}
	input = ft_trimline(input);
	matrix = ft_strsplit(input, '\n');
	return (matrix);
}
