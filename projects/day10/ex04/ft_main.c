/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 16:11:43 by cchen             #+#    #+#             */
/*   Updated: 2021/06/07 17:48:56 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_count_if(char **tab, int (*f)(char*));

int	ft_is_42(char *str)
{
	if (ft_strcmp(str, "42") == 0)
		return (1);
	return (0);
}	

int	main(void)
{
	char *tab[] = {"42", "0", "1", "4", "2", 0};
	char *tab2[] = {"", "42", "42", " ", "42", "hello", 0};

	ft_putstr("Checking against first array, expect 1:\n");
	ft_putnbr(ft_count_if(tab, &ft_is_42));
	ft_putchar('\n');
	ft_putstr("Checking against second array, expect 3:\n");
	ft_putnbr(ft_count_if(tab2, &ft_is_42));
	ft_putchar('\n');

	return (0);
}
