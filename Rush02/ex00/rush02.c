/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/30 10:26:17 by vfil              #+#    #+#             */
/*   Updated: 2017/08/13 20:12:51 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_02.h"

char	*draw_line02(int width, char n1, char n2)
{
	int		i;
	char	n;
	int		j;
	char	*rn;

	rn = (char*)malloc(sizeof(char) * (width + 1));
	n = '\n';
	i = 1;
	j = 0;
	while (i <= width)
	{
		if (i == 1 || i == width)
			rn[j] = n1;
		else
			rn[j] = n2;
		i++;
		j++;
	}
	rn[j] = '\n';
	return (rn);
}

char	*rush02(char *rn, int x, int y)
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
			rn = ft_strcat(rn, draw_line02(x, a, b));
		else if (i == y)
			rn = ft_strcat(rn, draw_line02(x, c, b));
		else
			rn = ft_strcat(rn, draw_line02(x, b, t));
		i++;
	}
	return (rn);
}
