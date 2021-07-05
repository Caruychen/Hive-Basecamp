/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swilliam <swilliam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 07:23:06 by cchen             #+#    #+#             */
/*   Updated: 2021/06/15 10:46:42 by swilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftbsq.h"

/*
** ft_putstr - Used to print the results of the completed map.
*/

void	ft_putstr(char *str)
{
	while (*str != '\0')
		ft_putchar(*str++);
}
