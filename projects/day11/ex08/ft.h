/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 14:44:24 by cchen             #+#    #+#             */
/*   Updated: 2021/06/09 19:59:23 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

void	ft_putstr(char *str);
void	ft_putnbr(int nbr);
void	ft_list_push_front(t_list **begin_list, void *data);
void	ft_list_reverse(t_list **begin_list);

#endif
