/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:29:50 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/16 15:16:29 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("noType") {
    std::cout << GREEN << "Default constructor called for " << "WrongAnimal " << type << RESET << std::endl;
}

WrongAnimal::WrongAnimal(const std::string name): type(name) {
    std::cout << GREEN << "Default constructor called for Animal " << type << RESET << std::endl;
}

WrongAnimal::~WrongAnimal() {
    std::cout << GREEN << "WrongAnimal " << type << " is destructed" << RESET << std::endl;        
}

WrongAnimal::WrongAnimal(WrongAnimal const &other) {
    type = other.type;
	std::cout << GREEN << "WrongAnimal " << type << " is constructed via Copy constructor from " << other.type << RESET << std::endl;
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
    std::cout << BLUE << "WrongAnimal " << type << ": I can't make sound" << RESET << std::endl;
}