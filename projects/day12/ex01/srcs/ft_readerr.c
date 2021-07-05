/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readerr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 15:45:21 by cchen             #+#    #+#             */
/*   Updated: 2021/06/10 16:21:03 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <errno.h>
#include "ft.h"

int	ft_readerr(int fd, int index, char **argv)
{
	if (errno == EBADF)
	{
		ft_putnbr(fd);
		ft_puterr(" Not a valid file descriptor.\n");
	}
	if (errno == EFAULT)
		ft_puterr("Buffer is outside of accessible address space");
	if (errno == EINTR)
		ft_puterr("read() was interrupted by a signal.\n");
	if (errno == EINVAL)
		ft_puterr("Object unsuitable for reading.\n");
	if (errno == EIO)
		ft_puterr("An I/O error occurred.\n");
	if (errno == EISDIR)
	{
		ft_print_names(index, argv);
		ft_puterr("Is a directory.\n");
	}
	return (-1);
}
