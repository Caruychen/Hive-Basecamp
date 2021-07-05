/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 09:27:07 by cchen             #+#    #+#             */
/*   Updated: 2021/06/13 15:34:27 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*temp;

	if (!*begin_list)
	{
		*begin_list = ft_list_create_elem(data);
		return ;
	}
	temp = *begin_list;
	while (temp->next)
		temp = temp->next;
	temp->next = ft_list_create_elem(data);
}
