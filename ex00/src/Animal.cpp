/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:03:23 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/13 16:41:49 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): type("noType") {
    std::cout << "Default constructor called for Animal " << type << std::endl;
}

Animal::Animal(const std::string name): type(name) {
    std::cout << "Default constructor called for Animal " << type << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal " << type << " is destructed" << std::endl;        
}

Animal::Animal(Animal const &other) {
    type = other.type;
	std::cout << "Animal " << type << " is constructed via Copy constructor from " << other.type << std::endl;
}

Animal &Animal::operator=(Animal const &rhs) {
	if (this == &rhs)
		return (*this);
	this->type = rhs.type;
	return (*this);
}

const std::string& Animal::getType() const {
    return this->type;
}

void Animal::makeSound() const {
    std::cout << "Animal " << type << ": I can't make sound" << std::endl;
}