/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuliaboktaeva <yuliaboktaeva@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:04:17 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/12 21:20:21 by yuliaboktae      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog") {

	_brain = new Brain;
    std::cout << "Default constructor called for " << type << std::endl;
}

Dog::~Dog() {

	delete(_brain);
    std::cout << type << " is destructed" << std::endl;      
}

Dog::Dog(Dog const &other): Animal(other) {

	type = other.type;
    _brain = new Brain(*other._brain);
	std::cout << type << " is constructed via Copy constructor from " << other.type << std::endl;
}

Dog &Dog::operator=(Dog const &rhs) {
	
	if (this == &rhs)
		return (*this);
	if (this->_brain)
		delete this->_brain;
	this->_brain = new Brain();
	this->_brain = rhs._brain;
	this->type = rhs.type;
	
	return (*this);
}

void Dog::makeSound() const {

    std::cout << type << "said Wauf!" << std::endl;
}

void Dog::setIdea(std::string idea) {

	this->_brain->setIdea(idea);
}

std::string Dog::getIdea() const {

	return this->_brain->getIdea();
}