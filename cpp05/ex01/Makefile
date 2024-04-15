
NAME = exef
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror
SRCS	= $(shell find ./. -iname "*.cpp")

all: $(NAME)

$(NAME):
	$(CXX) $(CXXFLAGS) $(SRCS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(NAME)

fclean: clean


re: fclean all

.PHONY: all clean fclean re