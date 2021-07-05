/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 17:54:53 by cchen             #+#    #+#             */
/*   Updated: 2021/06/08 14:31:44 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int index;

	index = 0;
	while (index < length - 1)
	{
		if (f(tab[index], tab[index + 1]) > 0)
			return (0);
		++index;
	}
	return (1);
}
