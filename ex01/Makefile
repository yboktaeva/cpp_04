# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/10 11:15:16 by yuboktae          #+#    #+#              #
#    Updated: 2023/11/10 16:30:02 by yuboktae         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Brain

SRC	= main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

OBJ	= $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp *.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re