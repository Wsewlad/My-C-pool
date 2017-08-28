/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 13:27:32 by vfil              #+#    #+#             */
/*   Updated: 2017/08/10 15:36:38 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_df.h"

void	ft_putstr_fd(int fd, char *str)
{
	write(fd, str, ft_strlen(str));
}