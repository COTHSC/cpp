# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jescully <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/24 15:42:57 by jescully          #+#    #+#              #
#    Updated: 2022/02/14 17:53:31 by jescully         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sed_but_worse

SRCS = main.cpp

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
