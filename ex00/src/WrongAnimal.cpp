/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:29:50 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/13 16:42:16 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("noType") {
    std::cout << "Default constructor called for " << "WrongAnimal " << type << std::endl;
}

WrongAnimal::WrongAnimal(const std::string name): type(name) {
    std::cout << "Default constructor called for Animal " << type << std::endl;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal " << type << " is destructed" << std::endl;        
}

WrongAnimal::WrongAnimal(WrongAnimal const &other) {
    type = other.type;
	std::cout << "WrongAnimal " << type << " is constructed via Copy constructor from " << other.type << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &rhs) {
	if (this == &rhs)
		return (*this);
	this->type = rhs.type;
	return (*this);
}

const std::string& WrongAnimal::getType() const {
    return this->type;
}

void WrongAnimal::makeSound() const {
    std::cout << "WrongAnimal " << type << ": I can't make sound" << std::endl;
}