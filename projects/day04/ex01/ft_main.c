/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 17:04:14 by cchen             #+#    #+#             */
/*   Updated: 2021/05/28 17:40:24 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	main(void)
{
	int base;
	int factorial;

	base = 5;
	factorial = ft_recursive_factorial(base);
	printf("Base: %d, Factorial: %d\n", base, factorial);
	base = 3;
	factorial = ft_recursive_factorial(base);
	printf("Base: %d, Factorial: %d\n", base, factorial);
	base = 1;
	factorial = ft_recursive_factorial(base);
	printf("Base: %d, Factorial: %d\n", base, factorial);
	base = 0;
	factorial = ft_recursive_factorial(base);
	printf("Base: %d, Factorial: %d\n", base, factorial);
	base = -1;
	factorial = ft_recursive_factorial(base);
	printf("Base: %d, Factorial: %d\n", base, factorial);
	return (0);
}
