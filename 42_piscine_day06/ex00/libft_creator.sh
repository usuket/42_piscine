#!/bin/sh
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ysakakib <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/18 11:25:58 by ysakakib          #+#    #+#              #
#    Updated: 2017/01/18 11:26:00 by ysakakib         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Create object file
gcc -c -Werror -Wall -Wextra ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c

# Create libstr.a
ar rc libft.a ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

# Create index
ranlib libft.a

# Remove object files
#rm -f ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

# Compile
#gcc test_main.c -L. -lft

