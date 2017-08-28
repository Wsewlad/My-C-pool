/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 15:46:49 by vfil              #+#    #+#             */
/*   Updated: 2017/08/08 17:34:28 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int				i;
	unsigned char	c1;
	unsigned char	c2;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	c1 = s1[i];
	c2 = s2[i];
	return (c1 - c2);
}

void	ft_sort_wordtab(char **tab)
{
	int		i;
	int		j;
	char	*buf;

	i = 0;
	while (tab[i + 1] != '\0')
	{
		j = 0;
		while (tab[j + 1] != '\0')
		{
			if (ft_strcmp(tab[j], tab[j + 1]) > 0)
			{
				buf = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = buf;
			}
			j++;
		}
		i++;
	}
}
