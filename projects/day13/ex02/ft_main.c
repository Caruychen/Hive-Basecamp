/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 07:49:38 by cchen             #+#    #+#             */
/*   Updated: 2021/06/11 19:17:06 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include "ft.h"

void	ft_putstr(char *str)
{
	char c;

	while (*str)
	{
		c = *str;
		write(1, &c, 1);
		++str;
	}
}

int		main(void)
{
	t_btree	*node1;
	t_btree	*node2;
	t_btree	*node3;
	t_btree	*node4;
	t_btree	*node5;
	t_btree *test;
	void	(*applyf)(void *);

	node1 = btree_create_node("1");
	node2 = btree_create_node("2");
	node3 = btree_create_node("3");
	node4 = btree_create_node("4");
	node5 = btree_create_node("5");
	node1->left = node2;
	node1->right = node3;
	node2->left = node4;
	node2->right = node5;
	ft_putstr("Expect 42513: ");
	applyf = (void (*)(void *))ft_putstr;
	btree_apply_infix(node1, applyf);
	test = NULL;
	ft_putstr("\n");
	ft_putstr("Testing with null:\n");
	btree_apply_infix(test, applyf);
	return (0);
}
