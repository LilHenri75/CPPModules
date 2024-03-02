NAME = Abstract
SRCS = main.cpp Cat.cpp Dog.cpp Brain.cpp AAnimal.cpp
OBJS = $(SRCS:.cpp=.o)
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -I./*.hpp

.PHONY: all clean fclean re valgrind

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

valgrind: $(NAME)
	valgrind --leak-check=full -s ./$(NAME)
