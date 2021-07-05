/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 16:17:35 by cchen             #+#    #+#             */
/*   Updated: 2021/06/13 19:35:55 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#define BUF_SIZE 16711568

t_list	*g_rush_list = NULL;
int		g_width = 0;
int		g_height = 0;

int		is_arg_empty(void)
{
	return (g_rush_list && ft_strcmp("0", g_rush_list->data) == 0);
}

int		ft_read(int fd)
{
	int		ret;
	char	*buf;
	int		index;
	char	ptr[1];

	buf = (char*)malloc(sizeof(*buf) * BUF_SIZE);
	index = 0;
	while ((ret = read(fd, ptr, 1)))
	{
		if (ret == -1)
			return (-1);
		buf[index++] = *ptr;
	}
	buf[index] = '\0';
	ft_check_rush(buf);
	if (is_arg_empty())
		ft_list_clear_all(&g_rush_list);
	ft_print_results();
	free(buf);
	return (0);
}

int		main(void)
{
	ft_list_initialise(&g_rush_list);
	if (ft_read(0) == -1)
	{
		ft_putchar('\n');
		return (1);
	}
	return (0);
}
