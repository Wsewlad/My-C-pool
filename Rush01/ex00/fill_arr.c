/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_arr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafono <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 18:44:55 by sahafono          #+#    #+#             */
/*   Updated: 2017/08/06 20:19:53 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cell.h"
#include <stdlib.h>

void	fill_variants_aray(t_cell *cell_row, int col, int size)
{
	int k;

	k = 1;
	while (k < size + 1)
	{
		cell_row[col].variants[k] = k;
		k++;
	}
}

t_cell	**fill_array(char **argv, int size)
{
	int			i;
	int			j;
	t_cell		**sudoku;

	i = 0;
	sudoku = (t_cell**)malloc(sizeof(t_cell*) * size);
	while (i < size)
	{
		j = 0;
		sudoku[i] = (t_cell*)malloc(sizeof(t_cell) * size);
		while (j < size)
		{
			sudoku[i][j].x = i;
			sudoku[i][j].y = j;
			sudoku[i][j].value = argv[i + 1][j];
			fill_variants_aray(sudoku[i], j, size);
			j++;
		}
		i++;
	}
	return (sudoku);
}
