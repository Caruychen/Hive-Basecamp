/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 19:29:11 by cchen             #+#    #+#             */
/*   Updated: 2021/06/09 19:41:14 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <stdlib.h>

void	ft_list_foreach(t_list *begin_list, void (*f)(void *));
void	ft_list_push_front(t_list **begin_list, void *data);
void	ft_putstr(char *str);

#endif
