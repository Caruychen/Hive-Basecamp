/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 05:26:31 by cchen             #+#    #+#             */
/*   Updated: 2021/06/03 16:29:15 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_concat_params(int argc, char **argv);
void	ft_putstr(char *str);

int		main(int argc, char **argv)
{
	char *str;
	
	if (argc < 1)
	{
		printf("Error: minimum 1 argument required\n");
		return (1);
	}
	str = ft_concat_params(argc, argv); 
	ft_putstr(str);
	free(str);
	return (0);
}
