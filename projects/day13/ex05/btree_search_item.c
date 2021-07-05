/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 19:37:31 by cchen             #+#    #+#             */
/*   Updated: 2021/06/11 20:42:06 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void *, void *))
{
	void	*result;

	result = NULL;
	if (!root)
		return (result);
	if (root->left)
	{
		result = btree_search_item(root->left, data_ref, cmpf);
		if (result)
			return (result);
	}
	if (cmpf(data_ref, root->item) == 0)
		return (root);
	if (!result)
	{
		if (root->right)
			result = btree_search_item(root->right, data_ref, cmpf);
	}
	return (result);
}
