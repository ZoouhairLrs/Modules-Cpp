# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/25 14:30:31 by zlaarous          #+#    #+#              #
#    Updated: 2023/11/02 03:31:51 by zlaarous         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

CPFLAGS = c++ -Wall -Wextra -Werror -std=c++98

CFILES = main.cpp Zombie.cpp

all : $(NAME)

$(NAME) : $(CFILES)
			$(CPFLAGS) $^ -o $@

clean : 
	rm -rf zombie

fclean : clean

re : clean all