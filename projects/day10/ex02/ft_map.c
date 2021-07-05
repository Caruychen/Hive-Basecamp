/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 13:24:23 by cchen             #+#    #+#             */
/*   Updated: 2021/06/07 18:26:04 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*result;
	int	index;

	result = (int *)malloc(sizeof(*result) * length);
	if (!result)
		return (NULL);
	index = 0;
	while (index < length)
	{
		result[index] = f(tab[index]);
		++index;
	}
	return (result);
}
