/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 13:00:24 by cchen             #+#    #+#             */
/*   Updated: 2021/06/01 18:38:34 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char *to_find_copy;
	char *str_copy;

	to_find_copy = to_find;
	if (*to_find == '\0')
		return (str);
	while (*str++ != '\0')
	{
		if (*str != *to_find_copy)
			continue;
		str_copy = str;
		while (1)
		{
			if (*to_find_copy == '\0')
				return (str);
			if (*str_copy++ != *to_find_copy++)
				break ;
		}
		to_find_copy = to_find;
	}
	return (0);
}
