/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 06:19:25 by cchen             #+#    #+#             */
/*   Updated: 2021/06/04 19:12:39 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		main(void)
{
	char *str;

	str = "hello world\n";
	ft_putstr(str);
	str = "Another test line\n";
	ft_putstr(str);
	str = "\n";
	ft_putstr(str);
	str = "Printed newline above\n";
	ft_putstr(str);
	return (0);
}
