/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:34:19 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/16 15:16:39 by yuboktae         ###   ########.fr       */
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
	type = other.type;
	std::cout << type << " is constructed via Copy constructor from " << other.type << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &rhs) {
	if (this == &rhs)
		return (*this);
	this->type = rhs.type;
	return (*this);
}

void WrongCat::makeSound() const {
    std::cout << BLUE << type << " said Meow!" << RESET << std::endl;
}