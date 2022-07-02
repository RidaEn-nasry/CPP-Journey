NAME = arrays

SCRS = main.cpp Array.cpp 
INCLUDES = ./includes/Array.hpp
CC = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g
INCS = -I./includes/

OBJS = $(SRCS:.cpp=.o)

%.o: %.cpp
	$(CC) $(SRCS) $(CXXFLAFS) $(INCS) -c $< -o $@

$(NAME): $(OBJS) $(INCLUDES)
	@echo $(OBJS)
	$(CC) $(OBJS) -o $@

clean:
	$(RM) $(OBJS)


fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)



	
