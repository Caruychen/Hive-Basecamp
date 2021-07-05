/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 06:19:25 by cchen             #+#    #+#             */
/*   Updated: 2021/05/31 10:14:52 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb);
void	ft_putchar(char c);

int		main(void)
{
	ft_putnbr(-2147483648);
	ft_putchar('\n');
	ft_putnbr(-2147483647);
	ft_putchar('\n');
	ft_putnbr(-123);
	ft_putchar('\n');
	ft_putnbr(-42);
	ft_putchar('\n');
	ft_putnbr(-1);
	ft_putchar('\n');
	ft_putnbr(0);
	ft_putchar('\n');
	ft_putnbr(1);
	ft_putchar('\n');
	ft_putnbr(42);
	ft_putchar('\n');
	ft_putnbr(123);
	ft_putchar('\n');
	ft_putnbr(2147483647);
	ft_putchar('\n');
	return (0);
}
