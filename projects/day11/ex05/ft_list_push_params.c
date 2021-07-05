/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 11:20:32 by cchen             #+#    #+#             */
/*   Updated: 2021/06/09 13:17:24 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*list;
	t_list	*new_link;

	list = NULL;
	while (ac - 1 > 0)
	{
		new_link = ft_create_elem(av[ac - 1]);
		new_link->next = list;
		list = new_link;
		--ac;
	}
	return (list);
}
