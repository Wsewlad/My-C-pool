/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/30 10:12:30 by vfil              #+#    #+#             */
/*   Updated: 2017/08/12 14:04:32 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		rush00(int x, int y);
int		rush01(int x, int y);
int		rush02(int x, int y);
int		rush03(int x, int y);
int		rush04(int x, int y);

int		main(int argc, char **argv)
{
	int	x;
	int	y;
	if (argc == 4)
	{
		x = atoi(argv[2]);
		y = atoi(argv[3]);
		if (x && y)
		{
			if (argv[1][5] == '0')
				rush00(x, y);
			else if (argv[1][5] == '1')
				rush01(x, y);
			else if (argv[1][5] == '3')
				rush03(x, y);
			else if (argv[1][5] == '4')
				rush04(x, y);
			else
				rush02(x, y);
		}
	}
	else
		printf("Incorrect arguments! Must be [Name of rush 'rush00'] [x] [y]\n");
	return (0);
}
