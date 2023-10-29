# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/21 16:19:26 by zlaarous          #+#    #+#              #
#    Updated: 2023/10/29 12:54:09 by zlaarous         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CPFLAGS = c++ -Wall -Wextra -Werror -std=c++98

CFILES = megaphone.cpp

all : $(NAME)

$(NAME) : $(CFILES)
			$(CPFLAGS) $^ -o $@

clean : 
	rm -rf megaphone

fclean : clean

re : clean all