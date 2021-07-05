/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 17:35:01 by cchen             #+#    #+#             */
/*   Updated: 2021/06/03 15:08:42 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
char	*ft_strdup(char *src);

int	main(void)
{
	char *strptr = "Basecamp is AWESOME";
	char ptrarr[] = "Let me in...pls...";
	char *target1;
	char *target2;

	target1 = ft_strdup(strptr);
	target2 = ft_strdup(ptrarr);
	printf("Source1 at %p = %s\nTarget1 at %p = %s\n", strptr, strptr, target1, target1);
	printf("Source2 at %p = %s\nTarget2 at %p = %s\n", ptrarr, ptrarr, target2, target2);
	return (0);
}
