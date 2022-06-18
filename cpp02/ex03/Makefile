# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/18 12:39:17 by ren-nasr          #+#    #+#              #
#    Updated: 2022/06/18 15:46:31 by ren-nasr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = a.out 
CC = clang++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g
RM = rm -rf
SRCS = ./main.cpp\
		./Fixed.cpp\
		./Point.cpp\
		./bsp.cpp

INCS = -I./interface

INCLUDES = ./interface/Fixed.hpp ./interface/Point.hpp
OBJS = $(SRCS:.cpp=.o)

%.o: %.cpp
	$(CC) $(CXXFLAGS) $(INCS) -c $< -o $@ 

$(NAME): $(OBJS) $(INCLUDES)
	$(CC) $(OBJS) -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: clean fclean re