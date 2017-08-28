/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_res.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 22:18:11 by vfil              #+#    #+#             */
/*   Updated: 2017/08/13 23:16:03 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_02.h"

void	print_it(int nb, int x, int y)
{
	ft_putstr("[rush-0");
	ft_putnbr(nb);
	ft_putstr("] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putstr("]\n");
}

void	print234(int x, int y)
{
	ft_putstr("[rush-02] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putstr("] || [rush-03] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putstr("] || [rush-04] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putstr("]\n");
}

void	print24(int nb, int x, int y)
{
	ft_putstr("[rush-0");
	ft_putnbr(nb);
	ft_putstr("] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putstr("] || [rush-04] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putstr("]\n");
}

void	ft_print_res(int *arr, int x, int y)
{
	int	i;

	i = 0;
	while (arr[i] < 5)
	{
		if (arr[2] == 1 && arr[3] == 1 && arr[4] == 1)
		{
			print234(x, y);
			return ;
		}
		else if ((arr[2] == 1 && arr[4] == 1 && i == 2) ||
				(arr[3] == 1 && arr[4] == 1 && i == 3))
		{
			print24(i, x, y);
			return ;
		}
		else if (arr[i] == 1)
		{
			print_it(i, x, y);
			return ;
		}
		i++;
	}
	print_er();
}
