/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 03:49:07 by cchen             #+#    #+#             */
/*   Updated: 2021/05/29 04:14:09 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int	main(void)
{
	int nb;
	int power;
	int result;

	nb = 3;
	while (nb > -4)
	{
		power = 3;
		while (power > -3)
		{
			result = ft_iterative_power(nb, power);
			printf("nb = %d, power = %d, result = %d\n", nb, power, result);
			--power;
		}
		printf("\n");
		--nb;
	}
	return (0);
}
