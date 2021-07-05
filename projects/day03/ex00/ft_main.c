/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 17:45:23 by cchen             #+#    #+#             */
/*   Updated: 2021/05/27 17:57:22 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr);

int		main(void)
{
	int nbr;

	nbr = 0;
	printf("Value of nbr before: %d\n", nbr);
	ft_ft(&nbr);
	printf("Value of nbr after: %d\n", nbr);
}
