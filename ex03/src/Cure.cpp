/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:45:51 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/16 14:27:42 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure") {
}

Cure::~Cure() {
}

Cure::Cure(Cure const& other): AMateria(other.getType()) {
}

Cure& Cure::operator=(Cure const& rhs) {
    if (this == &rhs)
        return *this;
    this->type = rhs.type;
    return *this;
}

AMateria *Cure::clone() const {
    Cure* tmp = new Cure();
    *tmp = *this;
    return tmp;
}

void Cure::use(ICharacter &target) {
    std::cout << BLUE << "* heals " << target.getName()<< "'s wounds *" << RESET << std::endl;
}