/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_usage.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 19:26:16 by vfil              #+#    #+#             */
/*   Updated: 2017/08/08 21:36:49 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_usage(int a, int b)
{
	a = b;
	write(1, "error : only [ - + * / % ] are accepted.\n", 41);
	return (0);
}