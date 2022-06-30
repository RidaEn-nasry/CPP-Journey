# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/30 14:59:39 by ren-nasr          #+#    #+#              #
#    Updated: 2022/06/30 15:34:10 by ren-nasr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = template
CC = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g
SRCS = main.cpp	
		 
INCS = -I./includes
INCLUDES = ./includes/templates.hpp
RM = rm -rf

OBJS = $(SRCS:.cpp=.o)

%.o:%.cpp
	$(CC) $(CXXFLAGS) $(INCS) -c $< -o $@


$(NAME): $(OBJS) $(INCLUDES)
	$(CC) $(OBJS) -o $@

clean:
	$(RM) $(OBJS) -o $@

fclean: clean
	$(RM) $(NAME)
	
re : fclean $(NAME)

.PHONY: clean fclean re