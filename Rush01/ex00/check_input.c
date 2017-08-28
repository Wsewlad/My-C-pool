/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 13:09:01 by vfil              #+#    #+#             */
/*   Updated: 2017/08/06 22:29:21 by sahafono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_len(char **argv)
{
	int		i;
	int		j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
			j++;
		if (j != 9)
			return (0);
		i++;
	}
	return (1);
}

int		is_num(char **argv)
{
	int		i;
	int		j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if ((argv[i][j] < '0' || argv[i][j] > '9') && argv[i][j] != '.')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		check_row_i(char **argv)
{
	char	buf[9];
	int		i;
	int		j;
	int		k;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			buf[j] = argv[i][j];
			k = 0;
			while (k < j)
			{
				if (argv[i][j] == buf[k++] && argv[i][j] != '.')
					return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int		check_col_i(char **argv)
{
	char	buf[9];
	int		i;
	int		j;
	int		k;

	i = 1;
	j = 0;
	while (argv[i])
	{
		while (argv[i])
		{
			buf[i - 1] = argv[i][j];
			k = 0;
			while (k < i - 1)
			{
				if (argv[i][j] == buf[k++] && argv[i][j] != '.')
					return (0);
			}
			i++;
		}
		j++;
	}
	return (1);
}

int		check_input(int argc, char **argv)
{
	if (argc <= 9 || argc > 10)
		return (0);
	if (check_len(argv) != 1)
		return (0);
	if (is_num(argv) != 1)
		return (0);
	if (check_row_i(argv) != 1 || check_col_i(argv) != 1)
		return (0);
	return (1);
}
