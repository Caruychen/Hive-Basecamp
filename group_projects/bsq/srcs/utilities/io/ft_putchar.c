/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swilliam <swilliam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 07:16:18 by cchen             #+#    #+#             */
/*   Updated: 2021/06/15 10:45:25 by swilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftbsq.h"

/*
** ft_putchar - Used to place a singular character.
*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
