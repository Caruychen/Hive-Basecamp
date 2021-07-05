/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 18:42:48 by cchen             #+#    #+#             */
/*   Updated: 2021/06/09 12:59:15 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *new_link;

	if (*begin_list == NULL)
	{
		*begin_list = ft_create_elem(data);
	}
	else
	{
		new_link = ft_create_elem(data);
		new_link->next = *begin_list;
		*begin_list = new_link;
	}
}
