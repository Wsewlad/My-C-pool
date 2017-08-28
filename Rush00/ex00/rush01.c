/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/30 13:18:47 by vfil              #+#    #+#             */
/*   Updated: 2017/08/12 13:45:08 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	draw_line01(int width, char n1, char n2, char n3)
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

int		rush01(int x, int y)
{
	int		i;
	char	a;
	char	b;
	char	c;
	char	t;

	a = 47;
	b = 92;
	c = 42;
	t = ' ';
	i = 1;
	if (x <= 0 || y <= 0)
		return (0);
	while (i <= y)
	{
		if (i == 1)
			draw_line01(x, a, b, c);
		else if (i == y)
			draw_line01(x, b, a, c);
		else
			draw_line01(x, c, c, t);
		i++;
	}
	return (0);
}
