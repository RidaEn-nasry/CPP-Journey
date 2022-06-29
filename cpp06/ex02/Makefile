# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/29 21:34:10 by ren-nasr          #+#    #+#              #
#    Updated: 2022/06/29 21:34:34 by ren-nasr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = dynamic_cast
CC = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g
SRCS = main.cpp 

INCS = -I./includes/
INCLUDES = ./includes/Base.hpp

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
