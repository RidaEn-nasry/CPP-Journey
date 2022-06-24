# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ren-nasr <ren-nasr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/23 10:30:33 by ren-nasr          #+#    #+#              #
#    Updated: 2022/06/24 07:16:49 by ren-nasr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# INCLUDES = ./includes/Cat.hpp ./includes/Dog.hpp ./includes/WrongAnimal.hpp 

CC = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g 
NAME = animal
SRCS = main.cpp Dog.cpp Cat.cpp Animal.cpp
INCS = -I./includes/
INCLUDES = ./includes/Cat.hpp ./includes/Dog.hpp ./includes/Animal.hpp 
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

