/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/30 15:16:47 by vfil              #+#    #+#             */
/*   Updated: 2017/08/13 20:32:56 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_02.h"

char	*draw_line03(int width, char n1, char n2, char n3)
{
	int		i;
	int		j;
	char	*rn;

	rn = (char*)malloc(sizeof(char) * (width + 1));
	i = 1;
	j = 0;
	while (i <= width)
	{
		if (i == 1)
			rn[j] = n1;
		else if (i == width)
			rn[j] = n3;
		else
			rn[j] = n2;
		i++;
		j++;
	}
	rn[j] = '\n';
	return (rn);
}

char	*rush03(char *rn, int x, int y)
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
			rn = ft_strcat(rn, draw_line03(x, a, b, c));
		else if (i == y)
			rn = ft_strcat(rn, draw_line03(x, a, b, c));
		else
			rn = ft_strcat(rn, draw_line03(x, b, t, b));
		i++;
	}
	return (rn);
}
