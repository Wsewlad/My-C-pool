/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 18:04:39 by exam              #+#    #+#             */
/*   Updated: 2017/08/04 18:12:20 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int		i;

	if (argc < 2)
		ft_putchar('\n');
	else
	{
		i = 0;
		while (argv[argc - 1][i] != '\0')
		{
			ft_putchar(argv[argc - 1][i]);
			i++;
		}
		ft_putchar('\n');
	}
	return (0);
}
