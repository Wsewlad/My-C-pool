/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 13:02:01 by vfil              #+#    #+#             */
/*   Updated: 2017/08/16 10:04:36 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

# define BUF_SIZE 10000000000

int		*ft_strlen(char *str);
char	***ft_read_flow(void);
char	***ft_read_files(int argc, char **argv);
int		ft_atoi(char *str);
char	*parse_buf(int start, char *buf, char *buf_new);
char	*parse_info(char *info, char *buf);


#endif
