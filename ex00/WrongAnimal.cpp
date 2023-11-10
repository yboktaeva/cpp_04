/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:29:50 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/10 15:30:50 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("no_name") {

    std::cout << "Default constructor called for " << "WrongAnimal " << type << std::endl;
}

WrongAnimal::~WrongAnimal() {

    std::cout << "WrongAnimal " << type << " is destructed" << std::endl;        
}

WrongAnimal::WrongAnimal(WrongAnimal const &src) {

	type = src.type;
    
	std::cout << "WrongAnimal " << type << " is constructed via Copy constructor from " << src.type << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &rhs) {
	
	if (this == &rhs)
		return (*this);
	this->type = rhs.type;
    
	std::cout << "WrongAnimal: assignment operator called" << std::endl;
    
	return (*this);
}

std::string WrongAnimal::getType() const {
    
    return this->type;
}

void WrongAnimal::makeSound() const {

    std::cout << "WrongAnimal " << type << ": Default sound" << std::endl;
}