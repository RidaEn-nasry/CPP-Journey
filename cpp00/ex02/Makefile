# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/12 15:54:11 by ren-nasr          #+#    #+#              #
#    Updated: 2022/06/13 10:13:46 by ren-nasr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = globalbanksters
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++

INCS = -I./includes
SRCS = ./Account.cpp \
		./tests.cpp

INCLUDES = ./includes/Account.hpp

OBJS = $(SRCS:.cpp=.o)

%.o: %.cpp
	$(CC) $(CXXFLAGS) $(INCS) -c $<

$(NAME) : $(OBJS) $(INCLUDES)
	$(CC) $(OBJS) -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
