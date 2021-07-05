/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 09:32:53 by cchen             #+#    #+#             */
/*   Updated: 2021/06/09 13:46:45 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "ft.h"

int	main(void)
{
	t_list *list;
	t_list *list_to_print;

	list = NULL;
	ft_list_push_front(&list, "1");
	ft_list_push_front(&list, "2");
	ft_list_push_front(&list, "3");
	ft_list_push_front(&list, "4");
	list_to_print = list;
	while (list_to_print)
	{
		ft_putstr(list_to_print->data);
		list_to_print = list_to_print->next;
	}
	ft_putstr("\n");
	ft_putstr("First list element: ");
	ft_putstr(list->data);
	ft_list_clear(&list);
	ft_putstr("\nChecking that list now points to Null...\n");
	if (list == NULL)
		ft_putstr("SUCCESS!\n");
	else
		ft_putstr("Fail...\n");
	return (0);
}
