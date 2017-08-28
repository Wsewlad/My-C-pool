/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafono <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 19:06:34 by sahafono          #+#    #+#             */
/*   Updated: 2017/08/06 23:00:29 by sahafono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "cell.h"

t_cell		**fill_array(char **argv, int size);
void		ft_print_sudoku(t_cell **cell_ar, int size);
int			ft_sudoku_solver(t_cell **cell_field, int size);
int			check_input(int argc, char **argv);

int			main(int argc, char **argv)
{
	t_cell	**sudoku_arr;
	int		i;

	if (check_input(argc, argv))
	{
		sudoku_arr = fill_array(argv, argc - 1);
		if (sudoku_arr != NULL)
		{
			if (ft_sudoku_solver(sudoku_arr, argc - 1))
				ft_print_sudoku(sudoku_arr, argc - 1);
			else
				write(1, "Error\n", 6);
		}
		i = 0;
		while (i < argc - 1)
		{
			free(sudoku_arr[i]);
			i++;
		}
		free(sudoku_arr);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
