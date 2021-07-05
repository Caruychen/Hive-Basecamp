/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 18:38:13 by cchen             #+#    #+#             */
/*   Updated: 2021/06/08 04:47:14 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# define LOW_LIMIT -2147483648

void			ft_putchar(char c);
void			ft_putstr(char *str);
int				ft_atoi(char *str);
void			ft_putnbr(int nb);
int				ft_sum(int n1, int n2);
int				ft_subtract(int n1, int n2);
int				ft_multiply(int n1, int n2);
int				ft_divide(int n1, int n2);
int				ft_modulus(int n1, int n2);
typedef	int		(*t_op_ptr)(int, int);

#endif
