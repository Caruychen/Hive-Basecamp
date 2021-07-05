/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 17:32:41 by cchen             #+#    #+#             */
/*   Updated: 2021/06/12 11:30:50 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include "ft.h"

int	main(void)
{
	t_btree	*node;
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
	ft_putstr("Expect 1223345: ");
	btree_apply_infix(node, applyf);
	ft_putstr("\n");
	return (0);
}
