/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_fill_element.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swilliam <swilliam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 04:08:09 by cchen             #+#    #+#             */
/*   Updated: 2021/06/15 13:33:00 by swilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftbsq.h"
#include "ftstructs.h"

extern t_map g_map;

/*
** ft_map_fill_element - Assigns the current location with the corresponding
**						 value (empty(0) / obstacle(1)) as
**						 pre-solving preparation.
**					   - Called within ft_map_fill.c
*/

void	ft_map_fill_element(int line, int el, char c)
{
	if (c == g_map.empty)
		g_map.map[line][el] = 1;
	else if (c == g_map.obstacle)
		g_map.map[line][el] = 0;
	else
		ft_do_error();
}
