/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 21:45:46 by vfil              #+#    #+#             */
/*   Updated: 2017/08/10 12:25:31 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

unsigned int	ft_list_size(t_list *begin_list)
{
	t_list			*crawler;
	unsigned int	i;

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

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list			*crawler;
	unsigned int	i;

	if (!begin_list || ft_list_size(begin_list) < nbr)
		return (0);
	i = 0;
	crawler = begin_list;
	while (i < nbr)
	{
		if (!crawler)
			return (0);
		crawler = crawler->next;
		i++;
	}
	return (crawler);
}
