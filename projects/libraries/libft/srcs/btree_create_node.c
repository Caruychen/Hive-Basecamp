/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 06:40:23 by cchen             #+#    #+#             */
/*   Updated: 2021/06/11 16:34:34 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_btree	*btree_create_node(void *item)
{
	t_btree *node;

	node = (t_btree*)malloc(sizeof(*node));
	if (node)
	{
		node->left = 0;
		node->right = 0;
		node->item = item;
	}
	return (node);
}
