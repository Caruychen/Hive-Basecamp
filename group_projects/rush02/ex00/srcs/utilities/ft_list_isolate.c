/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_isolate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 07:22:55 by cchen             #+#    #+#             */
/*   Updated: 2021/06/13 08:44:42 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_list	*ft_list_isolate(t_list **g_rush_list, unsigned int location)
{
	t_list *temp;

	temp = ft_list_at(*g_rush_list, location);
	ft_list_clear_to(g_rush_list, location);
	ft_list_clear_all(&(temp->next));
	temp->next = NULL;
	return (temp);
}
