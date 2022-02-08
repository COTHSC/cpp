# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jescully <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/24 15:42:57 by jescully          #+#    #+#              #
#    Updated: 2022/01/24 15:44:19 by jescully         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = karenFilter

SRCS = main.cpp  \
	   Karen.cpp

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
