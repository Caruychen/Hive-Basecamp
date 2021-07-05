/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 03:57:48 by cchen             #+#    #+#             */
/*   Updated: 2021/05/29 04:11:21 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int result;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	result = nb;
	while (power > 1)
	{
		result *= nb;
		--power;
	}
	return (result);
}
