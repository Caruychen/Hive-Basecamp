/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 05:10:37 by cchen             #+#    #+#             */
/*   Updated: 2021/05/28 05:25:21 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 3;
	b = 2;
	ft_div_mod(a, b, &div, &mod);
	printf("a = %d, b = %d, div = %d, mod = %d\n", a, b, div, mod);
	a = 10;
	b = 5;
	ft_div_mod(a, b, &div, &mod);
	printf("a = %d, b = %d, div = %d, mod = %d\n", a, b, div, mod);
	a = 5;
	b = -2;
	ft_div_mod(a, b, &div, &mod);
	printf("a = %d, b = %d, div = %d, mod = %d\n", a, b, div, mod);
	a = -5;
	b = 2;
	ft_div_mod(a, b, &div, &mod);
	printf("a = %d, b = %d, div = %d, mod = %d\n", a, b, div, mod);
	return (0);
}
