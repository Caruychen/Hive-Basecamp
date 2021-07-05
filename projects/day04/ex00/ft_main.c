/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 17:04:14 by cchen             #+#    #+#             */
/*   Updated: 2021/05/29 03:43:19 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	main(void)
{
	int base;
	int factorial;

	base = 5;
	factorial = ft_iterative_factorial(base);
	printf("Base: %d, Factorial: %d\n", base, factorial);
	base = 3;
	factorial = ft_iterative_factorial(base);
	printf("Base: %d, Factorial: %d\n", base, factorial);
	base = 1;
	factorial = ft_iterative_factorial(base);
	printf("Base: %d, Factorial: %d\n", base, factorial);
	base = 0;
	factorial = ft_iterative_factorial(base);
	printf("Base: %d, Factorial: %d\n", base, factorial);
	base = -1;
	factorial = ft_iterative_factorial(base);
	printf("Base: %d, Factorial: %d\n", base, factorial);
	base = 100;
	factorial = ft_iterative_factorial(base);
	printf("Base: %d, Factorial: %d\n", base, factorial);
	return (0);
}
