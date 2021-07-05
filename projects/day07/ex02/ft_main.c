/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 05:26:31 by cchen             #+#    #+#             */
/*   Updated: 2021/06/03 10:50:46 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max);
int		ft_atoi(char *str);
void	ft_putnbr(int nb);
void	ft_putchar(char c);
void	ft_putrange(int size, int *range);

int		main(int argc, char **argv)
{
	int min;
	int max;
	int *range;
	int size;

	if (argc < 3 || argc > 3)
	{
		printf("Error: Min, Max required as arguments\n");
		return (1);
	}
	min = ft_atoi(argv[1]);
	max = ft_atoi(argv[2]);
	size = ft_ultimate_range(&range, min, max);
	if (size == 0)
	{
		printf("Returned 0\n");
		printf("Checking if range points to null...%s\n", (char *)range);
		return (0);
	}
	ft_putrange(size, range);
	free(range);
	return (0);
}

void	ft_putrange(int size, int *range)
{
	int index;

	index = 0;
	while (index < size)
	{
		ft_putnbr(range[index++]);
		ft_putchar(',');
		ft_putchar(' ');
	}
	ft_putchar('\n');
}
