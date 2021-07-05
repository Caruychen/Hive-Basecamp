/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 18:40:19 by cchen             #+#    #+#             */
/*   Updated: 2021/06/03 16:03:32 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putnbr(int nb);

int		*ft_range(int min, int max)
{
	int				*range;
	unsigned int	index;
	unsigned int	rangesize;

	if (min >= max || min < -2147483648 || max > 2147483647)
		return ((void *)0);
	rangesize = max - min;
	range = (int *)malloc(sizeof(*range) * rangesize);
	index = 0;
	while (index < rangesize)
	{
		range[index] = min++;
		index++;
	}
	return (range);
}
