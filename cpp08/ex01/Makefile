# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ren-nasr <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/06 17:05:18 by ren-nasr          #+#    #+#              #
#    Updated: 2022/07/06 17:14:37 by ren-nasr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME=span

RM = rm -rf
SRCS=main.cpp Span.cpp

INCS = -I./includes/

INCLUDES=./includes/Span.hpp
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
