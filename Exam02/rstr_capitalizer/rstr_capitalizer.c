/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 15:34:30 by exam              #+#    #+#             */
/*   Updated: 2017/08/11 16:48:43 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		write(1, &c, 1);
		i++;
	}
}

int		is_upper(char c)
{
	if (c < 65 || c > 90)
		return (0);
	return (1);
}

int		is_alpha(char c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

char	**check_all(int argc, char **argv)
{
	int		i;
	int		j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (is_alpha(argv[i][j]) == 1)
			{
				if (is_upper(argv[i][j]) == 1 && argv[i][j + 1] != '\0')
					argv[i][j] = argv[i][j] + 32;
				if (is_upper(argv[i][j]) != 1 &&
						argv[i][j + 1] != '\0' &&
						(argv[i][j + 1] == ' ' || argv[i][j + 1] == '\t'))
					argv[i][j] = argv[i][j] - 32;
				if (!is_upper(argv[i][j]) && argv[i][j + 1] == '\0')
					argv[i][j] = argv[i][j] - 32;
			}
			j++;
		}
		i++;
	}
	return (argv);
}

int		main(int argc, char **argv)
{
	char	n;
	int		i;

	n = '\n';
	if (argc < 2)
		write(1, &n, 1);
	i = 1;
	argv = check_all(argc, argv);
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putstr("\n");
		i++;
	}
	return (0);
}
