/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 12:58:09 by cchen             #+#    #+#             */
/*   Updated: 2021/06/10 16:18:05 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>

void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
void	ft_puterr(char *str);
int		ft_openerr(int index, char **argv);
int		ft_closerr(int fd);
int		ft_readerr(int fd, int index, char **argv);
void	ft_print_names(int index, char **argv);

#endif
