/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 18:21:09 by vfil              #+#    #+#             */
/*   Updated: 2017/08/07 20:34:05 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int		i;
	int		asc;
	int		desc;

	i = 0;
	asc = 0;
	desc = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) >= 0)
			asc++;
		if (f(tab[i], tab[i + 1]) <= 0)
			desc++;
		i++;
	}
	if (asc != length - 1 && desc != length - 1)
		return (0);
	return (1);
}
