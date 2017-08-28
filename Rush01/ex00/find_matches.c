/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_matches.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafono <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 14:45:38 by sahafono          #+#    #+#             */
/*   Updated: 2017/08/06 23:02:04 by sahafono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cell.h"

int		check_row(t_cell **cell_field, t_cell cell, int size)
{
	int i;
	int j;

	i = cell.x;
	j = 0;
	while (j < size)
	{
		if (cell_field[i][j].value == cell.value && j != cell.y)
			return (0);
		j++;
	}
	return (1);
}

int		check_col(t_cell **cell_field, t_cell cell, int size)
{
	int i;
	int j;

	i = 0;
	j = cell.y;
	while (i < size)
	{
		if (cell_field[i][j].value == cell.value && i != cell.x)
			return (0);
		i++;
	}
	return (1);
}

int		check_block(t_cell **cell_field, t_cell cell, int size)
{
	int i;
	int j;

	i = (cell.x / size) * size;
	while (i < (cell.x / size + 1) * size)
	{
		j = (cell.y / size) * size;
		while (j < (cell.y / size + 1) * size)
		{
			if (cell_field[i][j].value == cell.value)
				if (i != cell.x && j != cell.y)
					return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		check_cell(t_cell **cell_field, int i, int j, int size)
{
	if (check_row(cell_field, cell_field[i][j], size))
		if (check_col(cell_field, cell_field[i][j], size))
			if (check_block(cell_field, cell_field[i][j], 3))
				return (1);
	return (0);
}
