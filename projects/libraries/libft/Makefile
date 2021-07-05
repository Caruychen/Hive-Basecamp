# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cchen <cchen@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/07 09:05:18 by cchen             #+#    #+#              #
#    Updated: 2021/06/11 19:35:10 by cchen            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = srcs/
INCLUDES = includes/
FUNCTIONS = ft_atoi ft_putchar ft_putnbr ft_putstr ft_strcmp ft_strlen ft_swap btree_create_node btree_apply_infix btree_insert_data
OBJECTS = $(patsubst %, %.o, $(FUNCTIONS))

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -c $(patsubst %, $(SRC)%.c, $(FUNCTIONS)) -I$(INCLUDES)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
