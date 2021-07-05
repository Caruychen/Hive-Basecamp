/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 19:30:13 by cchen             #+#    #+#             */
/*   Updated: 2021/06/09 19:40:50 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "ft.h"

int	main(void)
{
	t_list	*list;

	list = NULL;
	ft_list_push_front(&list, "1");
	ft_list_push_front(&list, "2");
	ft_list_push_front(&list, "3");
	ft_list_push_front(&list, "4");
	ft_putstr("Testing ft_list_foreach with ft_putstr\n");
	ft_list_foreach(list, (void (*)(void *)) &ft_putstr);
	ft_putstr("\n");
	return (0);
}
