/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/30 12:59:43 by vfil              #+#    #+#             */
/*   Updated: 2017/08/13 20:22:17 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_02.h"

char	*draw_line00(int width, char n1, char n2)
{
	int		i;
	int		j;
	char	n;
	char	*rn;

	n = '\n';
	rn = (char*)malloc(sizeof(char) * (width + 1));
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

char	*rush00(char *rn, int x, int y)
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
			rn = ft_strcat(rn, draw_line00(x, a, c));
		else if (i == y)
			rn = ft_strcat(rn, draw_line00(x, a, c));
		else
			rn = ft_strcat(rn, draw_line00(x, b, t));
		i++;
	}
	return (rn);
}
