# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/15 17:37:12 by ren-nasr          #+#    #+#              #
#    Updated: 2022/06/15 17:45:54 by ren-nasr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RM = rm -rf

NAME = harlFilter
SRCS = ./Harl.cpp ./main.cpp

OBJS = $(SRCS:.cpp=.o)
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
CC = clang++
INCLUDES = $(INCS)/$(wildcard *.hpp)

%.o:%.cpp
	$(CC) $(CXXFLAGS) -I./interface -c -g $< -o $@

$(NAME): $(OBJS) $(INCLUDES)
	$(CC) $(OBJS) -o $@

clean:
	$(RM) $(OBJS)
	
fclean: clean
	$(RM) $(NAME)
	
re: fclean $(NAME)

.PHONY: clean fclean re




