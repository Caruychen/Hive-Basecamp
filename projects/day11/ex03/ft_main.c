/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 09:32:53 by cchen             #+#    #+#             */
/*   Updated: 2021/06/09 11:11:08 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "ft.h"

int		main(void)
{
	t_list *list;

	list = NULL;
	ft_list_push_front(&list, "1");
	ft_list_push_front(&list, "2");
	ft_list_push_front(&list, "3");
	ft_list_push_front(&list, "4");
	ft_putstr("Number of elements:\n");
	ft_putnbr(ft_list_size(list));
	ft_putstr("\n");
	ft_putstr("Printing list elements:\n");
	while (list)
	{
		ft_putstr(list->data);
		list = list->next;
		ft_putstr(" ");
	}
	ft_putstr("\n");
	return (0);
}
