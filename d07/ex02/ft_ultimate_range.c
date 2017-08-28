/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 15:46:43 by vfil              #+#    #+#             */
/*   Updated: 2017/08/03 16:37:23 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		*buf_range;
	int		i;
	int		size;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min + 1;
	buf_range = (int*)malloc(sizeof(int) * (max - min + 1));
	while (min < max)
	{
		buf_range[i] = min;
		i++;
		min++;
	}
	buf_range[i] = '\0';
	*range = buf_range;
	return (size);
}
