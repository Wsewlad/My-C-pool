/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 07:22:57 by vfil              #+#    #+#             */
/*   Updated: 2017/08/04 08:43:59 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_door.h"

int		main(void)
{
    t_door      door;

	open_door(&door);
	if (is_door_close(&door))
    	open_door(&door);
	if (is_door_open(&door))
    	close_door(&door);
	if (door.state == OPEN)
		close_door(&door);
	return (EXIT_SUCCESS);
}
