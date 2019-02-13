#!/bin/sh
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    test.sh                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ysakakib <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/24 15:08:08 by ysakakib          #+#    #+#              #
#    Updated: 2017/01/24 15:08:10 by ysakakib         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# example case
echo "EXAMPLE CASE"
./do-op
./do-op 1 "+" 1
./do-op 42amis - -20toto12
./do-op 1 p 1
./do-op 1 + toto3
./do-op toto3 + 4
./do-op foo plus bar
./do-op 25 / 0
./do-op 25 % 0

# PLUS
echo "POSITIVE"
./do-op 0 + 0
./do-op 1 + 0
./do-op 0 + 1
./do-op 1 + 1
./do-op -1 + 0
./do-op 0 + -1
./do-op -1 + -1
./do-op 2147483647 + 0
./do-op 0 + 2147483647
./do-op 2147483648 + -2147483648

echo "NEGATIVE"
./do-op 0 - 0
./do-op 1 - 0
./do-op 0 - 1
./do-op 1 - 1
./do-op -1 - 0
./do-op 0 - -1
./do-op -1 - -1
./do-op 2147483647 - 0
./do-op 0 - 2147483647
./do-op 2147483648 - -2147483648

echo "MULTIPLY"
./do-op 0 "*" 0
./do-op 1 "*" 0
./do-op 0 "*" 1
./do-op 1 "*" 1
./do-op -1 "*" 0
./do-op 0 "*" -1
./do-op -2 "*" -3
./do-op 1 "*" -3
./do-op 21 "*" 2
./do-op 21 "*" -2
./do-op 2147483647 "*" 0
./do-op 0 "*" 2147483647

echo "DIVIDE"
./do-op 0 / 0
./do-op 1 / 0
./do-op -1 / 0
./do-op 0 / 1
./do-op 1 / 1
./do-op 0 / -1
./do-op -2 / -3
./do-op 1 / -3
./do-op 84 / 2
./do-op 84 / -2
./do-op 0 / 2147483647

echo "MODULO"
./do-op 0 % 0
./do-op 1 % 0
./do-op -1 % 0
./do-op 0 % 1
./do-op 1 % 1
./do-op 0 % -1
./do-op -2 % -3
./do-op 1 % -3
./do-op 3 % 2
./do-op 3 % -2

echo "EXCEPTIONAL"
# return 0
./do-op foo plus bar
echo $?
# it doesn't display anything.
# invalid arguments number
./do-op 1 + 3 4 | cat -e
echo $?

