/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 08:46:31 by cchen             #+#    #+#             */
/*   Updated: 2021/06/13 15:34:14 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_list	*ft_list_create_elem(void *data)
{
	t_list	*list;

	list = (t_list*)malloc(sizeof(*list));
	if (list)
	{
		list->data = data;
		list->next = NULL;
	}
	return (list);
}
