/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftstructs.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swilliam <swilliam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 13:16:44 by cchen             #+#    #+#             */
/*   Updated: 2021/06/15 14:37:27 by swilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTSTRUCTS_H
# define FTSTRUCTS_H

typedef struct	s_list
{
	struct s_list	*next;
	char			c;
}				t_list;

typedef struct	s_map
{
	int		lines;
	int		width;
	char	empty;
	char	obstacle;
	char	full;
	int		**map;
}				t_map;

#endif
