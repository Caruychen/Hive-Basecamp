/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 13:50:24 by cchen             #+#    #+#             */
/*   Updated: 2021/06/09 14:21:57 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	while (nbr > 0)
	{
		if (!begin_list)
			break ;
		begin_list = begin_list->next;
		--nbr;
	}
	return (begin_list);
}
