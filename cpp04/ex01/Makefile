# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/23 10:30:33 by ren-nasr          #+#    #+#              #
#    Updated: 2022/06/23 15:30:25 by ren-nasr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# INCLUDES = ./includes/Cat.hpp ./includes/Dog.hpp ./includes/WrongAnimal.hpp 

CC = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g 
NAME = animal
SRCS = main.cpp Dog.cpp Cat.cpp Animal.cpp Brain.cpp
INCS = -I./includes/
INCLUDES = ./includes/Cat.hpp ./includes/Dog.hpp ./includes/Animal.hpp ./includes/Brain.hpp
OBJS = $(SRCS:.cpp=.o)

%.o:%.cpp
	$(CC) $(CXXFLAGS) $(INCS) -c $< -o $@

$(NAME): $(OBJS) $(INCLUDES)
	$(CC) $(OBJS) -o $@
	
clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: clean fclean re 

