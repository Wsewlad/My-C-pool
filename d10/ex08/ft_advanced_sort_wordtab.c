/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 18:02:59 by vfil              #+#    #+#             */
/*   Updated: 2017/08/08 18:09:47 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
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
			if (cmp(tab[j], tab[j + 1]) > 0)
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
