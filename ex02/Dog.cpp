/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:04:17 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/10 16:15:55 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal() {

    type = "Dog";
	_brain = new Brain;
    std::cout << "Default constructor called for " << type << std::endl;
}

Dog::~Dog() {

	delete(_brain);
    std::cout << type << " is destructed" << std::endl;      
}

Dog::Dog(Dog const &src): Animal(src) {

	type = src.type;
    
	std::cout << type << " is constructed via Copy constructor from " << src.type << std::endl;
}

Dog &Dog::operator=(Dog const &rhs) {
	
	if (this == &rhs)
		return (*this);
	this->type = rhs.type;
    
	std::cout << "Dog: assignment operator called" << std::endl;
    
	return (*this);
}

void Dog::makeSound() const {

    std::cout << type << ": Wauf!" << std::endl;
}