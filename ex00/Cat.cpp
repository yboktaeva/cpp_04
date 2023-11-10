/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:03:54 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/10 15:50:13 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal() {

    type = "Cat";
    std::cout << "Default constructor called for " << type << std::endl;
}

Cat::~Cat() {

    std::cout << type << " is destructed" << std::endl;        
}

Cat::Cat(Cat const &src): Animal(src) {

	type = src.type;
    
	std::cout << type << " is constructed via Copy constructor from " << src.type << std::endl;
}

Cat &Cat::operator=(Cat const &rhs) {
	
	if (this == &rhs)
		return (*this);
	this->type = rhs.type;
    
	std::cout << "Cat: assignment operator called" << std::endl;
    
	return (*this);
}

void Cat::makeSound() const {

    std::cout << type << ": Meow!" << std::endl;
}