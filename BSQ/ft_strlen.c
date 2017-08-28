/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 13:30:46 by vfil              #+#    #+#             */
/*   Updated: 2017/08/16 09:32:22 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		*ft_strlen(char *str)
{
	int		*icn;
	int		flag_n;
	int		i;

	i = 0;
	icn = (int*)malloc(sizeof(int) * 3);
	flag_n = 0;
	icn[0] = 0;
	icn[1] = 0;
	icn[2] = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n' && flag_n == 0)
		{
			flag_n = 1;
			icn[0] = i;
			i++;
		}
		if (str[i] == '\n' && flag_n == 1)
			icn[2]++;
		if (str[i] != icn[0] && flag_n == 1)
			icn[1]++;
		i++;
	}
	return (icn);
}
