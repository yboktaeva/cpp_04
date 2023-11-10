/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 17:43:00 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/10 17:57:19 by yuboktae         ###   ########.fr       */
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

AMateria::AMateria(AMateria const& src) {
    
    _type = src._type;
    std::cout << "AMateria " << _type << " is constructed via Copy constructor from " << src._type << std::endl;
}

AMateria &AMateria::operator=(AMateria const &rhs) {
	
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