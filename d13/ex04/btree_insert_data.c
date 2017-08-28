/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 21:41:27 by vfil              #+#    #+#             */
/*   Updated: 2017/08/12 11:11:01 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item,
		int (*cmpf)(void *, void *))
{
	if (*root == 0)
		*root = btree_create_node(item);
	else
	{
		if (cmpf(item, (*root)->item) < 0)
			btree_insert_data(&(*root)->left, item, cmpf);
		else if (cmp(item, (*root)->item) >= 0)
			btree_insert_data(&(*root)->right, item, cmpf);
	}
}
