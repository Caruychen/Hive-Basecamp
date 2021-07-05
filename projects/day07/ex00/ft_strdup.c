/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 17:53:41 by cchen             #+#    #+#             */
/*   Updated: 2021/06/03 15:09:22 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *src);

char	*ft_strdup(char *src)
{
	char	*duplicate;
	int		index;

	duplicate = (char *)malloc(sizeof(*src) * ft_strlen(src) + 1);
	index = 0;
	while (src[index] != '\0')
	{
		duplicate[index] = src[index];
		index++;
	}
	duplicate[index] = '\0';
	return (duplicate);
}

int		ft_strlen(char *src)
{
	int len;

	len = 0;
	while (src[len] != '\0')
	{
		++len;
	}
	return (len);
}
