/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_fill.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swilliam <swilliam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 16:07:30 by cchen             #+#    #+#             */
/*   Updated: 2021/06/15 13:20:30 by swilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftbsq.h"
#include "ftstructs.h"

extern t_map g_map;

/*
** ft_map_fill - Iterates through pre-solved map, placing each
**				 individual element (empty/obstacle) via the
**				 ft_map_fill_element function.
*/

void	ft_map_fill(t_list *map_list)
{
	int		el;
	int		line;

	el = 0;
	line = 0;
	while (map_list)
	{
		if (el == g_map.width)
		{
			el = 0;
			++line;
		}
		ft_map_fill_element(line, el++, map_list->c);
		map_list = map_list->next;
	}
}
