/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 14:35:28 by vfil              #+#    #+#             */
/*   Updated: 2017/08/10 11:20:54 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *list;

	if (!*begin_list)
	{
		*begin_list = ft_create_elem(data);
		return ;
	}
	list = *begin_list;
	while (list->next)
	{
		list = list->next;
	}
	list->next = ft_create_elem(data);
}
