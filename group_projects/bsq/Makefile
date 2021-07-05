# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cchen <cchen@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/14 12:17:29 by cchen             #+#    #+#              #
#    Updated: 2021/06/15 05:39:37 by cchen            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
SRC = srcs/
INCLUDE = includes/
IO = srcs/utilities/io/
LINKS = srcs/utilities/links/
CONDITIONS = srcs/utilities/conditions/
FILES = ft_main ft_load_meta ft_map_initialise ft_map_read ft_map_malloc ft_map_fill ft_map_fill_element ft_map_solve ft_map_reset ft_map_print
IO_UTILS = ft_putchar ft_putstr ft_puterr ft_do_error
LINK_UTILS = ft_list_create_elem ft_list_push_back ft_list_clear_all
COND_UTILS = is_numeric is_whitespace
FLAGS = -Wall -Werror -Wextra
FILE_PATH = $(patsubst %, $(SRC)%.c, $(FILES))
IO_PATH = $(patsubst %, $(IO)%.c, $(IO_UTILS))
LINK_PATH = $(patsubst %, $(LINKS)%.c, $(LINK_UTILS))
COND_PATH = $(patsubst %, $(CONDITIONS)%.c, $(COND_UTILS))
OBJECTS = $(patsubst %, %.o, $(FILES)) $(patsubst %, %.o, $(UTILS))

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -o $(NAME) $(FILE_PATH) $(IO_PATH) $(LINK_PATH) $(COND_PATH) -I$(INCLUDE)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
