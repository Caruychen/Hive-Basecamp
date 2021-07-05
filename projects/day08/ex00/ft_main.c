/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 19:23:13 by cchen             #+#    #+#             */
/*   Updated: 2021/06/04 17:41:05 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**ft_split_whitespaces(char *str);
void	ft_putstr(char *str);
void	ft_putchar(char c);

int		main(void)
{
	char	*str = "What is the answer   	to life,\n the universe and everything?";
	char	**arr;
	int		index;

	arr = ft_split_whitespaces(str);
	index = 0;
	while (arr[index] != 0)
	{
		ft_putstr(arr[index++]);
		ft_putchar('\n');
	}
}
