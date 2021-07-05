/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_initialise.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swilliam <swilliam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 15:31:24 by cchen             #+#    #+#             */
/*   Updated: 2021/06/15 13:10:55 by swilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftbsq.h"
#include "ftstructs.h"

extern t_map	g_map;
int				g_line_tracker = 0;
int				g_width_tracker = 0;
int				g_empty_boxes = 0;
int				g_is_first_line = 1;
int				g_is_reading_meta = 1;

/*
** ft_reset_globals - Resets each individual global variables used
**					  to track map data in preparation for next input.
*/

void	ft_reset_globals(void)
{
	g_line_tracker = 0;
	g_width_tracker = 0;
	g_empty_boxes = 0;
	g_is_first_line = 1;
	g_is_reading_meta = 1;
}

/*
** ft_map_initialise - Initialises/resets map-reading data to ensure each
**					   input map is read from fresh state.
*/

int		ft_map_initialise(int fd)
{
	int		result;
	t_list	*map_list;

	map_list = NULL;
	g_map.width = 0;
	result = ft_map_read(fd, &map_list);
	ft_list_clear_all(&map_list);
	ft_reset_globals();
	return (result);
}
