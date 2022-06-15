# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/10 21:22:25 by ren-nasr          #+#    #+#              #
#    Updated: 2022/06/14 08:08:48 by ren-nasr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXXFLAGS = -std=c++98 -Wall -Wextra -Werror
NAME = phonebook
CC = clang++

SRCS = ./Contacts.cpp\
		./PhoneBook.cpp\
		./main.cpp

INCS = -I./interface
INCLUDES = ./interface/Contacts.hpp\
		./interface/PhoneBook.hpp

OBJS = $(SRCS:.cpp=.o)

%.o: %.cpp
	$(CC) $(CPPFLAGS) $(INCS) -c -g $< -o $@

$(NAME): $(OBJS) $(INCLUDES)
	$(CC) $(OBJS) -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	
re: fclean $(NAME)

.PHONY: clean fclean re
	
	