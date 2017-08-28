/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 19:02:33 by vfil              #+#    #+#             */
/*   Updated: 2017/08/09 20:44:40 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list *crawler;

	if (!begin_list)
		return (0);
	crawler = begin_list;
	while (crawler->next)
	{
		crawler = crawler->next;
	}
	return (crawler);
}
