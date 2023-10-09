# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/05 22:32:36 by zlaarous          #+#    #+#              #
#    Updated: 2023/10/06 18:06:51 by zlaarous         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Polymorphism

CPFLAGS = c++ -Wall -Wextra -Werror -std=c++98

CFILES = main.cpp Animal.cpp Cat.cpp Dog.cpp

all : $(NAME)

$(NAME) : $(CFILES)
			$(CPFLAGS) $^ -o $@

clean : rm -rf megaphone

fclean : clean

re : clean all
