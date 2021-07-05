/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 09:08:22 by cchen             #+#    #+#             */
/*   Updated: 2021/06/09 14:08:28 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <stdlib.h>

void	ft_putstr(char *str);
void	ft_putnbr(int nb);
void	ft_list_push_front(t_list **begin_list, void *data);
t_list	*ft_list_at(t_list *begin_list, unsigned int nbr);

#endif
