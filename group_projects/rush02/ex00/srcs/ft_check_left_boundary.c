/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_left_boundary.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 17:21:05 by cchen             #+#    #+#             */
/*   Updated: 2021/06/13 17:57:37 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

extern t_list *g_rush_list;

void	ft_check_left_boundary(char c)
{
	t_list *temp;

	temp = NULL;
	if (ft_strcmp("[rush-02]", g_rush_list->data) == 0)
	{
		if (c == 'A')
			ft_list_isolate(&g_rush_list, 1);
		if (c == 'C')
		{
			temp = g_rush_list->next;
			g_rush_list->next = temp->next;
			free(temp);
		}
	}
}
