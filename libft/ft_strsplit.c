/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 12:08:16 by ealbert           #+#    #+#             */
/*   Updated: 2015/12/03 11:34:43 by ealbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_lines(const char *s, char c)
{
	int		i;
	int		line;
	int		part;

	i = 0;
	line = 0;
	part = 0;
	while (s[i] != '\0')
	{
		if (part == 1 && s[i] == c)
			part = 0;
		if (part == 0 && s[i] != c)
		{
			part = 1;
			line++;
		}
		i++;
	}
	return (line);
}

static int	ft_count_char(const char *s, char c)
{
	int		i;

	i = 0;
	while (*s != '\0' && *s != c)
	{
		i++;
		s++;
	}
	return (i);
}

char		**ft_strsplit(const char *s, char c)
{
	char	**new;
	int		lines;
	int		i;

	i = 0;
	lines = ft_count_lines(s, c);
	new = (char **)malloc(sizeof(char *) * ft_count_lines(s, c));
	if (!new)
		return (NULL);
	while (lines--)
	{
		while (*s == c && *s != '\0')
			s++;
		new[i] = ft_strsub((const char *)s, 0, ft_count_char(s, c));
		if (!new[i])
			return (NULL);
		s = s + ft_count_char(s, c);
		i++;
	}
	return (new);
}
