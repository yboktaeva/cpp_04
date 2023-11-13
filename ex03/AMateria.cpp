/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 17:43:00 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/13 19:25:07 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(): type("noType") {
}

AMateria::AMateria(std::string const& type): type(type) {
}

AMateria::~AMateria() {
}

AMateria::AMateria(AMateria const& other) {
    type = other.type;
}

AMateria &AMateria::operator=(AMateria const& rhs) {
	if (this == &rhs)
		return (*this);
	this->type = rhs.type;
	return (*this);
}

std::string const& AMateria::getType() const {
    return this->type;
}

void AMateria::use(ICharacter& target) {
    std::cout << "* uses some materia at " << target.getName() << std::endl;
}

// AMateria::clone() const {
    
// }