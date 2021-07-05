/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 10:27:36 by cchen             #+#    #+#             */
/*   Updated: 2021/06/01 08:33:30 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str);

int		main(void)
{
	char	*str;
	char	*str2;
	char	*str3;
	char	*reversed_str;
	char	*reversed_str2;
	char	*reversed_str3;

	str = "a";
	str2 = "ab";
	str3 = "abcde";
	reversed_str = ft_strrev(str);
	reversed_str2 = ft_strrev(str2);
	reversed_str3 = ft_strrev(str3);
	printf("%s => %s\n", str, reversed_str);
	printf("%s => %s\n", str2, reversed_str2);
	printf("%s => %s\n", str3, reversed_str3);
	return (0);
}
