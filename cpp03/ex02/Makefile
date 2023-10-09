# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/03 03:26:08 by zlaarous          #+#    #+#              #
#    Updated: 2023/10/05 14:32:09 by zlaarous         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = FragTrap

CPFLAGS = c++ -Wall -Wextra -Werror -std=c++98

CFILES = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

all : $(NAME)

$(NAME) : $(CFILES)
			$(CPFLAGS) $^ -o $@

clean : rm -rf megaphone

fclean : clean

re : clean all
