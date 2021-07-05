/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_read.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 20:24:06 by cchen             #+#    #+#             */
/*   Updated: 2021/06/15 13:33:58 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftbsq.h"
#include "ftstructs.h"

extern t_map	g_map;
extern int		g_line_tracker;
extern int		g_width_tracker;
extern int		g_empty_boxes;
extern int		g_is_first_line;
extern int		g_is_reading_meta;

/*
** ft_handle_meta - Reads metadata to determine how many lines are used in map.
**				  - If no metadata exists in map struct yet, we begin reading
**					it. Once the metadata being read reaches a new line,
**					finish reading meta data, and continue with reading
**					map elements.
*/

int		ft_handle_meta(char c)
{
	int result;

	result = 0;
	if (c == '\n')
		g_is_reading_meta = 0;
	else
		result = ft_load_meta(c);
	return (result);
}

/*
** ft_begin_map_array - Handles pre-processing of the unsolved map.
*/

void	ft_begin_map_array(t_list *map_list)
{
	ft_map_malloc();
	ft_map_fill(map_list);
}

/*
** ft_handle_elements - If data being read is on the first line of the
**						input map, we push the element to the back of
**						the list.
**					  - For other lines, each element added is handled
**						below it's first-line variant. Added directly
**						to array.
*/

void	ft_handle_elements(char c, t_list **map_list)
{
	if (g_is_first_line)
	{
		++g_map.width;
		ft_list_push_back(map_list, c);
	}
	else
		ft_map_fill_element(g_line_tracker, g_width_tracker, c);
	++g_width_tracker;
}

/*
** ft_handle_map_input - Checks each element individually to ensure it is
**						 valid to be placed within the unsolved map.
**					   - Triggers the map array initialisation at the end of
**						 of the first line with ft_begin_map_array,
**						 then fills the array with data using the
**						 ft_handle_elements.
*/

int		ft_handle_map_input(char c, t_list **map_list)
{
	if (c != g_map.empty && c != g_map.obstacle && c != '\n')
		return (ft_do_error());
	if (c == g_map.empty)
		++g_empty_boxes;
	if (c != '\n')
	{
		ft_handle_elements(c, map_list);
		return (0);
	}
	if (g_is_first_line)
	{
		g_is_first_line = 0;
		ft_begin_map_array(*map_list);
	}
	if (g_width_tracker != g_map.width)
		return (ft_do_error());
	g_width_tracker = 0;
	++g_line_tracker;
	return (0);
}

/*
** ft_map_read - Reads and processes map metadata and elements,
**				 then sends the results to their corresponding function
**				 for handling.
*/

int		ft_map_read(int fd, t_list **map_list)
{
	int		ret;
	char	buf[1];

	while ((ret = read(fd, buf, 1)))
	{
		if (ret == -1)
			return (ft_do_error());
		if (g_is_reading_meta)
		{
			if (ft_handle_meta(*buf) == -1)
				return (-1);
		}
		else
		{
			if (ft_handle_map_input(*buf, map_list) == -1)
				return (-1);
		}
	}
	if (g_line_tracker != g_map.lines || g_empty_boxes == 0)
		return (ft_do_error());
	return (0);
}
