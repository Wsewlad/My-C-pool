/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 15:56:39 by vfil              #+#    #+#             */
/*   Updated: 2017/08/07 16:11:24 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int		*dest;
	int		i;

	dest = (int*)malloc(sizeof(*tab) * length);
	i = 0;
	while (i < length)
	{
		dest[i] = f(tab[i]);
		i++;
	}
	return (dest);
}
