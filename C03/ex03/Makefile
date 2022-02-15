# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jescully <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/24 15:42:57 by jescully          #+#    #+#              #
#    Updated: 2022/02/15 17:57:04 by jescully         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ClapTrap

SRCS = ClapTrap.cpp  \
	   main.cpp \
	   ScavTrap.cpp \
	   FragTrap.cpp

OBJS = $(SRCS:.cpp=.o)

CXX=c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

.PHONY: all clean fclean re

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ -c $^ 

clean :
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re: fclean all
