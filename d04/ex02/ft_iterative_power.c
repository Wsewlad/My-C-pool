/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/29 15:22:04 by vfil              #+#    #+#             */
/*   Updated: 2017/07/29 16:05:33 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int		powsum;

	powsum = nb;
	if (power < 0)
		return (0);
    if (power == 0)
        return (1);
	while (power > 1)
	{
		powsum *= nb;
		power--;
	}
	return (powsum);
}
