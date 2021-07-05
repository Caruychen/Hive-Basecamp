/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 11:28:47 by cchen             #+#    #+#             */
/*   Updated: 2021/06/02 12:28:26 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_putargs(char **argv, int index);

int		main(int argc, char **argv)
{
	int index;

	index = argc - 1;
	if (argc > 1)
	{
		while (index > 0)
			ft_putargs(argv, index--);
	}
	return (0);
}

void	ft_putargs(char **argv, int index)
{
	while (*argv[index] != '\0')
		ft_putchar(*argv[index]++);
	ft_putchar('\n');
}
