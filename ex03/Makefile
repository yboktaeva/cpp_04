# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yuliaboktaeva <yuliaboktaeva@student.42    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/10 12:02:06 by yuboktae          #+#    #+#              #
#    Updated: 2023/11/12 21:56:15 by yuliaboktae      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = AMateria

SRC	= main.cpp AMateria.cpp MateriaSource.cpp

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