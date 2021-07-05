/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 12:23:14 by cchen             #+#    #+#             */
/*   Updated: 2021/06/15 13:26:39 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftbsq.h"
#include "ftstructs.h"

t_map	g_map;
int		g_result = 0;
int		g_max_line;
int		g_max_el;

/*
** ft_do_bsq - If input maps return an error during initialisation
**			   they are reset.
**			 - if input map initialisation is OK:
**			 - Input maps are sent to be solved, printed and reset.
*/

void	ft_do_bsq(int fd)
{
	if (ft_map_initialise(fd) == -1)
	{
		ft_map_reset();
		return ;
	}
	ft_map_solve();
	ft_map_print();
	ft_map_reset();
}

/*
** ft_process_files - Pre-processes the file being sent as standard input to
**					  ensure it is able to be read.
**					- initiates ft_do_bsq, if file open is OK
**					- If input file is unable to be read, an error is returned.
*/

int		ft_process_files(char *file)
{
	int	fd;

	fd = open(file, O_RDONLY);
	if (fd == -1)
		return (ft_do_error());
	ft_do_bsq(fd);
	if (close(fd) == -1)
		return (ft_do_error());
	return (0);
}

/*
** main - Receives the standard input files for processing.
*/

int		main(int argc, char **argv)
{
	int		arg_index;

	arg_index = 1;
	if (argc == 1)
		ft_do_bsq(0);
	else if (argc > 1)
	{
		while (arg_index < argc)
			ft_process_files(argv[arg_index++]);
	}
	return (0);
}
