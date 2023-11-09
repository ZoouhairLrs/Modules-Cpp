# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/01 23:04:17 by zlaarous          #+#    #+#              #
#    Updated: 2023/11/09 16:01:25 by zlaarous         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fixed

CPFLAGS = c++ -Wall -Wextra -Werror -std=c++98

CFILES = main.cpp Fixed.cpp

all : $(NAME)

$(NAME) : $(CFILES)
			$(CPFLAGS) $^ -o $@

clean : 
	rm -rf fixed

fclean : clean

re : clean all