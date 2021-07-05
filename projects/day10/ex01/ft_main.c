/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 11:22:27 by cchen             #+#    #+#             */
/*   Updated: 2021/06/07 11:39:24 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_foreach(int *tab, int length, void(*f)(int));

int		main(void)
{
	int tab[] = {0, 1, 2, 3, 4};

	ft_foreach(tab, 5, &ft_putnbr);
	ft_putchar('\n');
	return (0);
}
