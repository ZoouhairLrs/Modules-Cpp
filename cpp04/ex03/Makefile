# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/05 22:32:36 by zlaarous          #+#    #+#              #
#    Updated: 2023/12/03 21:39:07 by zlaarous         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Interface

CPFLAGS = c++ -Wall -Wextra -Werror -std=c++98

CFILES = main.cpp \
		 AMateria.cpp \
		 Character.cpp \
		 Cure.cpp \
		 Ice.cpp \
		 MateriaSource.cpp

all : $(NAME)

$(NAME) : $(CFILES)
			$(CPFLAGS) $^ -o $@

clean : 
	rm -rf Interface

fclean : clean

re : clean all
