# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/15 07:00:57 by ren-nasr          #+#    #+#              #
#    Updated: 2022/06/18 00:26:26 by ren-nasr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sed
SRCS = ./main.cpp ./sed.cpp
OBJS = $(SRCS:.cpp=.o)
INCLUDES = ./interface/sed.hpp
CC = clang++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g
RM = rm -rf 
%.o: %.cpp
	$(CC) $(CXXFLAGS) -I./interface/ -c $< -o $@

$(NAME): $(OBJS) $(INCLUDES)
	$(CC) $(OBJS) -o $@

clean: 
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: clean fclean re
