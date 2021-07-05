# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cchen <cchen@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/08 05:45:46 by cchen             #+#    #+#              #
#    Updated: 2021/06/08 05:58:06 by cchen            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op
SRC = srcs/
INCLUDES = includes/
FILES = ft_do_op ft_io ft_ops
OBJECTS = $(patsubst %, %.o, $(FILES))

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -o $(NAME) $(patsubst %, $(SRC)%.c, $(FILES)) -I$(INCLUDES)

clean:
	/bin/rm -f $(NAME) $(OBJECTS)