/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 11:06:54 by cchen             #+#    #+#             */
/*   Updated: 2021/06/03 16:25:45 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_arglen(char *str);
void	ft_construct(char *str, int argc, char **argv);

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		index;
	int		length;

	index = 1;
	length = 0;
	while (index < argc)
		length += ft_arglen(argv[index++]);
	str = (char *)malloc(sizeof(*str) * length + argc);
	ft_construct(str, argc, argv);
	return (str);
}

int		ft_arglen(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
		index++;
	return (index);
}

void	ft_construct(char *str, int argc, char **argv)
{
	int index;
	int str_index;

	str_index = 0;
	index = 1;
	while (index < argc)
	{
		while (*argv[index] != '\0')
			str[str_index++] = *argv[index]++;
		str[str_index++] = '\n';
		index++;
	}
	str[str_index] = '\0';
}
