/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 17:54:53 by cchen             #+#    #+#             */
/*   Updated: 2021/06/09 09:22:39 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_is_sort(int *tab, int length, int(*f)(int, int));

int	ft_intcmp(int n1, int n2)
{
	return (n1 - n2);
}

int	main(void)
{
	int sorted[] = {0, 1, 2, 3, 5, 10, 24, 42};
	int unsorted[] = {42, 5, 2, 1, 4, 5};
	int reversed[] = {42, 40, 15, 10 ,1, 0};
	int allzero[] = {0, 0, 0, 0, 0, 0};
	int negatives[] = {-124617, -128273};

	ft_putstr("Checking a sorted array, expect 1: ");
	ft_putnbr(ft_is_sort(sorted, 8, &ft_intcmp));
	ft_putchar('\n');
	ft_putstr("Checking an unsorted array, expect 0: ");
	ft_putnbr(ft_is_sort(unsorted, 6, &ft_intcmp));
	ft_putchar('\n');
	ft_putstr("Checking a reversed array, expect 0: ");
	ft_putnbr(ft_is_sort(reversed, 6, &ft_intcmp));
	ft_putchar('\n');
	ft_putstr("Checking an all zero array, expect 1: ");
	ft_putnbr(ft_is_sort(allzero, 6, &ft_intcmp));
	ft_putchar('\n');
	ft_putstr("Checking an array of negatives, expect 0: ");
	ft_putnbr(ft_is_sort(negatives, 2, &ft_intcmp));
	ft_putchar('\n');
	return (0);
}
