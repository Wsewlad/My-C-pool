/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/29 20:44:36 by vfil              #+#    #+#             */
/*   Updated: 2017/07/30 00:00:46 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_sqrt_helper(int bn, int prev)
{
   int next;

   next = (prev + bn / prev) / 2;
   if (bn / next == next)
	return (next);
   if (bn / next == next)
	return(next);
   else
	return (ft_sqrt_helper(bn, next));
}

int		ft_sqrt(int bn)
{
    return	(ft_sqrt_helper(bn, 1));
}

int		main(void)
{
	int bn;

	scanf("%i", &bn);
	printf("%i\n", ft_sqrt(bn));
	return (0);
}
