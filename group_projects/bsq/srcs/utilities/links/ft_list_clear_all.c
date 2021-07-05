/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear_all.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swilliam <swilliam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 12:14:54 by cchen             #+#    #+#             */
/*   Updated: 2021/06/15 13:13:03 by swilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftbsq.h"

/*
** ft_list_clear_all - Resets the existing list once map has been initialised.
**					 - Called within ft_map_initialise.c
*/

void	ft_list_clear_all(t_list **begin_list)
{
	t_list *temp;

	while (*begin_list)
	{
		temp = *begin_list;
		*begin_list = (*begin_list)->next;
		free(temp);
	}
}
