/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 17:32:41 by cchen             #+#    #+#             */
/*   Updated: 2021/06/12 11:35:53 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include "ft.h"

int	main(void)
{
	t_btree	*node;
	t_btree *target;
	int		(*cmpf)(void *, void*);
	void	(*applyf)(void *);

	node = NULL;
	cmpf = (int (*)(void *, void*))ft_strcmp;
	applyf = (void (*)(void *))ft_putstr;
	btree_insert_data(&node, "3", cmpf);
	btree_insert_data(&node, "2", cmpf);
	btree_insert_data(&node, "1", cmpf);
	btree_insert_data(&node, "2", cmpf);
	btree_insert_data(&node, "4", cmpf);
	btree_insert_data(&node, "3", cmpf);
	btree_insert_data(&node, "5", cmpf);
	ft_putstr("Created a tree (infix traversal) 1223345: ");
	btree_apply_infix(node, applyf);
	ft_putstr("\n");
	ft_putstr("Testing search item:\n");
	target = btree_search_item(node, "2", cmpf);
	ft_putstr("Ruling out post-fix traversal, should find node with item 2, and 1 to left:\n");
	if (cmpf((target->left)->item, "1") == 0)
		ft_putstr("Success\n");
	ft_putstr("Ruling out pre-fix traversal, checking with tree of: ");
	node->left->left->item = "2";
	btree_apply_infix(node, applyf);
	target = btree_search_item(node, "2", cmpf);
	if (target->left == NULL)
		ft_putstr("\nSuccess\n");
	return (0);
}
