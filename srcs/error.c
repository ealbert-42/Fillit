/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbert <ealbert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/19 15:43:59 by ealbert           #+#    #+#             */
/*   Updated: 2016/02/02 12:33:34 by ealbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_error(int n)
{
	if (n == 0)
		ft_putendl_fd("Error: Too many arguments\n", 2);
	else if (n == 1)
		ft_putendl_fd("Error: Read Error\n", 2);
	else if (n == 2)
		ft_putendl_fd("Error: Invalid Input File\n", 2);
	else if (n == 3)
		ft_putendl_fd("Error: Malloc Error\n", 2);
	else if (n == 4)
		ft_putendl_fd("Error: Could not solve!\n", 2);
	exit(EXIT_FAILURE);
}
