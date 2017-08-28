/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/30 15:16:47 by vfil              #+#    #+#             */
/*   Updated: 2017/08/12 13:46:16 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	draw_line03(int width, char n1, char n2, char n3)
{
	int		i;

	i = 1;
	while (i <= width)
	{
		if (i == 1)
			ft_putchar(n1);
		else if (i == width)
			ft_putchar(n3);
		else
			ft_putchar(n2);
		i++;
	}
	ft_putchar('\n');
}

int		rush03(int x, int y)
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
			draw_line03(x, a, b, c);
		else if (i == y)
			draw_line03(x, a, b, c);
		else
			draw_line03(x, b, t, b);
		i++;
	}
	return (0);
}
