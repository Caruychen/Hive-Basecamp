/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 19:33:35 by cchen             #+#    #+#             */
/*   Updated: 2021/06/08 15:43:02 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_whitespace(char c);
int		ft_countfirstword(char *str);
void	ft_copyword(char *dest, char *src, unsigned int n);

char	**ft_split_whitespaces(char *str)
{
	char **arr;
	char *word;
	unsigned int	len;
	int	index;

	arr = &word;
	index = 0;
	while (*str != '\0')
	{
		if (is_whitespace(*str))
		{
			++str;
			continue;
		}
		len = ft_countfirstword(str);
		word = (char *)malloc(sizeof(**arr) * len + 1);
		ft_copyword(word, str, len);
		arr[index++] = word;
		str += len;
	}
	arr[index] = 0;
	return (arr);
}

void	ft_copyword(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	index = 0;
	while (index < n)
	{
		dest[index] = src[index];
		++index;
	}
	dest[index] = '\0';
}

int		ft_countfirstword(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0' && is_whitespace(str[index]) == 0)
		index++;
	return (index);
}

int		is_whitespace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}
