NAME =	phonebook
CC = c++
FLAGS = -Wall -Wextra -Werror
SRCS	= $(shell find ./. -iname "*.cpp")
HEADERS = $(shell find ./. -iname "*.hpp")

all: $(NAME)

${NAME}:${SRCS} ${HEADERS}
	${CC} ${FALGS} ${SRCS} -o ${NAME}

clean:
	rm -f $(NAME)
fclean: clean

re: fclean all

.PHONY: all clean fclean re