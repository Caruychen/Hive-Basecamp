/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 11:41:44 by cchen             #+#    #+#             */
/*   Updated: 2021/06/08 18:24:02 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0' && *s2 == '\0')
			return (0);
		++s1;
		++s2;
	}
	return (*s1 - *s2);
}

int		ft_is_sort(char **tab, int (*f)(char *, char *))
{
	while (*tab && *(tab + 1))
	{
		if (f(*tab, *(tab + 1)) > 0)
			return (0);
		++tab;
	}
	return (1);
}

void	ft_swapstr(char **s1, char **s2)
{
	char *temp;

	temp = *s2;
	*s2 = *s1;
	*s1 = temp;
}

void	ft_sort_wordtab(char **tab)
{
	int index;

	if (ft_is_sort(tab, &ft_strcmp))
		return ;
	index = 0;
	while (tab[index])
	{
		if (tab[index + 1] == 0)
			break ;
		if (ft_strcmp(tab[index], tab[index + 1]) > 0)
			ft_swapstr(&tab[index], &tab[index + 1]);
		++index;
	}
	ft_sort_wordtab(tab);
}
