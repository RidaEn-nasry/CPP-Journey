# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/27 08:36:35 by ren-nasr          #+#    #+#              #
#    Updated: 2022/06/29 08:46:48 by ren-nasr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = convert 
CC = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g
SRCS = main.cpp\
	 converters/to_char.cpp\
	 converters/to_int.cpp\
	 converters/to_double.cpp\
	converters/to_float.cpp\
	utils.cpp

INCS = -I./includes/
INCLUDES = ./includes/conversion.hpp

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
