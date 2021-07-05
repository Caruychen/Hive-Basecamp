/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 18:31:09 by cchen             #+#    #+#             */
/*   Updated: 2021/06/02 19:47:44 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		*ft_range(int min, int max);
void	ft_putnbr(int nb);
void	ft_putchar(char c);
int	ft_atoi(char *str);

int		main(int argc, char **argv)
{
	int min;
	int max;
	int *range;
	unsigned int index;
	unsigned int rangesize;
	
	if (argc < 3 || argc > 3)
	{
		printf("Error: Min, Max required as arguments\n");
		return (1);
	}
	min = ft_atoi(argv[1]);
	max = ft_atoi(argv[2]);
	range = ft_range(min, max);
	if (range == 0)
	{
		printf("Returned NULL\n");
		return (0);
	}
	index = 0;
	rangesize = max - min;
	while (index < rangesize)
	{
		ft_putnbr(range[index++]);
		ft_putchar(',');
		ft_putchar(' ');
	}
	ft_putchar('\n');
	return (0);
}
