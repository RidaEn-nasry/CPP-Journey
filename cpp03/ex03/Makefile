# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/18 19:06:24 by ren-nasr          #+#    #+#              #
#    Updated: 2022/06/19 11:36:12 by ren-nasr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = diamondtrap 
CC = clang++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g 
RM = rm -rf
SRCS = ./main.cpp\
		./ClapTrap.cpp\
		./ScavTrap.cpp\
		./FragTrap.cpp\
		./DiamondTrap.cpp

INCS = -I./interface

INCLUDES = ./interface/ClapTrap.hpp ./interface/ScavTrap.hpp ./interface/FragTrap.hpp ./interface/DiamondTrap.hpp
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