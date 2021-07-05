/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 16:10:28 by cchen             #+#    #+#             */
/*   Updated: 2021/06/09 17:58:31 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/stat.h>
#include <fcntl.h>
#include "ft.h"

#define BUF_SIZE 42

int	is_valid_args(int argc)
{
	if (argc == 1)
	{
		ft_puterr("File name missing.\n");
		return (0);
	}
	if (argc > 2)
	{
		ft_puterr("Too many arguments.\n");
		return (0);
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	if (!is_valid_args(argc))
		return (1);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		ft_puterr("open() error\n");
		return (1);
	}
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	if (close(fd) == -1)
	{
		ft_puterr("close() error\n");
		return (1);
	}
	return (0);
}
