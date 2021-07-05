# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cchen <cchen@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/13 20:12:59 by cchen             #+#    #+#              #
#    Updated: 2021/06/13 20:14:25 by cchen            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all:
	gcc -Wall -Werror -Wextra -o eval_expr srcs/*.c srcs/utilities/*.c -I./includes

clean:
	rm -f *.o

fclean: clean
	rm -f eval_expr
	
re:	fclean all