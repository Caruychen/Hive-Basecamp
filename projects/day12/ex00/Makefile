# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cchen <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/09 16:06:04 by cchen             #+#    #+#              #
#    Updated: 2021/06/09 17:01:49 by cchen            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
SRC = srcs/
INCLUDES = includes/
FILES = ft_display_file ft_putstr ft_puterr

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -o $(NAME) $(patsubst %, $(SRC)%.c, $(FILES)) -I$(INCLUDES)

clean:
	rm -f $(patsubst, %, %.o, $(FILES))

fclean: clean
	rm -f $(NAME)
