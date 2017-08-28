/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_flow.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 16:31:21 by vfil              #+#    #+#             */
/*   Updated: 2017/08/16 10:05:48 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include <stdio.h>

char	*parse_info(char *info, char *buf)
{
	int	i;

	i = 0;
	while (buf[i] != '\n')
	{
		info[i] = buf[i];
		i++;
	}
	info[i] = '\0';
	return (info);
}

char	*parse_buf(int start, char *buf, char *buf_new)
{
	int	i;

	i = 0;
	while (buf[start + 1] != '\0')
	{
		buf_new[i] = buf[start + 1];
		start++;
		i++;
	}
	buf_new[i] = '\0';
	return (buf_new);
}

char	***ft_read_flow(void)
{
	char	c;
	char	*buf;
	char	***buf_info;
	int		i;
	int		*icn;

	i = 0;
	buf_info = (char***)malloc(sizeof(char**) * 1);
	buf_info[i] = (char**)malloc(sizeof(char*) * 3);
	buf = (char*)malloc(BUF_SIZE);
	while (read(0, &c, 1))
		buf[i++] = c;
	buf[i] = '\0';
	i = 0;
	icn = ft_strlen(buf);
	buf_info[i][0] = (char*)malloc(icn[1]);
	buf_info[i][0] = parse_buf(icn[0], buf, buf_info[i][0]);
	buf_info[i][1] = (char*)malloc(icn[0]);
	buf_info[i][1] = parse_info(buf_info[i][1], buf);
	buf_info[i][2] = 0;
	free(buf);
	return (buf_info);
}
