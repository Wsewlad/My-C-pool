/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 16:50:50 by vfil              #+#    #+#             */
/*   Updated: 2017/08/03 17:40:35 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_concat_params(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '0')
	{
		if (!dest[i])
		{
			j = 0;
			while (src[j])
			{
				dest[i] = src[j];
				i++;
				j++;
			}
			dest[i] = '\n';
			dest[i + 1] = '\0';
			return (dest);
		}
		i++;
	}
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		sum;
	char	*string;

	i = 1;
	sum = 0;
	j = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			sum++;
			j++;
		}
		i++;
	}
	string = (char*)malloc((sizeof(char) * (sum + i + 1)));
	while (argc > 1)
	{
		string = ft_strcat(string, argv[j]);
		j++;
	}
	return (string);
}
