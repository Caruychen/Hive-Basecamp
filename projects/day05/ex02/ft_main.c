/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 09:43:09 by cchen             #+#    #+#             */
/*   Updated: 2021/06/05 11:47:39 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *c);

int	main(void)
{
	char *numbers[29];
	int n;
	
	numbers[0] = "-2147483649";
	numbers[1] = "-2147483648";
	numbers[2] = "-123";
	numbers[3] = "-42";
	numbers[4] = "-2";
	numbers[5] = "-1";
	numbers[6] = "-0";
	numbers[7] = "0";
	numbers[8] = "1";
	numbers[9] = "2";
	numbers[10] = "42";
	numbers[11] = "123";
	numbers[12] = "2147483647";
	numbers[13] = "2147483648";
	numbers[14] = "42 42";
	numbers[15] = " 42 ";
	numbers[16] = "42x";
	numbers[17] = "x42";
	numbers[18] = "one";
	numbers[19] = "--42";
	numbers[20] = "+42";
	numbers[21] = "+-42";
	numbers[22] = "-+42";
	numbers[23] = ".";
	numbers[24] = "\t42";
	numbers[25] = "\nt42";
	numbers[26] = "\v42";
	numbers[27] = "\f42";
	numbers[28] = "\r42";
	n = 0;
	while (n < 29)
	{
		if (n < 2 || (n > 11 && n < 14))
			printf("Testing %s:	atoi: %d,	ft_atoi: %d\n", numbers[n], atoi(numbers[n]), ft_atoi(numbers[n]));
		else
			printf("Testing %s:		atoi: %d,		ft_atoi: %d\n", numbers[n], atoi(numbers[n]), ft_atoi(numbers[n]));
		n++;
	}
	printf("Testing %s:		atoi: %d,		ft_atoi: %d\n", "NULL\0", atoi("\0"), ft_atoi("\0"));
	return (0);
}
