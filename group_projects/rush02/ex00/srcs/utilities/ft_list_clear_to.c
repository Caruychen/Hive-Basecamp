/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear_to.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 06:38:52 by cchen             #+#    #+#             */
/*   Updated: 2021/06/13 06:40:13 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_list_clear_to(t_list **begin_list, unsigned int nb)
{
	t_list *temp;

	while (*begin_list && nb > 0)
	{
		temp = *begin_list;
		*begin_list = (*begin_list)->next;
		free(temp);
		--nb;
	}
}
