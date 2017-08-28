/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/01 23:01:48 by vfil              #+#    #+#             */
/*   Updated: 2017/08/01 23:11:21 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '0')
	{
		if (!dest[i])
		{
			j = 0;
			while (src[j] && j != nb)
			{
				dest[i] = src[j];
				i++;
				j++;
			}
			dest[i] = '\0';
			return (dest);
		}
		i++;
	}
	return (dest);
}