/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/31 21:12:05 by vfil              #+#    #+#             */
/*   Updated: 2017/08/01 18:12:08 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		find_length(char *str)
{
	int l;

	l = 0;
	while (str[l] != '\0')
		l++;
	return (l);
}

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int l;

	i = 0;
	l = find_length(to_find);
	if (!l)
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i - j]);
			i++;
			j++;
		}
		i++;
	}
	return (0);
}
