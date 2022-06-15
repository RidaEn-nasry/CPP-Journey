# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/13 20:59:54 by ren-nasr          #+#    #+#              #
#    Updated: 2022/06/14 18:20:20 by ren-nasr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ./violence

SRCS = ./main.cpp\
		./Weapon.cpp\
		./HumanB.cpp\
		./HumanA.cpp
	
CC = clang++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 
RM = rm -rf

INC = -I./interface
INCLUDES = ./interface/Weapon.hpp\
		./interface/HumanB.hpp\
		./interface/HumanA.hpp

OBJS = $(SRCS:.cpp=.o)

%.o: %.cpp
	$(CC) $(CXXFLAGS) $(INC) -c -g $< -o $@
	
$(NAME): $(OBJS) $(INCLUDES)
	$(CC) $(OBJS) -o $@
	
clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
	
re : fclean $(NAME)

.PHONY: clean fclean re