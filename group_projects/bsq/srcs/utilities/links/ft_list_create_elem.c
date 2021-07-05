/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_create_elem.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swilliam <swilliam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 08:46:31 by cchen             #+#    #+#             */
/*   Updated: 2021/06/15 11:20:54 by swilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftbsq.h"
#include "ftstructs.h"

/*
** ft_list_create_elem - Creates an element of data where line one of
**						 a read map is temporarily stored until map
**						 initialisation.
*/

t_list	*ft_list_create_elem(char c)
{
	t_list	*list;

	list = (t_list*)malloc(sizeof(*list));
	if (list)
	{
		list->c = c;
		list->next = NULL;
	}
	return (list);
}
