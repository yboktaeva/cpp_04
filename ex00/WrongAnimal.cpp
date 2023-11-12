/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuliaboktaeva <yuliaboktaeva@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:29:50 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/12 20:41:57 by yuliaboktae      ###   ########.fr       */
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

	std::cout << "WrongAnimal " << type << " is constructed via Copy constructor from " << other.type << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &rhs) {
	
	if (this == &rhs)
		return (*this);
	this->type = rhs.type;
	std::cout << "WrongAnimal: assignment operator called" << std::endl;
    
	return (*this);
}

const std::string& WrongAnimal::getType() const {
    
    return this->type;
}

void WrongAnimal::makeSound() const {

    std::cout << "WrongAnimal " << type << ": I can't make sound" << std::endl;
}