/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/30 12:59:43 by vfil              #+#    #+#             */
/*   Updated: 2017/08/12 13:44:18 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	draw_line00(int width, char n1, char n2)
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

int		rush00(int x, int y)
{
	int		i;
	char	a;
	char	b;
	char	c;
	char	t;

	a = 'o';
	b = '|';
	c = '-';
	t = ' ';
	i = 1;
	if (x <= 0 || y <= 0)
		return (0);
	while (i <= y)
	{
		if (i == 1)
			draw_line00(x, a, c);
		else if (i == y)
			draw_line00(x, a, c);
		else
			draw_line00(x, b, t);
		i++;
	}
	return (0);
}
