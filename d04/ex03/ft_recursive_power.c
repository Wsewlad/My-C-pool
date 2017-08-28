/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/29 16:09:57 by vfil              #+#    #+#             */
/*   Updated: 2017/07/29 17:28:31 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	int powsum;

	powsum = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power > 1)
	{
		power--;
		return (powsum * ft_recursive_power(nb, power));
	}
	return (powsum);
}
