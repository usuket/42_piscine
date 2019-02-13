# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ysakakib <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/24 00:29:02 by ysakakib          #+#    #+#              #
#    Updated: 2017/01/24 00:29:04 by ysakakib         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EXE = ft_advanced_do\-op
SRC = ./srcs/
INCLUDE = ./includes/

all: clean $(EXE)

$(EXE):
	gcc -Wall -Werror -Wextra -I $(INCLUDE) $(SRC)*.c -o $(EXE)

clean:
	rm -f $(EXE)

fclean: clean
	rm -f $(EXE)