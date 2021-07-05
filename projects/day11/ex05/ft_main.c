/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 11:33:00 by cchen             #+#    #+#             */
/*   Updated: 2021/06/09 11:58:12 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "ft.h"

int	main(int argc, char **argv)
{
	t_list *list;

	list = ft_list_push_params(argc, argv);
	ft_putstr("Printing arguments:\n");
	while (list)
	{
		ft_putstr(list->data);
		list = list->next;
		ft_putstr("\n");
	}
	return (0);
}
