/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_malloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swilliam <swilliam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 15:54:14 by cchen             #+#    #+#             */
/*   Updated: 2021/06/15 12:56:55 by swilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftbsq.h"
#include "ftstructs.h"

extern t_map g_map;

/*
** ft_map_addlines - Allocates heap memory of each line of the map array.
*/

int	ft_map_addlines(void)
{
	int	line;

	line = 0;
	while (line < g_map.lines)
	{
		g_map.map[line] = (int*)malloc(sizeof(**g_map.map) * g_map.width);
		if (!g_map.map[line++])
			return (ft_do_error());
	}
	return (0);
}

/*
** ft_map_malloc - Allocates heap memory the general size of the map.
*/

int	ft_map_malloc(void)
{
	g_map.map = (int**)malloc(sizeof(*g_map.map) * g_map.lines);
	if (!g_map.map)
		return (ft_do_error());
	return (ft_map_addlines());
}
