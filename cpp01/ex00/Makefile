# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/13 13:51:48 by ren-nasr          #+#    #+#              #
#    Updated: 2022/06/13 15:42:19 by ren-nasr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie
CC = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
SRCS = ./main.cpp\
		./Zombie.cpp

INCS = -I./includes

INCLUDES = ./includes/Zombie.hpp

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

.PHONY: all clean fclean re
