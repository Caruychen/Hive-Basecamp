/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 15:33:40 by cchen             #+#    #+#             */
/*   Updated: 2021/06/07 15:55:26 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_any(char **tab, int (*f)(char*));

int	ft_is_42(char *str)
{
	if (ft_strcmp(str, "42") == 0)
		return (1);
	return (0);
}	

int	main(void)
{
	char *tab[] = {"What", "is", "the", "answer", "to", "life", "?", "42", 0};

	char *tab2[] = {"What", "is", "the", "answer", "to", "life", "?", "meh", 0};

	ft_putstr("Checking for 42 in first array, expect 1:\n");
	ft_putnbr(ft_any(tab, &ft_is_42));
	ft_putchar('\n');
	ft_putstr("Checking for 42 in second array, expect 0:\n");
	ft_putnbr(ft_any(tab2, &ft_is_42));
	ft_putchar('\n');
	
	return (0);
}
