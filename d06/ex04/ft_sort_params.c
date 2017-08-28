/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 20:01:06 by vfil              #+#    #+#             */
/*   Updated: 2017/08/03 12:18:19 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	write_it(char **argv)
{
	int i;
	int j;

	i = 1;
	while (argv[i] != '\0')
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

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

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc > 1)
	{
		while (argc > 1 && argv[i])
		{
			i++;
			if (ft_strcmp(argv[i - 1], argv[i]) > 0)
			{
				argv[argc] = argv[i - 1];
				argv[i - 1] = argv[i];
				argv[i] = argv[argc];
			}
			argc--;
		}
		write_it(argv);
	}
	return (0);
}
