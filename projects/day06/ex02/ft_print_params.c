/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 10:16:43 by cchen             #+#    #+#             */
/*   Updated: 2021/06/03 08:12:33 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_putargs(char **argv, int index);

int		main(int argc, char **argv)
{
	int index;

	index = 1;
	if (argc > 1)
	{
		while (index < argc)
		{
			ft_putargs(argv, index++);
		}
	}
	return (0);
}

void	ft_putargs(char **argv, int index)
{
	while (*argv[index] != '\0')
		ft_putchar(*argv[index]++);
	ft_putchar('\n');
}