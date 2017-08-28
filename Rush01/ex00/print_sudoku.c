/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_sudoku.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafono <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 14:24:23 by sahafono          #+#    #+#             */
/*   Updated: 2017/08/06 19:57:21 by sahafono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "cell.h"

void	ft_print_sudoku(t_cell **cell_ar, int size)
{
	int i;
	int j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			write(1, &(cell_ar[i][j].value), 1);
			if (j < size - 1)
				write(1, " ", 1);
			j++;
		}
		i++;
		write(1, "\n", 1);
	}
}
