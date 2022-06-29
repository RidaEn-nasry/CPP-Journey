# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/29 21:01:53 by ren-nasr          #+#    #+#              #
#    Updated: 2022/06/29 21:26:45 by ren-nasr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = reinterpret_cast 
CC = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g
SRCS = main.cpp\
		./serialize.cpp\
		./deserialize.cpp

INCS = -I./includes/
INCLUDES = ./includes/header.hpp

OBJS = $(SRCS:.cpp=.o)

%.o:%.cpp
	$(CC) $(CXXFLAGS) $(INCS) -g -c $< -o $@


$(NAME): $(OBJS) $(INCLUDES)
	$(CC) $(OBJS) -o $@

clean:
	$(RM) $(OBJS)
	
fclean: clean
	$(RM) $(NAME)

re : fclean $(NAME)

.PHONY: clean fclean re
