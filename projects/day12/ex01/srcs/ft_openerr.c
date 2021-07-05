/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_openerr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 14:20:48 by cchen             #+#    #+#             */
/*   Updated: 2021/06/10 16:18:34 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <errno.h>
#include "ft.h"

int		ft_openerr(int index, char **argv)
{
	if (errno == ENOENT)
	{
		ft_print_names(index, argv);
		ft_puterr("No such file or directory\n");
	}
	if (errno == EACCES)
	{
		ft_print_names(index, argv);
		ft_puterr("Permission denied\n");
	}
	if (errno == EISDIR)
	{
		ft_print_names(index, argv);
		ft_puterr("Is a directory\n");
	}
	return (-1);
}
