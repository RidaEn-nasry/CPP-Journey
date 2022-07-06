# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ren-nasr <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/06 21:14:00 by ren-nasr          #+#    #+#              #
#    Updated: 2022/07/06 22:26:28 by ren-nasr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME=stack

RM = rm -rf
SRCS=main.cpp 

INCS = -I./includes/

INCLUDES=./includes/MutantStack.hpp
CXXFLAGS= -Wall -Wextra -Werror -std=c++98 
CXX=c++

OBJS=$(SRCS:.cpp=.o)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(INCS) -c $< -o $@


$(NAME): $(OBJS) $(INCLUDES)
	$(CXX) $(OBJS) -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)


.PHONY: $(NAME) clean fclean re
