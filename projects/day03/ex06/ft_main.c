/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 06:19:25 by cchen             #+#    #+#             */
/*   Updated: 2021/05/28 07:31:28 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	*str;
	int		len;

	str = "hello world";
	len = ft_strlen(str);
	printf("length of %s is: %d\n", str, len);
	return (0);
}
