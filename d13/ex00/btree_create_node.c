/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 19:34:28 by vfil              #+#    #+#             */
/*   Updated: 2017/08/12 11:08:08 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree *elem;

	elem = malloc(sizeof(t_btree));
	if (elem)
	{
		elem->item = item;
		elem->left = NULL;
		elem->right = NULL;
	}
	return (elem);
}
