/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 05:33:42 by cchen             #+#    #+#             */
/*   Updated: 2021/06/09 05:45:12 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	while (begin_list != NULL)
	{
		if (!begin_list->next)
			return (begin_list);
		begin_list = begin_list->next;
	}
	return (begin_list);
}
