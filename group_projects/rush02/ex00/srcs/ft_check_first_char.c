/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_first_char.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amajer <amajer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 16:49:13 by cchen             #+#    #+#             */
/*   Updated: 2021/06/13 19:07:27 by amajer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_check_first_char(t_list **g_rush_list, char *buf)
{
	t_list	*temp;

	temp = NULL;
	if (*buf == 'o')
		temp = ft_list_isolate(g_rush_list, 1);
	else if (*buf == '/')
		temp = ft_list_isolate(g_rush_list, 2);
	else if (*buf == 'A')
	{
		temp = ft_list_at(*g_rush_list, 3);
		ft_list_clear_to(g_rush_list, 3);
	}
	else
		ft_list_clear_all(g_rush_list);
	*g_rush_list = temp;
}
