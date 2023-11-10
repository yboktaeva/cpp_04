/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:03:23 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/10 15:24:51 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): type("no_name") {

    std::cout << "Default constructor called for " << "Animal " << type << std::endl;
}

Animal::~Animal() {

    std::cout << "Animal " << type << " is destructed" << std::endl;        
}

Animal::Animal(Animal const &src) {

	type = src.type;
    
	std::cout << "Animal " << type << " is constructed via Copy constructor from " << src.type << std::endl;
}

Animal &Animal::operator=(Animal const &rhs) {
	
	if (this == &rhs)
		return (*this);
	this->type = rhs.type;
    
	std::cout << "Animal: assignment operator called" << std::endl;
    
	return (*this);
}

std::string Animal::getType() const {
    
    return this->type;
}

void Animal::makeSound() const {

    std::cout << "Animal " << type << ": Default sound" << std::endl;
}