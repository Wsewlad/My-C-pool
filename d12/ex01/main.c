/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 13:16:42 by vfil              #+#    #+#             */
/*   Updated: 2017/08/10 22:16:35 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_df.h"
#define BUF_SIZE 29

int		main(int argc, char **argv)
{
	int		fd;
	int		ret;
	int		i;
	char	buf[BUF_SIZE + 1];

	i = 1;
	while (argc < 2)
		ft_err_loop(buf);
	while (i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		if (fd == -1)
		{
			ft_print_error(argv[i++]);
			continue;
		}
		while ((ret = read(fd, buf, BUF_SIZE)) > 0)
			ft_write_it(buf, ret);
		if (errno == 21)
			ft_print_dir(argv[i]);
		close(fd);
		i++;
	}
	return (0);
}

void	ft_write_it(char *buf, int ret)
{
	buf[ret] = '\0';
	ft_putstr_fd(1, buf);
}

void	ft_err_loop(char *buf)
{
	int	ret;

	ret = read(1, buf, BUF_SIZE);
	buf[ret] = '\0';
	ft_putstr_fd(2, buf);
}

void	ft_print_error(char *buf)
{
	ft_putstr_fd(2, "ft_cat: ");
	ft_putstr_fd(2, buf);
	ft_putstr_fd(2, ": No such file or directory\n");
}

void	ft_print_dir(char *buf)
{
	ft_putstr_fd(2, "ft_cat: ");
	ft_putstr_fd(2, buf);
	ft_putstr_fd(2, ": Is a directory\n");
}
