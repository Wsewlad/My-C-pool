/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_files.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 19:01:39 by vfil              #+#    #+#             */
/*   Updated: 2017/08/16 11:42:51 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	***aplly_buf(char ***buf_info, char *buf, int *icn, int *ijfd)
{
	buf_info[ijfd[0]][0] = (char*)malloc(icn[1]);
	buf_info[ijfd[0]][0] = parse_buf(icn[0], buf, buf_info[ijfd[0]][0]);
	buf_info[ijfd[0]][1] = (char*)malloc(icn[0]);
	buf_info[ijfd[0]][1] = parse_info(buf_info[ijfd[0]][1], buf);
	buf_info[ijfd[0]][2] = 0;
	return (buf_info);
}

char	***ft_read_files(int argc, char **argv)
{
	char	c;
	char	*buf;
	char	***buf_info;
	int		ijfd[3];
	int		*icn;

	ijfd[0] = 0;
	buf_info = (char***)malloc(sizeof(char**) * argc);
	while (ijfd[0] < argc - 1)
	{
		buf_info[ijfd[0]] = (char**)malloc(sizeof(char*) * 3);
		ijfd[2] = open(argv[ijfd[0] + 1], O_RDONLY);
		buf = (char*)malloc(BUF_SIZE);
		ijfd[1] = 0;
		while (read(ijfd[2], &c, 1))
			buf[ijfd[1]++] = c;
		buf[ijfd[1]] = '\0';
		ijfd[1] = 0;
		icn = ft_strlen(buf);
		buf_info = aplly_buf(buf_info, buf, icn, ijfd);
		free(buf);
		close(ijfd[2]);
		ijfd[0]++;
	}
	return (buf_info);
}
