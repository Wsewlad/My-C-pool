/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 13:53:27 by vfil              #+#    #+#             */
/*   Updated: 2017/08/03 15:53:03 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*range;
	int		i;

	i = 0;
	if (min >= max)
		return (NULL);
	range = (int*)malloc(sizeof(int) * (max - min + 1));
	while (min < max)
	{
		range[i] = min;
		i++;
		min++;
	}
	range[i] = '\0';
	return (range);
}
