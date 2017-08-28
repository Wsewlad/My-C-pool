/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 07:37:21 by vfil              #+#    #+#             */
/*   Updated: 2017/08/04 09:14:01 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOR
# define FT_DOOR

# include <unistd.h>

# define	CLOSE			0
# define	OPEN			1
# define 	TRUE			1
# define 	EXIT_SUCCESS	0

typedef struct	s_door
{
	int			state;
}				t_door;

# include <stdlib.h>
# include "ft_door.h"

void	ft_putstr(char *str);
void	close_door(char *door);
void	open_door(char *door);
int		is_door_open(char *door);
int		is_door_close(char *door);
#endif
