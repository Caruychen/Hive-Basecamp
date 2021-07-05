/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 07:21:35 by cchen             #+#    #+#             */
/*   Updated: 2021/06/06 09:31:45 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	match_star(char *s1, char *s2);

int	match(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s2 == '*')
			return (match_star(s1, ++s2));
		if (*s1 != *s2)
			return (0);
		s1++;
		s2++;
	}
	return (1);
}

int	match_star(char *s1, char *s2)
{
	int index;

	index = 0;
	if (s2[index] == '\0')
		return (1);
	if (s1[index] == '\0')
		return (0);
	if (s1[index] != s2[index])
	{
		return (match_star(++s1, s2));
	}
	while (s1[index] != '\0' && s2[index] != '\0')
	{
		if (s1[index] != s2[index])
		{
			return (match_star(s1 + index, s2));
		}
		++index;
	}
	return (1);
}
