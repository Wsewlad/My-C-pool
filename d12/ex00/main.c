/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 13:16:42 by vfil              #+#    #+#             */
/*   Updated: 2017/08/10 18:29:46 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_df.h"
#define BUF_SIZE 29

int		main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	if (argc < 2)
	{
		ft_putstr_fd(2, "File name missing.\n");
		return (1);
	}
	if (argc > 2)
	{
		ft_putstr_fd(2, "Too many arguments.\n");
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	while ((ret = read(fd, buf, BUF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		ft_putstr_fd(1, buf);
	}
	if (close(fd) == -1)
		return (1);
	return (0);
}
