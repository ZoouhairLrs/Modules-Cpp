# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/05 22:32:36 by zlaarous          #+#    #+#              #
#    Updated: 2023/12/01 09:21:48 by zlaarous         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = WorldOnFire

CPFLAGS = c++ -Wall -Wextra -Werror -std=c++98

CFILES = main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp

all : $(NAME)

$(NAME) : $(CFILES)
			$(CPFLAGS) $^ -o $@

clean : 
	rm -rf WorldOnFire

fclean : clean

re : clean all
