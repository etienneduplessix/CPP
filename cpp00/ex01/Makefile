# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: etienneduplessix <etienneduplessix@stud    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/18 13:18:10 by etiennedupl       #+#    #+#              #
#    Updated: 2024/01/25 06:10:07 by etiennedupl      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
NAME = phonebook
CXXFLAGS = -Wall -Wextra -Werror 
SRCS = main.cpp PhoneBook.cpp Contact.cpp

all: $(NAME)

$(NAME):
	$(CXX) $(SRCS)   $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
