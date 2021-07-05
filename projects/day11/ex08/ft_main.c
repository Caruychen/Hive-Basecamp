/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 14:47:51 by cchen             #+#    #+#             */
/*   Updated: 2021/06/09 14:52:23 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "ft.h"

void	ft_print_links(t_list *begin_list)
{
	while (begin_list)
	{
		ft_putstr(begin_list->data);
		ft_putstr(", ");
		begin_list = begin_list->next;
	}
	ft_putstr("\n");
}

int		main(void)
{
	t_list *list;

	list = NULL;
	ft_list_push_front(&list, "3");
	ft_list_push_front(&list, "2");
	ft_list_push_front(&list, "1");
	ft_list_push_front(&list, "0");
	ft_putstr("Original linked lists consists of 4 elements:\n");
	ft_print_links(list);
	ft_list_reverse(&list);
	ft_putstr("Printing reversed list:\n");
	ft_print_links(list);
	return (0);
}
