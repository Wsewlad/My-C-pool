/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 17:52:35 by vfil              #+#    #+#             */
/*   Updated: 2017/08/09 20:40:12 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	t_list	*crawler;
	int		i;

	if (!begin_list)
		return (0);
	crawler = begin_list;
	i = 0;
	while (crawler)
	{
		crawler = crawler->next;
		i++;
	}
	return (i);
}
