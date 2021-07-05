/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear_all.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 12:14:54 by cchen             #+#    #+#             */
/*   Updated: 2021/06/13 06:37:34 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

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
