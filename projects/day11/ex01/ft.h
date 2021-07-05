/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 09:08:22 by cchen             #+#    #+#             */
/*   Updated: 2021/06/09 19:47:35 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <stdlib.h>
# include "ft_list.h"

void	ft_putstr(char *str);
void	ft_list_push_back(t_list **begin_list, void *data);

#endif
