/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 16:54:16 by exam              #+#    #+#             */
/*   Updated: 2017/08/11 17:41:38 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			*set_int(void)
{
	int	*inmf1;

	inmf1 = (int*)malloc(sizeof(int) * 4);
	inmf1[0] = 1;
	inmf1[1] = 1;
	inmf1[2] = 0;
	inmf1[3] = 0;
	return (inmf1);
}

long int	set_up(char *str, long int nbr, int *inmf)
{
	str[inmf[2]] = nbr / inmf[0] + 48;
	nbr %= inmf[0];
	inmf[0] /= 10;
	inmf[2]++;
	return (nbr);
}

char		*ft_itoa(int nbr)
{
	int			*inmf;
	char		*str;
	long int	nbr2;

	nbr2 = nbr;
	inmf = set_int();
	if (nbr < 0)
	{
		nbr2 *= -1;
		inmf[1]++;
		inmf[2]++;
		inmf[3] = 1;
	}
	while (nbr2 / inmf[0] > 9)
	{
		inmf[0] *= 10;
		inmf[1]++;
	}
	str = (char*)malloc(sizeof(char) * (inmf[1] + 1));
	if (inmf[3] == 1)
		str[0] = '-';
	while (inmf[0] > 0)
		nbr2 = set_up(str, nbr2, inmf);
	str[inmf[2]] = '\0';
	return (str);
}
