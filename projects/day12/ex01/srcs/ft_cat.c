/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 09:24:00 by cchen             #+#    #+#             */
/*   Updated: 2021/06/10 18:52:42 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include "ft.h"

#define BUF_SIZE 8192

int		ft_read(int fd, int index, char **argv)
{
	int		ret;
	char	buf[BUF_SIZE + 1];

	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		if (ret == -1)
			return (ft_readerr(fd, index, argv));
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	return (0);
}

int		ft_cat_files(int index, char **argv)
{
	int fd;

	fd = open(argv[index], O_RDONLY);
	if (fd == -1)
		return (ft_openerr(index, argv));
	if (ft_read(fd, index, argv) == -1)
	{
		if (close(fd) == -1)
			return (ft_closerr(fd));
		return (-1);
	}
	if (close(fd) == -1)
		return (ft_closerr(fd));
	return (1);
}

int		main(int argc, char **argv)
{
	int		arg_index;

	arg_index = 1;
	if (argc == 1)
	{
		if (ft_read(0, arg_index, argv) == -1)
			return (1);
	}
	else if (argc > 1)
	{
		while (arg_index < argc)
		{
			ft_cat_files(arg_index, argv);
			++arg_index;
		}
	}
	return (0);
}
