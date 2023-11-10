/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:34:19 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/10 15:51:39 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal() {

    type = "WrongCat";
    std::cout << "Default constructor called for " << type << std::endl;
}

WrongCat::~WrongCat() {

    std::cout << type << " is destructed" << std::endl;        
}

WrongCat::WrongCat(WrongCat const &src): WrongAnimal(src) {

	type = src.type;
    
	std::cout << type << " is constructed via Copy constructor from " << src.type << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &rhs) {
	
	if (this == &rhs)
		return (*this);
	this->type = rhs.type;
    
	std::cout << "WrongCat: assignment operator called" << std::endl;
    
	return (*this);
}

void WrongCat::makeSound() const {

    std::cout << type << ": Meow!" << std::endl;
}