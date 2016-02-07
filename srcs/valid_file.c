/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_file.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbert <ealbert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/19 15:56:50 by ealbert           #+#    #+#             */
/*   Updated: 2016/02/02 12:29:18 by ealbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	ft_nb_diez(char *s, int i)
{
	if (s[i + 1] == 35 || s[i - 1] == 35 || s[i + 5] == 35 || s[i - 5] == 35)
		return (1);
	return (-42);
}

int			ft_valid_string(char *str)
{
	int		i;
	int		nbdiez;
	int		line;

	line = 0;
	i = 0;
	nbdiez = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			line++;
		else if (str[i] == '#')
			nbdiez += ft_nb_diez(str, i);
		else if (str[i] != '.')
			return (0);
		i++;
	}
	if (i != 20 || nbdiez != 4 || line != 4)
		return (0);
	return (1);
}
