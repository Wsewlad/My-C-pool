/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 16:48:03 by vfil              #+#    #+#             */
/*   Updated: 2017/08/09 20:40:22 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *n_elem;

	n_elem = ft_create_elem(data);
	if (*begin_list == 0)
		*begin_list = n_elem;
	else
	{
		n_elem->next = *begin_list;
		*begin_list = n_elem;
	}
}
