# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/21 16:19:56 by zlaarous          #+#    #+#              #
#    Updated: 2023/10/23 16:58:04 by zlaarous         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

CPFLAGS = c++ -Wall -Wextra -Werror -std=c++98

CFILES = main.cpp

all : $(NAME)

$(NAME) : $(CFILES)
			$(CPFLAGS) $^ -o $@

clean : rm -rf $(NAME)

fclean : clean

re : clean all