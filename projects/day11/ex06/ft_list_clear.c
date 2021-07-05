/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 12:14:54 by cchen             #+#    #+#             */
/*   Updated: 2021/06/09 12:40:46 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *temp;

	while (*begin_list)
	{
		temp = *begin_list;
		*begin_list = (*begin_list)->next;
		free(temp);
	}
}
