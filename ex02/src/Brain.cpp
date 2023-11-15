/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:07:22 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/15 19:47:47 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	idx = 0;
    std::cout << "Default constructor called for Brain" << std::endl;
}

Brain::~Brain() {
    std::cout << "Brain is destructed" << std::endl;        
}

Brain::Brain(Brain const &other) {
	if (this != &other) {
		
		for (int i = 0; i < 100; ++i)
			_ideas[i] = other._ideas[i];
	}
	std::cout << "Brain copy is constructed via Copy constructor" << std::endl;
}

Brain &Brain::operator=(Brain const &rhs) {
	if (this == &rhs)
		return (*this);
    for (int i = 0; i < 100; ++i)
		_ideas[i] = rhs._ideas[i];
	return (*this);
}

void Brain::setIdea(std::string idea, int idx) {
	if (idx >= 0 && idx < 100) {
		for (int i = 0; i < 100; ++i) {
			this->_ideas[idx] = idea;
		}	
		idx++;
	}
	else
		std::cout << BLUE << "I can have only 100 ideas! Please choose between 0 and 99 included" << RESET << std::endl;
}

std::string Brain::getIdea(int idx) const {
	if (idx >=0 && idx < 100)
		return this->_ideas[idx];
	else
		return "";
}
