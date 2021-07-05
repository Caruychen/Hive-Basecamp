/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 13:26:07 by cchen             #+#    #+#             */
/*   Updated: 2021/06/07 13:42:15 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	*ft_map(int *tab, int length, int (*f)(int));

int	ft_times_five(int nbr)
{
	return (nbr * 5);
}

int	main(void)
{
	int	tab[] = {0, 1, 2, 3, 4};
	int	*result;
	int	index;

	result = ft_map(tab, 5, &ft_times_five);
	index = 0;
	ft_putstr("Printing original array:\n");
	while (index < 5)
	{
		ft_putnbr(tab[index++]);
		ft_putchar(' ');
	}
	ft_putchar('\n');

	ft_putstr("Printing resulting array * 5:\n");
	index = 0;
	while (index < 5)
	{
		ft_putnbr(result[index++]);
		ft_putchar(' ');
	}
	ft_putchar('\n');
	free(result);
	return (0);
}
