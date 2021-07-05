/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 09:08:22 by cchen             #+#    #+#             */
/*   Updated: 2021/06/09 19:51:34 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

void	ft_putstr(char *str);
void	ft_putnbr(int nb);
void	ft_list_push_front(t_list **begin_list, void *data);
int		ft_list_size(t_list *begin_list);

#endif
