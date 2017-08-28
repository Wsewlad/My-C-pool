/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 21:27:15 by exam              #+#    #+#             */
/*   Updated: 2017/08/04 21:44:28 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int		sum;
	int		i;
	int		sum2;

	i = 1;
	if (argc < 2)
	{
		ft_putchar('0');
		ft_putchar('\n');
	}
	else
	{
		sum = argc - 1;
		while (sum / i > 9)
			i *= 10;
		while (i > 0)
		{
			sum2 = sum / i;
			ft_putchar(sum2 + '0');
			sum = sum % i;
			i /= 10;
		}
		ft_putchar('\n');
	}
	return (0);
}
