/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 15:03:37 by cchen             #+#    #+#             */
/*   Updated: 2021/05/29 17:17:07 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(long int nb)
{
	long int start;
	long int end;
	long int mid;

	start = 0;
	end = nb;
	while (start <= end)
	{
		mid = (start + end) / 2;
		if (mid * mid == nb)
			return (mid);
		else if (mid * mid < nb)
			start = mid + 1;
		else
			end = mid - 1;
	}
	return (0);
}

int	find_sqrt(long int nb)
{
	int sqrt;

	if (nb <= 0)
		return (0);
	sqrt = ft_sqrt(nb);
	while (sqrt == 0)
	{
		sqrt = ft_sqrt(nb++);
	}
	return (sqrt);
}

int	ft_is_prime(int nb)
{
	int factor;
	int sqrt;

	if (nb <= 1)
		return (0);
	sqrt = find_sqrt(nb);
	factor = 2;
	while (factor < sqrt)
	{
		if (nb % factor == 0)
			return (0);
		factor++;
	}
	return (1);
}
