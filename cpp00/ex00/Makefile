# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/10 19:00:47 by ren-nasr          #+#    #+#              #
#    Updated: 2022/06/13 10:13:35 by ren-nasr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CXXFLAGS = -std=c++98 -Wall -Wextra -Werror

NAME = megaphone
CC = c++
SRCS = ./megaphone.cpp

OBJS = $(SRCS:.cpp=.o)

%.o: %.cpp
	$(CC) $(CPPFLAGS) -c $< -o $@
	
$(NAME): $(OBJS) 
	$(CC) $(LDFLAGS) -o $@ $^

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	
re: fclean $(NAME)

	
	