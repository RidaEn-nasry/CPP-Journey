# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/12 15:54:11 by ren-nasr          #+#    #+#              #
#    Updated: 2022/06/12 22:16:10 by ren-nasr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = globalbanksters
CXXFLAGS = -Wall -Wextra -Werror -std=c++98


INCS = -I./includes
SRCS = ./Account.cpp \
		./tests.cpp

INCLUDES = ./includes/Account.hpp

OBJS = $(SRCS:.cpp=.o)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(INCS) -c $<

$(NAME) : $(OBJS) $(INCLUDES)
	$(CXX) $(OBJS) -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
