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
	gcc $(GCC_OPTIONS) $(SRCS)*.c -I $(INCLUDES)

clean:
	rm -f $(EXE)

fclean: clean
