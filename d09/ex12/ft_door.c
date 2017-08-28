/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 07:13:01 by vfil              #+#    #+#             */
/*   Updated: 2017/08/04 09:13:40 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_door.h"

void		ft_putstr(char *str)
{
	int i;
	char c;
   
	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
        write(1, &c,, 1);
		i++;
	}
}

void		open_door(char *door)
{
	ft_putstr("Door opening...\n");
	door->state = OPEN;
}

void		close_door(char *door)
{
	ft_putstr("Door closing...\n");
	door->state = CLOSE;
}

int		is_door_open(char *door)
{
	ft_putstr("Door is open ?\n");
	return (door->state = OPEN);
}

int		is_door_close(char *door)
{
	ft_putstr("Door is close ?\n");
	return (door->state = CLOSE);
}
