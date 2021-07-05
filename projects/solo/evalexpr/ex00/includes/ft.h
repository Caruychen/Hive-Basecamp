/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 06:51:00 by cchen             #+#    #+#             */
/*   Updated: 2021/06/13 20:10:12 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <stdlib.h>
# define LOW_LIMIT -2147483648

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		eval_expr(char *str);
int		is_separator(char c);
int		ft_wordlength(char *str);
char	*ft_copyword(char *src);
int		ft_wordcount(char *str);
char	**ft_split_whitespaces(char *str);
int		ft_ops(int value1, char op, int value2);
int		ft_sum(int n1, int n2);
int		ft_subtract(int n1, int n2);
int		ft_multiply(int n1, int n2);
int		ft_divide(int n1, int n2);
int		ft_modulus(int n1, int n2);
typedef	int		(*t_op_ptr)(int, int);

#endif
