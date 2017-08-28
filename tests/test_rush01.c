int		is_valid_row(char **argv)
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

int		is_valid_col(char **argv)
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
