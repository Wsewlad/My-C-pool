/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/01 23:13:00 by vfil              #+#    #+#             */
/*   Updated: 2017/08/01 23:41:29 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	find_len(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len_src;

	i = 0;
	len_src = find_len(src);
	while (dest[i] != '0')
	{
		if (!dest[i])
		{
			j = 0;
			while (src[j] && j != size)
			{
				dest[i] = src[j];
				i++;
				j++;
			}
			dest[i] = '\0';
			return (size + len_src);
		}
		i++;
	}
	return (size + len_src);
}
