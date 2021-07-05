/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftbsq.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swilliam <swilliam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 12:24:32 by cchen             #+#    #+#             */
/*   Updated: 2021/06/15 14:34:34 by swilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTBSQ_H
# define FTBSQ_H

# include <unistd.h>
# include <stdlib.h>
# include <sys/stat.h>
# include <fcntl.h>
# include "ftstructs.h"

/*
** utilities/conditions
*/
int		is_numeric(char c);
int		is_whitespace(char c);
/*
** utilities/io
*/
int		ft_do_error(void);
void	ft_puterr(char *str);
void	ft_putchar(char c);
void	ft_putstr(char *str);
/*
** utilities/links
*/
void	ft_list_clear_all(t_list **begin_list);
t_list	*ft_list_create_elem(char c);
void	ft_list_push_back(t_list **begin_list, char c);
/*
** main
*/
int		ft_load_meta(char c);
void	ft_map_fill_element(int line, int el, char c);
void	ft_map_fill(t_list	*map_list);
int		ft_map_initialise(int fd);
int		ft_map_malloc(void);
void	ft_map_print(void);
int		ft_map_read(int fd, t_list **map_list);
void	ft_map_reset(void);
void	ft_map_solve(void);

#endif
