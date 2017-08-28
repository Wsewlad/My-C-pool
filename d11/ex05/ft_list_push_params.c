/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 19:25:41 by vfil              #+#    #+#             */
/*   Updated: 2017/08/09 20:40:56 by vfil             ###   ########.fr       */
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

t_list	*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*list;

	if (ac == 1)
		return (0);
	list = ft_create_elem(av[1]);
	i = 2;
	while (i < ac)
	{
		ft_list_push_front(&list, av[i]);
		i++;
	}
	return (list);
}
