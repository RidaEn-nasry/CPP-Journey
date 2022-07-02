# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ren-nasr <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/02 09:07:29 by ren-nasr          #+#    #+#              #
#    Updated: 2022/07/02 16:52:39 by ren-nasr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = iter 

SRCS = main.cpp 
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g
INCLUDEPATH = -I./includes/
INCLUDES = ./includes/iter.hpp
OBJS = $(SRCS:.cpp=.o)
%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDEPATH) -c $< -o $@

$(NAME): $(OBJS) $(INCLUDES)
	$(CXX) $(OBJS) -o $@

clean: 
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
