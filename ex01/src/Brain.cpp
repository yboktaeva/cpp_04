/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:07:22 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/13 16:25:40 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
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

void Brain::setIdea(std::string idea) {
	this->_ideas[0] = idea;
}

std::string Brain::getIdea() const {
	return this->_ideas[0];
}
