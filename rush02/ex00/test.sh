#!/bin/sh
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    exe.sh                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ysakakib <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/29 14:23:38 by ysakakib          #+#    #+#              #
#    Updated: 2017/01/29 14:26:46 by ysakakib         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

echo "RUSH02 exe"

echo "\nINPUT RUSH00./"
./exe/rush-00 0 0 | ./rush-2
./exe/rush-00 1 0 | ./rush-2
./exe/rush-00 0 1 | ./rush-2
./exe/rush-00 1 1 | ./rush-2
./exe/rush-00 2 2 | ./rush-2
./exe/rush-00 3 2 | ./rush-2
./exe/rush-00 2 3 | ./rush-2
./exe/rush-00 3 3 | ./rush-2
./exe/rush-00 5 3 | ./rush-2

echo "\nINPUT RUSH01"
./exe/rush-01 0 0 | ./rush-2
./exe/rush-01 1 0 | ./rush-2
./exe/rush-01 0 1 | ./rush-2
./exe/rush-01 1 1 | ./rush-2
./exe/rush-01 2 2 | ./rush-2
./exe/rush-01 3 2 | ./rush-2
./exe/rush-01 2 3 | ./rush-2
./exe/rush-01 3 3 | ./rush-2
./exe/rush-01 5 3 | ./rush-2

echo "\nINPUT RUSH02"
./exe/rush-02 0 0 | ./rush-2
./exe/rush-02 1 0 | ./rush-2
./exe/rush-02 0 1 | ./rush-2
./exe/rush-02 1 1 | ./rush-2
./exe/rush-02 2 2 | ./rush-2
./exe/rush-02 3 2 | ./rush-2
./exe/rush-02 2 3 | ./rush-2
./exe/rush-02 3 3 | ./rush-2
./exe/rush-02 5 3 | ./rush-2

echo "\nINPUT RUSH03"
./exe/rush-03 0 0 | ./rush-2
./exe/rush-03 1 0 | ./rush-2
./exe/rush-03 0 1 | ./rush-2
./exe/rush-03 1 1 | ./rush-2
./exe/rush-03 2 2 | ./rush-2
./exe/rush-03 3 2 | ./rush-2
./exe/rush-03 2 3 | ./rush-2
./exe/rush-03 3 3 | ./rush-2
./exe/rush-03 5 3 | ./rush-2

echo "\nINPUT RUSH04"
./exe/rush-04 0 0 | ./rush-2
./exe/rush-04 1 0 | ./rush-2
./exe/rush-04 0 1 | ./rush-2
./exe/rush-04 1 1 | ./rush-2
./exe/rush-04 2 2 | ./rush-2
./exe/rush-04 3 2 | ./rush-2
./exe/rush-04 2 3 | ./rush-2
./exe/rush-04 3 3 | ./rush-2
./exe/rush-04 5 3 | ./rush-2

echo "\nexe FINISH"
