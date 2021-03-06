/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/31 12:18:16 by vfil              #+#    #+#             */
/*   Updated: 2017/08/15 19:12:07 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		ft_atoi(char *str)
{
	int sum;
	int if_neg;
	int i;

	sum = 0;
	i = 0;
	if_neg = 1;
	while (str[i] >= 9 && str[i] <= 32)
		i++;
	while (str[i] == '+' && str[i + 1] != '-')
		i++;
	if (str[i] != '-' && str[i] < '0' && str[i] > '9')
		return (0);
	if (str[i] == '-')
	{
		if_neg = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		sum = sum * 10 + str[i] - '0';
		i++;
	}
	return (sum * if_neg);
}
