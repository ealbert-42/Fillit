/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbert <ealbert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/19 15:43:59 by ealbert           #+#    #+#             */
/*   Updated: 2016/02/13 18:44:12 by shill            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_error(void)
{
	ft_putendl_fd("error", 1);
	exit(EXIT_FAILURE);
}

void	ft_usage(void)
{
	ft_putendl_fd("usage: ./fillit [INPUT_FILE]", 1);
	exit(EXIT_FAILURE);
}
