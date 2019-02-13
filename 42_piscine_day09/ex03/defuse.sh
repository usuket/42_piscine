# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    defuse.sh                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ysakakib <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/20 12:33:59 by ysakakib          #+#    #+#              #
#    Updated: 2017/01/20 12:34:01 by ysakakib         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Create a file defuse.sh which will substract a second off the timestamp (time since
# Epoch in seconds) from the last access to the file bomb.txt, and display it on the
# stadard output, followed by a line break. The bomb.txt file will be supplied in the
# same folder.

touch -A -000001 -a bomb.txt
stat -t %X -t %s -f %a  bomb.txt
