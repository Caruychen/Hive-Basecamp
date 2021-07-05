/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_linked_list.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 19:39:09 by cchen             #+#    #+#             */
/*   Updated: 2021/06/13 07:38:13 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_list_initialise(t_list **list)
{
	ft_list_push_back(list, "0");
	ft_list_push_back(list, "[rush-00]");
	ft_list_push_back(list, "[rush-01]");
	ft_list_push_back(list, "[rush-02]");
	ft_list_push_back(list, "[rush-03]");
	ft_list_push_back(list, "[rush-04]");
}
