# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/25 08:58:17 by ren-nasr          #+#    #+#              #
#    Updated: 2022/06/25 18:47:44 by ren-nasr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bureaucrat
CC = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g
SRCS = main.cpp\
		 Form.cpp\
		 Bureaucrat.cpp
		 
INCS = -I./includes
INCLUDES = ./includes/Bureaucrat.hpp ./includes/Form.hpp
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