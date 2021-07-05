/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 13:53:13 by cchen             #+#    #+#             */
/*   Updated: 2021/06/09 14:24:56 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "ft.h"

int	main(void)
{
	t_list	*list;
	t_list	*list_to_print;

	list = NULL;
	ft_list_push_front(&list, "3");
	ft_list_push_front(&list, "2");
	ft_list_push_front(&list, "1");
	ft_list_push_front(&list, "0");
	list_to_print = list;
	ft_putstr("Testing with a linked list consisting of: ");
	while (list_to_print)
	{
		ft_putstr(list_to_print->data);
		ft_putstr(", ");
		list_to_print = list_to_print->next;
	}
	ft_putstr("\n");
	ft_putstr("Accessing second element index[1]...\n");
	ft_putstr(ft_list_at(list, 1)->data);
	ft_putstr("\n");
	ft_putstr("Accessing beyond range...expect NULL\n");
	ft_putstr((ft_list_at(list, 5) == NULL) ? "Found NULL, success!\n" : "Error, no null\n");
	return (0);
}
