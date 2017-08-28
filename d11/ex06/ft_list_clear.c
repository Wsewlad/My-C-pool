/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 20:47:29 by vfil              #+#    #+#             */
/*   Updated: 2017/08/09 22:25:05 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *must_die;

	if (!*begin_list)
		return ;
	must_die = 0;
	while (*begin_list)
	{
		must_die = *begin_list;
		*begin_list = (*begin_list)->next;
		free(must_die);
	}
	free(*begin_list);
}
