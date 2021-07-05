/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 18:30:47 by cchen             #+#    #+#             */
/*   Updated: 2021/06/08 06:14:55 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_op_ptr g_operators[] = {&ft_sum, &ft_subtract,
	&ft_multiply, &ft_divide, &ft_modulus};
char g_symbols[] = {'+', '-', '*', '/', '%'};

int	ft_do_op(int n1, int n2, t_op_ptr f)
{
	return (f(n1, n2));
}

int	ft_find_op(char op_input, int n1, int n2)
{
	int index;

	index = 0;
	while (index < 5)
	{
		if (op_input == g_symbols[index])
		{
			return (ft_do_op(n1, n2, g_operators[index]));
		}
		++index;
	}
	return (0);
}

int	is_valid_div_mod(char c)
{
	if (c == '/')
	{
		ft_putstr("Stop : division by zero\n");
		return (0);
	}
	if (c == '%')
	{
		ft_putstr("Stop : modulo by zero\n");
		return (0);
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int		value1;
	int		value2;

	if (argc != 4)
		return (1);
	value1 = ft_atoi(argv[1]);
	value2 = ft_atoi(argv[3]);
	if (value2 == 0 && !is_valid_div_mod(*argv[2]))
		return (0);
	ft_putnbr(ft_find_op(*argv[2], value1, value2));
	ft_putchar('\n');
	return (0);
}
