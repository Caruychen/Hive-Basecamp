/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylikarp <jylikarp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 14:18:37 by jylikarp          #+#    #+#             */
/*   Updated: 2021/05/30 17:25:10 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_topbottom(int x);
void	ft_middle(int x);

void	rush(int x, int y)
{
	int row;

	if (x > 0 && y > 0)
	{
		row = 0;
		while (row < y)
		{
			if (row == 0 || row == y - 1)
				ft_topbottom(x);
			else
				ft_middle(x);
			ft_putchar('\n');
			row++;
		}
	}
}

void	ft_topbottom(int x)
{
	int column;

	column = 0;
	while (column < x)
	{
		if (column == 0)
			ft_putchar('A');
		else if (column == x - 1)
			ft_putchar('C');
		else
			ft_putchar('B');
		column++;
	}
}

void	ft_middle(int x)
{
	int column;

	column = 0;
	while (column < x)
	{
		if ((column == 0) || (column == x - 1))
			ft_putchar('B');
		else
			ft_putchar(' ');
		column++;
	}
}
