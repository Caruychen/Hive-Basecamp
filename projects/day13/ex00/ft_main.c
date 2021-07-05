/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 06:50:03 by cchen             #+#    #+#             */
/*   Updated: 2021/06/11 07:04:07 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include "ft.h"

int	main(void)
{
	t_btree	*node;

	node = btree_create_node("42");
	ft_putstr("Checking node item data, expect 42: ");
	ft_putstr(node->item);
	ft_putstr("\n");
	ft_putstr("Checking that left, and right equal 0:\n");
	if (!node->left && !node->right)
		ft_putstr("SUCCESS!\n");
	else
		ft_putstr("Error: One of the left or right nodes not 0\n");
	return (0);
}
