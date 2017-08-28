/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/30 15:24:41 by vfil              #+#    #+#             */
/*   Updated: 2017/08/12 13:47:08 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	draw_line04(int width, char n1, char n2, char n3)
{
	int		i;

	i = 1;
	while (i <= width)
	{
		if (i == 1)
			ft_putchar(n1);
		else if (i == width)
			ft_putchar(n2);
		else
			ft_putchar(n3);
		i++;
	}
	ft_putchar('\n');
}

int		rush04(int x, int y)
{
	int		i;
	char	a;
	char	b;
	char	c;
	char	t;

	a = 'A';
	b = 'B';
	c = 'C';
	t = ' ';
	i = 1;
	if (x <= 0 || y <= 0)
		return (0);
	while (i <= y)
	{
		if (i == 1)
			draw_line04(x, a, c, b);
		else if (i == y)
			draw_line04(x, c, a, b);
		else
			draw_line04(x, b, b, t);
		i++;
	}
	return (0);
}
