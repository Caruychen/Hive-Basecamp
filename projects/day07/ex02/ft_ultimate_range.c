/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 05:47:43 by cchen             #+#    #+#             */
/*   Updated: 2021/06/03 10:21:44 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	unsigned int	index;
	unsigned int	rangesize;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	rangesize = max - min;
	*range = (int *)malloc(sizeof(**range) * rangesize);
	index = 0;
	while (index < rangesize)
	{
		(*range)[index++] = min++;
	}
	return (index);
}
