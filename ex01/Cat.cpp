/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuliaboktaeva <yuliaboktaeva@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:03:54 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/12 21:18:44 by yuliaboktae      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("Cat") {

	_brain = new Brain;
    std::cout << "Default constructor called for " << type << std::endl;
}

Cat::~Cat() {

	delete (_brain);
    std::cout << type << " is destructed" << std::endl;        
}

Cat::Cat(Cat const &other): Animal(other) {

	type = other.type;
    _brain = new Brain(*other._brain);
	std::cout << type << " is constructed via Copy constructor from " << other.type << std::endl;
}

Cat &Cat::operator=(Cat const &rhs) {
	
	if (this == &rhs)
		return (*this);
	if (this->_brain)
		delete this->_brain;
	this->_brain = new Brain();
	this->_brain = rhs._brain;
	this->type = rhs.type;
    
	return (*this);
}

void Cat::makeSound() const {

    std::cout << type << "said Meow!" << std::endl;
}

void Cat::setIdea(std::string idea) {

	this->_brain->setIdea(idea);
}

std::string Cat::getIdea() const {

	return this->_brain->getIdea();
}