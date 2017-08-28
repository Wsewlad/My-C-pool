/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/30 10:26:17 by vfil              #+#    #+#             */
/*   Updated: 2017/08/12 13:45:39 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	draw_line02(int width, char n1, char n2)
{
	int		i;
	char	n;

	n = '\n';
	i = 1;
	while (i <= width)
	{
		if (i == 1 || i == width)
			ft_putchar(n1);
		else
			ft_putchar(n2);
		i++;
	}
	ft_putchar(n);
}

int		rush02(int x, int y)
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
			draw_line02(x, a, b);
		else if (i == y)
			draw_line02(x, c, b);
		else
			draw_line02(x, b, t);
		i++;
	}
	return (0);
}
