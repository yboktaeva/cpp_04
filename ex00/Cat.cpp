/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:03:54 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/13 17:08:56 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("Cat") {
    std::cout << "Default constructor called for " << type << std::endl;
}

Cat::~Cat() {
    std::cout << type << " is destructed" << std::endl;        
}

Cat::Cat(Cat const &other): Animal(other) {
	std::cout << type << " is constructed via Copy constructor from " << other.type << std::endl;
}

Cat &Cat::operator=(Cat const &rhs) {
	if (this == &rhs)
		return (*this);
	this->type = rhs.type;
	return (*this);
}

void Cat::makeSound() const {
    std::cout << type << " said Meow!" << std::endl;
}