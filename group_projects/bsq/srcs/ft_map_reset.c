/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_reset.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 17:52:33 by cchen             #+#    #+#             */
/*   Updated: 2021/06/16 15:37:27 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftbsq.h"
#include "ftstructs.h"

extern t_map g_map;

/*
** ft_map_reset - Once a map has been printed and solved, the temporary
**				  values used to store the solving data are reset to 0.
*/

void	ft_map_reset(void)
{
	int	line;

	line = 0;
	if (g_map.map)
	{
		while (line < g_map.lines)
		{
			free(g_map.map[line]);
			g_map.map[line] = NULL;
			++line;
		}
		free(g_map.map);
		g_map.map = NULL;
	}
	g_map.lines = 0;
	g_map.width = 0;
	g_map.empty = 0;
	g_map.obstacle = 0;
	g_map.full = 0;
}
