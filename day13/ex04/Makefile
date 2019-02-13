# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ysakakib <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/26 01:46:03 by ysakakib          #+#    #+#              #
#    Updated: 2017/01/26 01:46:05 by ysakakib         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ./
INCLUDES = ./
GCC_OPTIONS = -Wall -Wextra -Werror

all:fclean exe

exe:
	# gcc $(GCC_OPTIONS) $(SRCS)*.c -I $(INCLUDES)
	gcc -Wextra -Wall -Werror ft_btree.h btree_apply_suffix.c btree_create_node.c main.c

clean:
	rm -f *.o

fclean:
	rm -f a.out
