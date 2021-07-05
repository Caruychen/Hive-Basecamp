/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 12:34:03 by cchen             #+#    #+#             */
/*   Updated: 2021/06/01 19:36:01 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char *src;
	char dest[40];
	char dest2[] = "What is the answer to life the universe and everything?"; // if using char *dest2, copying will cause a segmentation fault.
	char dest3[] = "42"; // if using char *dest3 = "42", copying will cause a segmentation fault.

	src = "Hello World!";
	printf("Source: %s,\ncopying into empty dest...\n", src);
	printf("output: %s\n", ft_strcpy(dest, src));
	printf("dest after: %s\n", dest);

	printf("\ncopying into dest with string: %s\n", dest2);
	printf("output: %s\n", ft_strcpy(dest2, "42"));
	printf("dest2 after: %s\n", dest2);

	printf("\ncopying into dest containing '%s' that is shorter than src\n", dest3);
	printf("Size of Array dest3 Before copy: %lu\n", sizeof(dest3));
	printf("output: %s\n", ft_strcpy(dest3, "is the answer to life the universe and everything."));
	printf("dest3 after: %s\n", dest3);
	printf("Size of After dest3 after copy: %lu\n\n", sizeof(dest3));
	printf("The strcpy function has written past the size of the dest3 array, the size of which doesnt change. We have written into the rest of the program data, which can be anything. This is called buffer overflow.\n");
	printf("Printf will continue to read beyond the end of dest3 array, until it finds a null terminator somewhere\n");
	printf("Let's see what happens when we print from the address of dest3 for 100 characters\n\n");
	int x = 0;
	char null = '\n';
	while (x < 100)
	{
		write(1,(dest3 + x),1);
		if(*(dest3 + x) == '\0')
		{
			write(1,&null,1);
		}
		x++;
	}
	return (0);
}
