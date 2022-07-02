NAME = iter 

SRCS = main.cpp 
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g
OBJS = $(SRCS:.cpp=.o)
INCLUDEPATH = -I./includes/
INCLUDES = ./includes/iter.hpp
%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDEPATH) -c $< -o $@

$(NAME): $(OBJS) $(INCLUDES)
	$(CXX) $(OBJS) -o $@

clean: 
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
