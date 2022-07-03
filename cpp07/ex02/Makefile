# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ren-nasr <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/02 21:52:36 by ren-nasr          #+#    #+#              #
#    Updated: 2022/07/03 18:18:53 by ren-nasr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=arrays
CXX = c++
CXXFLAGS=-Wall -Wextra -Werror -std=c++98 
INCLUDES=-I./includes
INCS=./includes/Array.hpp
SRCS=main.cpp

OBJS= $(SRCS:.cpp=.o)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

$(NAME): $(OBJS) $(INCS)
	$(CXX) $(OBJS) -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: clean fclean re
