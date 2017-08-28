/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_df.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 13:19:37 by vfil              #+#    #+#             */
/*   Updated: 2017/08/11 09:42:43 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DF_H
# define FT_DF_H

# include <unistd.h>
# include <stdio.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <errno.h>

int		ft_strlen(char *str);
void	ft_putchar_fd(int fd, char c);
void	ft_putstr_fd(int fd, char *str);
void	ft_err_loop(char *buf);
void	ft_print_error(char *buf);
void	ft_write_it(char *buf, int ret);
void	ft_print_dir(char *buf);

#endif
