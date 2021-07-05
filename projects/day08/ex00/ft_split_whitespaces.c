/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 19:33:35 by cchen             #+#    #+#             */
/*   Updated: 2021/06/04 17:38:23 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_separator(char c);
int		ft_wordlength(char *str);
char	*ft_copyword(char *src);
int		ft_wordcount(char *str);

char	**ft_split_whitespaces(char *str)
{
	char	**arr;
	int		words;
	int		wordlength;
	int		index;
	int		skip;

	words = ft_wordcount(str);
	arr = (char **)malloc(sizeof(*arr) * (words + 1));
	index = 0;
	while (index < words)
	{
		while (is_separator(*str))
			++str;
		arr[index++] = ft_copyword(str);
		wordlength = ft_wordlength(str);
		skip = 0;
		while (skip++ < wordlength)
			++str;
	}
	arr[index] = 0;
	return (arr);
}

int		ft_wordcount(char *str)
{
	int count;
	int searching;

	count = 0;
	searching = 1;
	while (*str != '\0')
	{
		if (is_separator(*str) == 0 && searching)
		{
			searching = 0;
			++count;
		}
		else if (is_separator(*str) == 1 && !searching)
			searching = 1;
		++str;
	}
	return (count);
}

char	*ft_copyword(char *src)
{
	int		len;
	int		index;
	char	*word;

	len = ft_wordlength(src);
	word = (char *)malloc(sizeof(*word) * len + 1);
	index = 0;
	while (index < len)
	{
		word[index] = src[index];
		++index;
	}
	word[index] = '\0';
	return (word);
}

int		ft_wordlength(char *str)
{
	int	len;

	len = 0;
	while (is_separator(*str++) == 0)
		len++;
	return (len);
}

int		is_separator(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' || c == '\0') ? 1 : 0;
}
