/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 23:47:58 by vfil              #+#    #+#             */
/*   Updated: 2017/08/04 00:31:09 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_ultimator.h"

void	ft_destroy(char ***factory)
{
	int i;
	int j;

	i = 0;
	while (factory[i] != '\0')
	{
		j = 0;
		while (factory[i][j] != '\0')
		{
			free(factory[i][j]);
			j++;
		}
		free(factory[i]);
		i++;
	}
	free(factory);
}
