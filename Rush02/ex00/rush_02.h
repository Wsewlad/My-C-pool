/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_02.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 15:12:11 by vfil              #+#    #+#             */
/*   Updated: 2017/08/13 22:56:30 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_02_H
# define RUSH_02_H

# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/uio.h>

# define BUF_SIZE	70000

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		*ft_strlen_n(char *str);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strcat(char *dest, char *src);
char	**create_all(int size, int x, int y);
char	*rush00(char *rn, int x, int y);
char	*rush01(char *rn, int x, int y);
char	*rush02(char *rn, int x, int y);
char	*rush03(char *rn, int x, int y);
char	*rush04(char *rn, int x, int y);
void	ft_putnbr(int nb);
void	ft_print_res(int *arr, int x, int y);
void	print_er(void);

#endif
