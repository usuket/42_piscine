# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbrady <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/28 15:01:45 by bbrady            #+#    #+#              #
#    Updated: 2017/01/29 13:50:19 by ysakakib         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        = rush\-2
SRCS        = srcs/main.c srcs/funcs.c srcs/memory.c srcs/engine.c srcs/rushes.c
OBJECT      = main.o funcs.o memory.o engine.o rushes.o
FLAGS       = -Wall -Werror -Wextra
INCLUDES    = includes/

all: $(NAME) clean

$(NAME): $(OBJECT)
	gcc $(FLAGS) $(OBJECT) -o $(NAME)

$(OBJECT): $(SRCS)
	gcc $(FLAGS) -I $(INCLUDES) -c $(SRCS)

clean:
	rm -f $(OBJECT)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re
