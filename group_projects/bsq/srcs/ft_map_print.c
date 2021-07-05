/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 19:49:20 by cchen             #+#    #+#             */
/*   Updated: 2021/06/16 18:49:57 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftbsq.h"
#include "ftstructs.h"

extern t_map	g_map;
extern	int		g_result;
extern	int		g_max_line;
extern	int		g_max_el;

/*
** is_in_box - Confirms the confines of the located maximum box
**			   to be used for printing.
*/

int		is_in_box(int line, int el, int min_line, int min_el)
{
	return (line > min_line &&
			el > min_el &&
			line <= g_max_line &&
			el <= g_max_el);
}

/*
** ft_print_element - Used to print each category of element of
**					  the completed map.
*/

void	ft_print_element(int line, int el, int min_line, int min_el)
{
	if (is_in_box(line, el, min_line, min_el))
	{
		ft_putchar(g_map.full);
		return ;
	}
	if (g_map.map[line][el] == 0)
		ft_putchar(g_map.obstacle);
	else
		ft_putchar(g_map.empty);
}

/*
** ft_map_print - Iterates through the map, printing each element
**				  including spaces between (for readability purposes).
*/

void	ft_map_print(void)
{
	int line;
	int	el;
	int	min_line;
	int	min_el;

	min_line = g_max_line - g_result;
	min_el = g_max_el - g_result;
	line = 0;
	while (line < g_map.lines)
	{
		el = 0;
		while (el < g_map.width)
		{
			ft_print_element(line, el, min_line, min_el);
			++el;
		}
		ft_putchar('\n');
		++line;
	}
}
