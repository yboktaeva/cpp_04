/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuliaboktaeva <yuliaboktaeva@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:03:23 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/12 19:59:46 by yuliaboktae      ###   ########.fr       */
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
	std::cout << "Animal: assignment operator called" << std::endl;
    
	return (*this);
}

const std::string& Animal::getType() const {
    
    return this->type;
}

void Animal::makeSound() const {

    std::cout << "Animal " << type << ": I can't make sound" << std::endl;
}