/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 15:50:28 by cchen             #+#    #+#             */
/*   Updated: 2021/06/13 20:12:09 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		ft_putnbr(eval_expr(argv[1]));
		ft_putchar('\n');
	}
	return (0);
}
