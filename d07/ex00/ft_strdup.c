/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 11:52:24 by vfil              #+#    #+#             */
/*   Updated: 2017/08/03 13:51:13 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		l;
	int		i;

	l = 0;
	while (src[l] != '\0')
		l++;
	dest = (char*)malloc(sizeof(*src) * l);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		if (dest[i] != src[i])
			return (0);
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
