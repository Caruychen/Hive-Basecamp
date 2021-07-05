/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 06:33:15 by cchen             #+#    #+#             */
/*   Updated: 2021/05/27 16:00:47 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_printset(char num1[], char num2[])
{
	ft_putchar(num1[0]);
	ft_putchar(num1[1]);
	ft_putchar(' ');
	ft_putchar(num2[0]);
	ft_putchar(num2[1]);
	ft_putchar(',');
	ft_putchar(' ');
}

void	process_second_nums(char num1[], char num2[], char max)
{
	num2[0] = num1[0];
	num2[1] = num1[1] + 1;
	while (num2[0] <= max)
	{
		while (num2[1] <= max)
		{
			ft_printset(num1, num2);
			++num2[1];
		}
		++num2[0];
		num2[1] = '0';
	}
	++num1[1];
}

void	ft_print_comb2(void)
{
	char num1[2];
	char num2[2];
	char max;

	max = '9';
	num1[0] = '0';
	while (num1[0] <= max)
	{
		num1[1] = '0';
		while (num1[1] <= max)
		{
			process_second_nums(num1, num2, max);
		}
		++num1[0];
	}
}
