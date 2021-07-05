/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 13:21:53 by cchen             #+#    #+#             */
/*   Updated: 2021/05/31 17:37:20 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char *src;
	char dest[4];
	char dest2[] = "What is the answer to life the universe and everything?";
	char dest3[] = "What is the answer to life the universe and everything?";
	char dest4[] = "42";
	char dest5[] = "42";
	char dest6[] = "42";

	src = "Hello World!";
	printf("Source: %s,\ncopying into empty dest...\n", src);
	printf("output: %s\n", ft_strncpy(dest, src, 12));
	printf("dest after: %s\n", dest);

	printf("\ncopying 42, with n = 2 into dest with string: %s\n", dest2);
	printf("output: %s\n", ft_strncpy(dest2, "42", 2));
	printf("dest2 after: %s\n", dest2);
	printf("expecting: %s\n", "42at is the answer to life the universe and everything?");
	
	printf("\ncopying 42, with n = 4 into dest with string: %s\n", dest3);
	printf("output: %s\n", ft_strncpy(dest3, "42", 4));
	printf("dest3 after: %s\n", dest3);
	printf("expecting: %s\n", "42");

	printf("\ncopying 'is the answer to life the universe and everything', with n = 3 into dest4 that has: %s\n", dest4);
	printf("output: %s\n", ft_strncpy(dest4, "is the answer to life the universe and everything.", 3));
	printf("dest4 after: %s\n", dest4);
	printf("expecting: %s\n", "is 42");
	
	printf("\ncopying 'is the answer to life the universe and everything', with n = 10 into dest5 that has: %s\n", dest5);
	printf("output: %s\n", ft_strncpy(dest5, "is the answer to life the universe and everything.", 10));
	printf("dest5 after: %s\n", dest5);
	printf("expecting: %s\n", "is the ans is the answer to life the universe and everything?");

	printf("\ncopying 'is the answer to life the universe and everything.', with n = 51 into dest6 that has: %s\n", dest6);
	printf("output: %s\n", ft_strncpy(dest6, "is the answer to life the universe and everything.", 51));
	printf("dest5 after: %s\n", dest6);
	printf("expecting: %s\n", "is the ans is the answer to life the universe and everything?");
	return (0);
}
