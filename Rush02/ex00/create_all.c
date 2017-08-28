/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_all.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 17:50:34 by vfil              #+#    #+#             */
/*   Updated: 2017/08/13 20:24:04 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_02.h"

char	**create_all(int size, int x, int y)
{
	char	**all;
	int		i;

	all = (char**)malloc(sizeof(char*) * (5 + 1));
	i = 0;
	while (i < 5)
	{
		all[i] = (char*)malloc(sizeof(char) * (size + 1));
		i++;
	}
	all[0] = rush00(all[0], x, y);
	all[1] = rush01(all[1], x, y);
	all[2] = rush02(all[2], x, y);
	all[3] = rush03(all[3], x, y);
	all[4] = rush04(all[4], x, y);
	all[5] = 0;
	return (all);
}
