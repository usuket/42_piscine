# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ysakakib <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/29 14:10:35 by ysakakib          #+#    #+#              #
#    Updated: 2017/01/29 14:13:11 by ysakakib         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME00        = rush\-00
NAME01        = rush\-01
NAME02        = rush\-02
NAME03        = rush\-03
NAME04        = rush\-04
SRCS        = ./srcs/ft_atoi.c ./srcs/ft_putchar.c ./srcs/main.c
INCLUDES    = ./includes/
FLAGS       = -Wall -Werror -Wextra

all: $(NAME00) $(NAME01) $(NAME02) $(NAME03) $(NAME04)

$(NAME00):
		gcc $(FLAGS) $(OBJECT) -I $(INCLUDES) -o $(NAME00) $(SRCS) ./srcs/rush00.c
$(NAME01):
		gcc $(FLAGS) $(OBJECT) -I $(INCLUDES) -o $(NAME01) $(SRCS) ./srcs/rush01.c
$(NAME02):
		gcc $(FLAGS) $(OBJECT) -I $(INCLUDES) -o $(NAME02) $(SRCS) ./srcs/rush02.c
$(NAME03):
		gcc $(FLAGS) $(OBJECT) -I $(INCLUDES) -o $(NAME03) $(SRCS) ./srcs/rush03.c
$(NAME04):
		gcc $(FLAGS) $(OBJECT) -I $(INCLUDES) -o $(NAME04) $(SRCS) ./srcs/rush04.c

clean:
		rm -f $(OBJECT)

fclean: clean
		rm -f $(NAME)

re: fclean all
