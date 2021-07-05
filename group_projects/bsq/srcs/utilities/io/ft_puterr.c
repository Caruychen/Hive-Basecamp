/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puterr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swilliam <swilliam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 16:39:54 by cchen             #+#    #+#             */
/*   Updated: 2021/06/15 13:13:17 by swilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftbsq.h"

/*
** ft_puterr - Used to write error message, created in ft_do_error.c.
*/

void	ft_puterr(char *str)
{
	char c;

	while (*str)
	{
		c = *str++;
		write(2, &c, 1);
	}
}
