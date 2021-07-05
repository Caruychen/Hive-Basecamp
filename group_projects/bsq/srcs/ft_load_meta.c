/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_load_meta.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 14:45:45 by cchen             #+#    #+#             */
/*   Updated: 2021/06/15 13:37:55 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftbsq.h"
#include "ftstructs.h"

extern t_map g_map;

/*
** ft_init_lines - Checks the input metadata of how many lines will
**				   be created.
**				 - If metadata indicated 0 lines being used, an error
**				   is returned.
*/

int		ft_init_lines(char c)
{
	if (is_numeric(c))
	{
		if (c == '0')
			return (ft_do_error());
		g_map.lines = c - '0';
	}
	else
		return (ft_do_error());
	return (0);
}

/*
** ft_load_characteristics - Once number of lines is known, we assign the
**							 map characteristics (obstacles and empty spaces).
**							 to their respective category.
**						   - g.map.full represents the characters where the
**							 largest box is located.
*/

void	ft_load_characteristics(char c)
{
	if (!g_map.empty)
		g_map.empty = c;
	else if (!g_map.obstacle)
		g_map.obstacle = c;
	else
		g_map.full = c;
}

/*
** ft_load_meta - Loads metadata character-by-character.
**				- If number of lines has not been identified via metadata,
**				  then we have yet to read meta data, so begins by
**				  storing the number of lines.
**				- otherwise we begin loading the map characteristics.
*/

int		ft_load_meta(char c)
{
	if (!g_map.lines)
	{
		if (ft_init_lines(c) == -1)
			return (-1);
	}
	else
	{
		if (is_numeric(c))
		{
			g_map.lines = g_map.lines * 10 + (c - '0');
			return (0);
		}
		else
			ft_load_characteristics(c);
	}
	return (0);
}
