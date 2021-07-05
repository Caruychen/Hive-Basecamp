/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 04:27:04 by cchen             #+#    #+#             */
/*   Updated: 2021/05/29 04:57:12 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index);

int	main(void)
{
	int n;
	int fib;

	n = 0;
	while (n < 15)
	{
		fib = ft_fibonacci(n);
		printf("n = %d, fib = %d\n", n, fib);
		++n;
	}
	return (0);
}
