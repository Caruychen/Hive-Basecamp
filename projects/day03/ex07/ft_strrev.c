/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 10:33:19 by cchen             #+#    #+#             */
/*   Updated: 2021/06/01 10:02:16 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int strlen;

	strlen = 0;
	while (str[strlen] != '\0')
	{
		++strlen;
	}
	return strlen;
}


char	*ft_strrev(char *str)
{
	char	reversed[1000];
	int 	strlen;
	int	pos;

	strlen = ft_strlen(str);
	pos = 0;
	while (pos < strlen)
	{
		reversed[pos] = str[strlen - 1 - pos];
		++pos;
	}
	reversed[pos] = '\0';
	return reversed;
}
