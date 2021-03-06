/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/28 20:26:12 by vfil              #+#    #+#             */
/*   Updated: 2017/07/28 22:11:30 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_strlen(char *str);

char	*ft_strrev(char *str)
{
	int		i;
	int		last;
	char	temp;

	last = ft_strlen(str) - 1;
	i = -1;
	while (i++ < last / 2)
	{
		temp = str[i];
		str[i] = str[last - i];
		str[last - i] = temp;
	}
	return (str);
}
