# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/15 07:07:34 by ren-nasr          #+#    #+#              #
#    Updated: 2022/06/18 15:15:23 by ren-nasr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SHELL = /bin/sh
NAME = check
# chose all .cpp files in ../cpp* directories recursively

TEST_OBJS = ../cpp01/ex04/sed.o ../cpp02/ex02/Fixed.o\
			../cpp02/ex04/Point.o\
# TEST_OBJS = ../cpp02/ex02/Fixed.o
TEST_INCS = $(wildcard ../cpp*/ex*/interface/)
# add -I to the start of each include path using addp
TEST_INCS := $(addprefix -I,$(TEST_INCS))
CC = clang++


INCS = -I. $(TEST_INCS)
SRCS = tests.cpp
# SRCS =  ./cpp02/ex02.cpp
CXXFLAGS = -Wall -Wextra -Werror -std=c++11 $(INCS)

OBJS = $(SRCS:.cpp=.o)


all: $(NAME)

%.o: %.cpp
	$(CC) $(CXXFLAGS) -c $< -o $@ 

	
$(NAME): $(OBJS) 
	$(CC) $(OBJS) $(TEST_OBJS) -o $@

clean: 
	$(RM) $(OBJS)

fclean: clean 
	$(RM) $(NAME) 

re: fclean $(NAME)

.PHONY: clean fclean re 
