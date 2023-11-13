/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:04:17 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/13 17:09:01 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog") {
    std::cout << "Default constructor called for " << type << std::endl;
}

Dog::~Dog() {
    std::cout << type << " is destructed" << std::endl;        
}

Dog::Dog(Dog const &other): Animal(other) {
	std::cout << type << " is constructed via Copy constructor from " << other.type << std::endl;
}

Dog &Dog::operator=(Dog const &rhs) {
	if (this == &rhs)
		return (*this);
	this->type = rhs.type;
	return (*this);
}

void Dog::makeSound() const {
    std::cout << type << " said Woof!" << std::endl;
}