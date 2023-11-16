/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:03:23 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/16 15:37:06 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): type("noType") {
    std::cout << GREEN << "Default constructor called for Animal " << type << RESET << std::endl;
}

Animal::Animal(const std::string name): type(name) {
    std::cout << GREEN << "Default constructor called for Animal " << type << RESET << std::endl;
}

Animal::~Animal() {
    std::cout << GREEN << "Animal " << type << " is destructed" << RESET << std::endl;        
}

Animal::Animal(Animal const &other) {
    type = other.type;
	std::cout << GREEN << "Animal " << type << " is constructed via Copy constructor from " << other.type << RESET << std::endl;
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
    std::cout << BLUE << "Animal " << type << ": I can't make sound" << RESET << std::endl;
}