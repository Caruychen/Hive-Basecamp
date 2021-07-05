/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 19:23:13 by cchen             #+#    #+#             */
/*   Updated: 2021/06/08 16:47:48 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		main(void)
{
	char *str = "what is the answer   	to life,\n the universe and everything?";
	char **arr;
	int index;

	arr = ft_split_whitespaces(str);
	ft_putstr("Array before sorting:\n");
	index = 0;
	while(arr[index] != 0)
	{
		ft_putstr(arr[index++]);
		ft_putchar('\n');
	}
	ft_sort_wordtab(arr);
	ft_putstr("Array after sorting:\n");
	index = 0;
	while (arr[index] != 0)
	{
		ft_putstr(arr[index++]);
		ft_putchar('\n');
	}
	return (0);
}
