# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/26 15:25:04 by zlaarous          #+#    #+#              #
#    Updated: 2023/11/02 03:32:14 by zlaarous         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = game

CPFLAGS = c++ -Wall -Wextra -Werror -std=c++98

CFILES = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

all : $(NAME)

$(NAME) : $(CFILES)
			$(CPFLAGS) $^ -o $@

clean : 
	rm -rf game

fclean : clean

re : clean all
