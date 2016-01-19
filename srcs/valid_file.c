/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_file.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbert <ealbert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/19 15:56:50 by ealbert           #+#    #+#             */
/*   Updated: 2016/01/19 17:35:59 by ealbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		valid_char(char c)
{
	if (c == '#' || c == '.')
		return (1);
	return (0);
}

int		valid_line(char *str, int *nbdiez)
{
	int		i;

	i = 0;
	while (str[i] != '\n')
	{
		if (!valid_char(str) || i == 4)
				return (0);
		if (str[i] == '#')
		{
			if (str[i + 1] == '#' || str[i + 5] == '#' || nbdiez == 3)
				nbdiez++;
			else
				return (0);
		}
		i++;
	}
	return (1);
}

int		valid_string(char *str)
{
	int		i;
	int		nbdiez;
	int		line;

	line = 1;
	i = 0;
	nbdiez = 0;
	while (str[i] != '\0')
	{
		if (!valid_line(&str[i], &nbdiez))
			return (0);
		if (nbdiez > 4 || line == 5)
			return (0);
		i += 5;
		line++;
	}
	return (1);
}
