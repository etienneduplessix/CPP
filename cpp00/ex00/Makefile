# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: etienneduplessix <etienneduplessix@stud    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/18 13:24:21 by etiennedupl       #+#    #+#              #
#    Updated: 2024/01/18 14:38:30 by etiennedupl      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Megaphone 
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror
SRCS	= $(shell find ./. -iname "*.cpp")
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re