/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/30 13:18:47 by vfil              #+#    #+#             */
/*   Updated: 2017/08/13 20:02:38 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_02.h"

char	*draw_line01(int width, char n1, char n2, char n3)
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
			rn[j] = n2;
		else
			rn[j] = n3;
		i++;
		j++;
	}
	rn[j] = '\n';
	return (rn);
}

char	*rush01(char *rn, int x, int y)
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
			rn = ft_strcat(rn, draw_line01(x, a, b, c));
		else if (i == y)
			rn = ft_strcat(rn, draw_line01(x, b, a, c));
		else
			rn = ft_strcat(rn, draw_line01(x, c, c, t));
		i++;
	}
	return (rn);
}
