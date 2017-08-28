/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/30 17:40:07 by vfil              #+#    #+#             */
/*   Updated: 2017/07/30 22:43:24 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	draw(int h, int w)
{
	int i;
	int j;

	i = 0;
	while (i < h)
	{
		j = 0;
		while (j < w)
		{
			if (j == w / 2 - i - 1)
				ft_putchar(47);
			else if (j == w / 2 + i + 1)
				ft_putchar(92);
			else if (j == w / 2 && i == h - 1)
				ft_putchar(124);
			else if (j > w / 2 - i - 1 && j < w / 2 + i + 1)
				ft_putchar(42);
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	sastantua(int size)
{
	int		i;
	int		h;
	int		w;

	h = 3;
	w = 7;
	i = 1;
	while (i <= size)
	{
		draw(h, w);
		i++;
	}
}

int		main(void)
{
	sastantua(1);
	return (0);
}
