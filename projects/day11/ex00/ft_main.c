/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 08:51:35 by cchen             #+#    #+#             */
/*   Updated: 2021/06/08 09:12:35 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "ft.h"

int	main(void)
{
	t_list	*list;
	char	*test_str;

	test_str = "Hello World!\n";
	list = ft_create_elem(test_str);
	ft_putstr(list->data);
	ft_putstr("Does list->next point to NULL?\n");
	if (list->next == NULL)
		ft_putstr("Yes! Great success!\nYou have freed the people!\n");
	else
		ft_putstr("No, initiating self destruct sequence...\n");
	free(list);
	return (0);
}
