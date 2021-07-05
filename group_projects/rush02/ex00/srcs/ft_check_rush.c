/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_rush.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 16:58:16 by cchen             #+#    #+#             */
/*   Updated: 2021/06/13 19:36:10 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

extern t_list	*g_rush_list;
extern int		g_width;
extern int		g_height;

int		is_valid_char(char c)
{
	return (c == 'o' || c == '-' || c == '|' ||
			c == '/' || c == '*' || c == '\\' ||
			c == 'A' || c == 'B' || c == 'C' ||
			c == ' ' || c == '\n' || c == '\0');
}

int		is_end_of_line(char *buf)
{
	return (*(buf + 1) == '\n' && *(buf - 1));
}

void	ft_cycle_chars(int is_first_line, char *buf)
{
	while (*buf)
	{
		if (!is_valid_char(*buf))
		{
			ft_list_clear_all(&g_rush_list);
			break ;
		}
		if (is_first_line)
		{
			if (is_end_of_line(buf))
				ft_check_top_right(*buf);
			(*buf == '\n') ? is_first_line = 0 : ++g_width;
		}
		else
		{
			if (is_end_of_line(buf))
				ft_check_bottom_right(*buf);
			if (is_end_of_line(buf) && *(buf - 1) == '\n')
				ft_check_left_boundary(*buf);
		}
		if (*buf == '\n')
			++g_height;
		++buf;
	}
}

void	ft_check_rush(char *buf)
{
	int	is_first_line;

	is_first_line = 1;
	if (g_rush_list && (ft_strcmp("0", g_rush_list->data) == 0))
		ft_check_first_char(&g_rush_list, buf);
	ft_cycle_chars(is_first_line, buf);
}
