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

EXE = ft_display_file
SRCS = ./srcs/
INCLUDES = ./includes/
GCC_OPTIONS = -Wall -Wextra -Werror

all:fclean $(EXE)

$(EXE):
	gcc $(GCC_OPTIONS) $(SRCS)*.c -I $(INCLUDES) -o $(EXE)

clean:
	rm -f $(EXE)

fclean: clean
