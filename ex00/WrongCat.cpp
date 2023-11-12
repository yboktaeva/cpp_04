/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuliaboktaeva <yuliaboktaeva@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:34:19 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/12 20:43:07 by yuliaboktae      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat") {

    std::cout << "Default constructor called for " << type << std::endl;
}

WrongCat::~WrongCat() {

    std::cout << type << " is destructed" << std::endl;        
}

WrongCat::WrongCat(WrongCat const &other): WrongAnimal(other) {

	std::cout << type << " is constructed via Copy constructor from " << other.type << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &rhs) {
	
	if (this == &rhs)
		return (*this);
	this->type = rhs.type;
	std::cout << "WrongCat: assignment operator called" << std::endl;
    
	return (*this);
}

void WrongCat::makeSound() const {

    std::cout << type << "said Meow!" << std::endl;
}