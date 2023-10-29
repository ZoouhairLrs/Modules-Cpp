# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/28 15:50:40 by zlaarous          #+#    #+#              #
#    Updated: 2023/10/29 16:45:18 by zlaarous         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harlFilter

CPFLAGS = c++ -Wall -Wextra -Werror -std=c++98

CFILES = main.cpp harl.cpp

all : $(NAME)

$(NAME) : $(CFILES)
			$(CPFLAGS) $^ -o $@

clean : 
	rm -rf megaphone

fclean : clean

re : clean all
