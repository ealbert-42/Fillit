/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 14:40:04 by ealbert           #+#    #+#             */
/*   Updated: 2015/11/30 19:16:14 by ealbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int		i;
	char	*dest;
	char	*srcs;

	dest = (char *)dst;
	srcs = (char *)src;
	i = 0;
	while (i < n)
	{
		dest[i] = srcs[i];
		i++;
	}
	dest[i] = 0;
	dst = (void *)dest;
	return (dst);
}
