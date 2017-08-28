/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mein.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 13:01:05 by vfil              #+#    #+#             */
/*   Updated: 2017/08/16 11:42:56 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include <stdio.h>

int		pars_info2(char *info, char *params)
{
	int	i;

	i = 0;
	while (info[i] != '\0')
		i++;
	params[0] = info[i - 3];
	params[1] = info[i - 2];
	params[2] = info[i - 1];
	params[3] = '\0';
	info[i - 3] = '\0';
	return (ft_atoi(info));
}

void	print_test(char ***buf_info, char *params, int j)
{
	int	i;
	int	height;

	j = 0;
	printf("%s\n", buf_info[j][0]);
	printf("%s\n", buf_info[j][1]);
	height = pars_info2(buf_info[j][1], params);
	i = 0;
	while (params[i] != '\0')
	{
		printf("%c\n", params[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	char	***buf_info;
	char	*params;
	int		j;

	params = (char*)malloc(4);
	if (argc == 1)
	{
		buf_info = ft_read_flow();
		j = 0;
		print_test(buf_info, params, j);
		free(buf_info[j][0]);
	}
	else
	{
		buf_info = ft_read_files(argc, argv);
		j = 0;
		while (j < argc - 1)
		{
			print_test(buf_info, params, j);
			free(buf_info[j][0]);
			j++;
		}
	}	
	return (0);
}
