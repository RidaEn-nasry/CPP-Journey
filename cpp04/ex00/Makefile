# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/20 08:15:33 by ren-nasr          #+#    #+#              #
#    Updated: 2022/06/20 08:16:53 by ren-nasr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = animal 
CC = clang++
CXXFLAGS = -Wall -Wextra -Werror -Wshadow -Wno-shadow -std=c++98 -g 
RM = rm -rf
SRCS = ./main.cpp\
		./Animal.cpp\
		./Dog.cpp\
		./Cat.cpp

INCS = -I./includes

INCLUDES = ./includes/Animal.hpp ./includes/Dog.hpp ./includes/Cat.hpp
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