/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 09:32:53 by cchen             #+#    #+#             */
/*   Updated: 2021/06/08 18:41:31 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "ft.h"

int	main(void)
{
	t_list *list;

	list = NULL;
	ft_list_push_front(&list, "1");
	ft_list_push_front(&list, "2");
	ft_list_push_front(&list, "3");
	ft_list_push_front(&list, "4");
	while (list)
	{
		ft_putstr(list->data);
		list = list->next;
	}
	ft_putstr("\n");
	return (0);
}
