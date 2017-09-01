/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/27 13:21:08 by vfil              #+#    #+#             */
/*   Updated: 2017/07/27 22:49:32 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	int f;
	int i;
	int l;
	
	f = 0;
	while (f++ <= 7)
	{
		i = f;
		while (i++ <= 8)
		{
			l = i;
			while (l++ <= 9)
			{
				ft_putchar(f + 47);
				ft_putchar(i + 47);
				ft_putchar(l + 47);
				if (f <= 7)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}
