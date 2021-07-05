/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 18:42:48 by cchen             #+#    #+#             */
/*   Updated: 2021/06/08 19:23:45 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(t_list *begin_list, void *data)
{
	t_list	*list;

	list = (t_list *)malloc(sizeof(*list));
	if (list)
	{
		list->data = data;
		list->next = begin_list;
	}
	return (list);
}

void	ft_list_push_front(t_list **begin_list, void *data)
{
	*begin_list = ft_create_elem(*begin_list, data);
}
