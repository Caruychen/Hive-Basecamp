/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 11:54:45 by cchen             #+#    #+#             */
/*   Updated: 2021/06/08 15:59:04 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

void	ft_putnbr(int nbr);
void	ft_putstr(char *str);
void	ft_putchar(char c);
char	**ft_split_whitespaces(char *str);
void	ft_sort_wordtab(char **tab);

#endif
