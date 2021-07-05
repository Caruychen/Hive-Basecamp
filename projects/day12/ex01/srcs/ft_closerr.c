/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_closerr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 15:33:14 by cchen             #+#    #+#             */
/*   Updated: 2021/06/10 15:40:11 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <errno.h>
#include "ft.h"

int	ft_closerr(int fd)
{
	if (errno == EBADF)
	{
		ft_putnbr(fd);
		ft_puterr(" Not a valid file descriptor.\n");
	}
	if (errno == EINTR)
	{
		ft_puterr("close() was interrupted by a signal.\n");
	}
	if (errno == EIO)
	{
		ft_puterr("An I/O error occured.");
	}
	return (-1);
}
