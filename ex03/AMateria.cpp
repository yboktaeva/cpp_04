/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuliaboktaeva <yuliaboktaeva@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 17:43:00 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/12 23:01:32 by yuliaboktae      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(): _type("no_name") {
    
    std::cout << "Default constructor called for " << "AMateria " << _type << std::endl;
}

AMateria::AMateria(std::string const& type): _type(type) {
    
    std::cout << "Default constructor called for " << "AMateria " << _type << std::endl;
}

AMateria::~AMateria() {
    
    std::cout << "AMateria " << _type << " is destructed" << std::endl;   
}

AMateria::AMateria(AMateria const& other) {
    
    _type = other._type;
    std::cout << "AMateria " << _type << " is constructed via Copy constructor from " << other._type << std::endl;
}

AMateria &AMateria::operator=(AMateria const& rhs) {
	
	if (this == &rhs)
		return (*this);
	this->_type = rhs._type;
    
	std::cout << "AMateria: assignment operator called" << std::endl;
    
	return (*this);
}

std::string const& AMateria::getType() const {

    return this->_type;
}

// AMateria::clone() const {
    
// }