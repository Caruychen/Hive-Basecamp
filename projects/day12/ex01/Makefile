# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cchen <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/10 09:26:07 by cchen             #+#    #+#              #
#    Updated: 2021/06/10 16:19:06 by cchen            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat
SRC = srcs/
INCLUDES = includes/
FILES = ft_cat ft_putstr ft_puterr ft_openerr ft_closerr ft_putchar ft_putnbr ft_readerr ft_print_names

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -o $(NAME) $(patsubst %, $(SRC)%.c, $(FILES)) -I$(INCLUDES)

clean:
	rm -f $(patsubst, %, %.o, $(FILES))

fclean: clean
	rm -f $(NAME)
