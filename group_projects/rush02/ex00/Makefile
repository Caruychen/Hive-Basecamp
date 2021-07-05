# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cchen <cchen@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/12 10:15:02 by cchen             #+#    #+#              #
#    Updated: 2021/06/13 15:46:33 by cchen            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-2
SRCS = srcs/
INCLUDES = includes/
FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -o $(NAME) srcs/*.c srcs/utilities/*.c -I$(INCLUDES)

clean:
	rm -f *.o

fclean: clean
	rm -f rush-2

re: fclean all
