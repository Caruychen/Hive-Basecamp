/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swilliam <swilliam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 15:42:54 by cchen             #+#    #+#             */
/*   Updated: 2021/06/15 11:26:23 by swilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftbsq.h"

/*
** ft_do_error - Standard error ouput if a failure is met during map
**				 reading functionality.
*/

int	ft_do_error(void)
{
	ft_puterr("map error\n");
	return (-1);
}
