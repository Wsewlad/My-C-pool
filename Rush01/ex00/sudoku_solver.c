/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_solver.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafono <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 20:08:40 by sahafono          #+#    #+#             */
/*   Updated: 2017/08/06 22:58:12 by sahafono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cell.h"

int g_row;
int g_col;

int		check_cell(t_cell **cell_field, int i, int j, int size);

int		find_unassigned_location(t_cell **cell_field, int size)
{
	g_row = 0;
	while (g_row < size)
	{
		g_col = 0;
		while (g_col < size)
		{
			if (cell_field[g_row][g_col].value == '.')
				return (1);
			g_col++;
		}
		g_row++;
	}
	return (0);
}

int		ft_sudoku_solver(t_cell **cell_field, int size)
{
	int number;

	if (!find_unassigned_location(cell_field, size))
		return (1);
	number = 1;
	while (number < size + 1)
	{
		if (check_cell(cell_field, g_row, g_col, number))
		{
			cell_field[g_row][g_col].value = number;
			if (ft_sudoku_solver(cell_field, size))
				return (1);
			cell_field[g_row][g_col].value = '.';
		}
		number++;
	}
	return (0);
}
