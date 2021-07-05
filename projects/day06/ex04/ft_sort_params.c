/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 12:46:15 by cchen             #+#    #+#             */
/*   Updated: 2021/06/02 15:07:01 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_putargs(char **argv, int index);
void	ft_sortargs(int argc, char **argv);
void	ft_swapargs(char **s1, char **s2);
int		ft_strcmp(char *s1, char *s2);

int		main(int argc, char **argv)
{
	int index;

	index = 1;
	if (argc > 1)
	{
		ft_sortargs(argc, argv);
		while (index < argc)
			ft_putargs(argv, index++);
	}
	return (0);
}

void	ft_sortargs(int argc, char **argv)
{
	int		index;

	if (argc == 1)
		return ;
	index = 1;
	while (index < argc - 1)
	{
		if (ft_strcmp(argv[index], argv[index + 1]) > 0)
		{
			ft_swapargs(&argv[index], &argv[index + 1]);
		}
		index++;
	}
	ft_sortargs(argc - 1, argv);
}

void	ft_swapargs(char **s1, char **s2)
{
	char *temp;

	temp = *s2;
	*s2 = *s1;
	*s1 = temp;
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0' && *s2 == '\0')
			return (0);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_putargs(char **argv, int index)
{
	while (*argv[index] != '\0')
		ft_putchar(*argv[index]++);
	ft_putchar('\n');
}
