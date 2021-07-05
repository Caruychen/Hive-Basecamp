/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 09:26:57 by cchen             #+#    #+#             */
/*   Updated: 2021/06/09 19:45:40 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

typedef	struct s_list	t_list;

struct	s_list
{
	void	*data;
	t_list	*next;
};
t_list	*ft_create_elem(void *data);

#endif
