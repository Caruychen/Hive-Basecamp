/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_bottom_right.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 17:16:26 by cchen             #+#    #+#             */
/*   Updated: 2021/06/13 18:05:14 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

extern t_list *g_rush_list;

void	ft_check_bottom_right(char c)
{
	if (ft_strcmp("[rush-03]", g_rush_list->data) == 0)
	{
		if (c == 'C')
			ft_list_isolate(&g_rush_list, 0);
		if (c == 'A')
			ft_list_isolate(&g_rush_list, 1);
	}
}
