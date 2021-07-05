/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_top_right.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 17:06:28 by cchen             #+#    #+#             */
/*   Updated: 2021/06/13 17:59:49 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

extern t_list	*g_rush_list;

void			ft_check_top_right(char c)
{
	if (!g_rush_list)
		return ;
	if (ft_strcmp("[rush-00]", g_rush_list->data) == 0)
	{
		if (c != 'o')
			ft_list_clear_all(&g_rush_list);
	}
	if (ft_strcmp("[rush-01]", g_rush_list->data) == 0)
	{
		if (c != '\\')
			ft_list_clear_all(&g_rush_list);
	}
	if (ft_strcmp("[rush-02]", g_rush_list->data) == 0)
	{
		if (c == 'A')
			ft_list_isolate(&g_rush_list, 0);
		if (c == 'C')
			ft_list_clear_to(&g_rush_list, 1);
	}
}
