/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 15:36:19 by vfil              #+#    #+#             */
/*   Updated: 2017/08/13 23:16:07 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_02.h"

int		main(void)
{
	char	buf[BUF_SIZE + 1];
	char	**str;
	int		ret;
	int		*arr;
	int		lol;

	lol = 1000000;
	while (lol > 0)
		lol--;
	ret = read(0, buf, BUF_SIZE);
	buf[ret] = '\0';
	arr = ft_strlen_n(buf);
	str = create_all(arr[5], arr[5] / arr[6] - 1, arr[6]);
	while (lol < 5)
	{
		if (ft_strcmp(buf, str[lol]) == 0)
		{
			arr[lol] = 1;
		}
		lol++;
	}
	ft_print_res(arr, arr[5] / arr[6] - 1, arr[6]);
	return (0);
}

void	print_er(void)
{
	ft_putstr("aucune\n");
}
