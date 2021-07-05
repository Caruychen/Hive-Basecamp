/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 09:49:48 by cchen             #+#    #+#             */
/*   Updated: 2021/06/01 13:46:36 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char *haystack = "The answer to life the universe and everything";
	char *needle = "and";
	char *needle2 = "universe";
	char *needle3 = "i";
	char *needle4 = " ";
	char *needle5 = "z";
	char *needle6 = "";

	printf("Searching for '%s' in %s:\n", needle, haystack);
	printf("Found using    strstr: %s\n",    strstr(haystack, needle));
	printf("Found using ft_strstr: %s\n\n", ft_strstr(haystack, needle));
	printf("Searching for '%s' in %s:\n", needle2, haystack);
	printf("Found using    strstr: %s\n",    strstr(haystack, needle2));
	printf("Found using ft_strstr: %s\n\n", ft_strstr(haystack, needle2));
	printf("Searching for '%s' in %s:\n", needle3, haystack);
	printf("Found using    strstr: %s\n",    strstr(haystack, needle3));
	printf("Found using ft_strstr: %s\n\n", ft_strstr(haystack, needle3));
	printf("Searching for '%s' in %s:\n", needle4, haystack);
	printf("Found using    strstr: %s\n",    strstr(haystack, needle4));
	printf("Found using ft_strstr: %s\n\n", ft_strstr(haystack, needle4));
	printf("Searching for '%s' in %s:\n", needle5, haystack);
	printf("Found using    strstr: %s\n",    strstr(haystack, needle5));
	printf("Found using ft_strstr: %s\n\n", ft_strstr(haystack, needle5));
	printf("Searching for '%s' in %s:\n", needle6, haystack);
	printf("Found using    strstr: %s\n",    strstr(haystack, needle6));
	printf("Found using ft_strstr: %s\n\n", ft_strstr(haystack, needle6));
	return (0);
}
