/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 17:47:50 by cchen             #+#    #+#             */
/*   Updated: 2021/06/01 18:41:05 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int		main(void)
{
	char *str1;
	char *str2;

	str1 = "abcde";
	str2 = "ABCDE";	
	printf("Comparing: %s -- %s, strcmp: %d, ft_strcmp: %d\n", str1, str2, strcmp(str1, str2), ft_strcmp(str1, str2));
	str1 = "";
	str2 = "";
	printf("Comparing: %s -- %s, strcmp: %d, ft_strcmp: %d\n", str1, str2, strcmp(str1, str2), ft_strcmp(str1, str2));
	str1 = "42";
	str2 = "42";
	printf("Comparing: %s -- %s, strcmp: %d, ft_strcmp: %d\n", str1, str2, strcmp(str1, str2), ft_strcmp(str1, str2));
	str1 = "42";
	str2 = "43";
	printf("Comparing: %s -- %s, strcmp: %d, ft_strcmp: %d\n", str1, str2, strcmp(str1, str2), ft_strcmp(str1, str2));
	str1 = "42";
	str2 = "41";
	printf("Comparing: %s -- %s, strcmp: %d, ft_strcmp: %d\n", str1, str2, strcmp(str1, str2), ft_strcmp(str1, str2));
	str1 = "a";
	str2 = "aa";
	printf("Comparing: %s -- %s, strcmp: %d, ft_strcmp: %d\n", str1, str2, strcmp(str1, str2), ft_strcmp(str1, str2));
	str1 = "aa";
	str2 = "a";
	printf("Comparing: %s -- %s, strcmp: %d, ft_strcmp: %d\n", str1, str2, strcmp(str1, str2), ft_strcmp(str1, str2));
	return (0);
}
