/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 06:51:00 by cchen             #+#    #+#             */
/*   Updated: 2021/06/11 20:08:52 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>

void	ft_putstr(char *str);
void	ft_strcmp(char *s1, char *s2);
void	btree_insert_data(t_btree **root, void *item,
		int (*cmpf)(void *, void *));
void	btree_apply_infix(t_btree *root, void (*applyf)(void *));
void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void *, void *));

#endif
