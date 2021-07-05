/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_whitespace.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swilliam <swilliam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 14:40:40 by cchen             #+#    #+#             */
/*   Updated: 2021/06/15 10:32:11 by swilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** is_whitespace - Checks if the character is not a valuable
**				   item of the map.
*/

int	is_whitespace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' ||
			c == '\v' || c == '\f' || c == '\r');
}
