# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/18 18:48:26 by ren-nasr          #+#    #+#              #
#    Updated: 2022/06/18 18:49:22 by ren-nasr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = claptrap
CC = clang++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 
RM = rm -rf
SRCS = ./main.cpp\
		./ClapTrap.cpp

INCS = -I./interface

INCLUDES = ./interface/ClapTrap.hpp
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