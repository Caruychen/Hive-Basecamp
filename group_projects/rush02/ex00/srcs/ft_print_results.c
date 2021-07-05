/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_results.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 07:41:20 by cchen             #+#    #+#             */
/*   Updated: 2021/06/13 18:32:48 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

extern t_list	*g_rush_list;
extern int		g_width;
extern int		g_height;

void	ft_print_results(void)
{
	t_list *temp;

	if (!g_rush_list)
		ft_putstr("None");
	while (g_rush_list)
	{
		temp = g_rush_list;
		ft_putstr(g_rush_list->data);
		ft_putstr(" [");
		ft_putnbr(g_width);
		ft_putstr("] [");
		ft_putnbr(g_height);
		ft_putstr("]");
		if (g_rush_list->next)
			ft_putstr(" || ");
		g_rush_list = g_rush_list->next;
		free(temp);
	}
	ft_putchar('\n');
}
