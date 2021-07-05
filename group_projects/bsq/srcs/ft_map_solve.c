/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_solve.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 05:35:44 by cchen             #+#    #+#             */
/*   Updated: 2021/06/15 13:45:13 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftbsq.h"
#include "ftstructs.h"

extern	t_map	g_map;
extern	int		g_result;
extern	int		g_max_line;
extern	int		g_max_el;

/*
** is_left_upper_boundary - Used to identify the top-left corner of the map.
*/

int		is_left_upper_boundary(int line, int el)
{
	return (line == 0 || el == 0);
}

/*
** ft_min_neighbours - Used to check whether the current square meets the
**					   minimum requirements to be a valid square.
**					 - Finds value of the three spaces above and behind
**					   current location.
*/

int		ft_min_neighbours(int line, int el)
{
	int	min;

	min = g_map.map[line - 1][el - 1];
	if (min > g_map.map[line - 1][el])
		min = g_map.map[line - 1][el];
	if (min > g_map.map[line][el - 1])
		min = g_map.map[line][el - 1];
	return (min);
}

/*
** ft_map_solve - Iterates through map coordinates and locates potential
**				  squares.
**				- If a potential square is larger than the previously found
**				  possibility, the new one is assigned as the result.
**				- The maximum coordinates of the largest square are stored.
*/

void	ft_map_solve(void)
{
	int	line;
	int	el;

	g_result = 0;
	line = 0;
	while (line < g_map.lines)
	{
		el = 0;
		while (el < g_map.width)
		{
			if (!is_left_upper_boundary(line, el))
			{
				if (g_map.map[line][el] > 0)
					g_map.map[line][el] += ft_min_neighbours(line, el);
			}
			if (g_map.map[line][el] > g_result)
			{
				g_result = g_map.map[line][el];
				g_max_line = line;
				g_max_el = el;
			}
			++el;
		}
		++line;
	}
}
