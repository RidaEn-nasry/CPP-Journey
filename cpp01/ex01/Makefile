# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/13 17:16:00 by ren-nasr          #+#    #+#              #
#    Updated: 2022/06/14 08:09:11 by ren-nasr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

SRCS = ./main.cpp\
		./Zombie.cpp

CC = clang++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf 
INCS = -I./interface
INCLUDES = ./interface/Zombie.hpp

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
	

