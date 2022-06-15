# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/15 07:07:34 by ren-nasr          #+#    #+#              #
#    Updated: 2022/06/15 10:19:07 by ren-nasr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SHELL = /bin/sh
NAME = tests
# chose all .cpp files in ../cpp* directories recursively

TEST_OBJS = ../cpp01/ex04/sed.o
TEST_INCS = $(wildcard ../cpp*/ex*/interface/)
# add -I to the start of each include path using addp
TEST_INCS := $(addprefix -I,$(TEST_INCS))
CC = clang++


INCS = -I. $(TEST_INCS)
SRCS = ./cpp01/ex04.cpp
CXXFLAGS = -Wall -Wextra -Werror -std=c++11 

OBJS = $(SRCS:.cpp=.o)


all: $(NAME)

%.o: %.cpp
	$(CC) $(CXXFLAGS) $(INCS) -c $< -o $@ 

# MAKETHEMALL: $()
# 	for dir in $(wildcard ../cpp*/**); do $(MAKE) -C $$dir; done

# FCLEANTHEMALL:
# 	for dir in $(wildcard ../cpp*/**); do $(MAKE) -C $$dir fclean; done

	
$(NAME): $(OBJS) 
	$(CC) $(OBJS)  $(TEST_OBJS) -o $@

clean: 
	$(RM) $(OBJS)

fclean: clean 
	$(RM) $(NAME) 

re: fclean $(NAME)

.PHONY: clean fclean re 
