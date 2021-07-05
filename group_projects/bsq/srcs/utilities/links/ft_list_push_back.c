/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swilliam <swilliam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 09:27:07 by cchen             #+#    #+#             */
/*   Updated: 2021/06/15 11:24:24 by swilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftbsq.h"
#include "ftstructs.h"

/*
** ft_list_push_back - Pushes an element to the back of the list.
**					 - Used when reading the first line of the unsolved map.
**					 - Called within ft_map_read.c
*/

void	ft_list_push_back(t_list **begin_list, char c)
{
	t_list	*temp;

	if (!*begin_list)
	{
		*begin_list = ft_list_create_elem(c);
		return ;
	}
	temp = *begin_list;
	while (temp->next)
		temp = temp->next;
	temp->next = ft_list_create_elem(c);
}
