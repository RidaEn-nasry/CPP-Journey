# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/10 21:22:25 by ren-nasr          #+#    #+#              #
#    Updated: 2022/06/13 10:13:41 by ren-nasr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXXFLAGS = -std=c++98 -Wall -Wextra -Werror
NAME = phonebook
CC = c++

SRCS = ./Contacts.cpp\
		./PhoneBook.cpp\
		./main.cpp

OBJS = $(SRCS:.cpp=.o)
INCS = -I./includes
INCLUDES = ./includes/Contacts.hpp\
		./includes/PhoneBook.hpp

%.o: %.cpp 
	$(CC) $(CPPFLAGS) $(INCS) -c -g $< -o $@

$(NAME): $(OBJS) $(INCLUDES)
	$(CC) $(OBJS) -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	
re: fclean $(NAME)

.PHONY: all clean fclean re
	
	