/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 06:11:19 by cchen             #+#    #+#             */
/*   Updated: 2021/05/29 13:40:05 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
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
