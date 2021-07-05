/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 06:05:56 by cchen             #+#    #+#             */
/*   Updated: 2021/05/28 06:17:23 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int		main(void)
{
	int a;
	int b;

	a = 3;
	b = 2;
	printf("Before: a = %d, b = %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("After: a = %d, b = %d\n", a, b);
	return (0);
}
