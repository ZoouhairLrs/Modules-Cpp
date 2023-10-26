# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/26 15:01:42 by zlaarous          #+#    #+#              #
#    Updated: 2023/10/26 19:41:52 by zlaarous         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Hibrain

CPFLAGS = c++ -Wall -Wextra -Werror -std=c++98

CFILES = main.cpp

all : $(NAME)

$(NAME) : $(CFILES)
			$(CPFLAGS) $^ -o $@

clean : rm -rf megaphone

fclean : clean

re : clean all
