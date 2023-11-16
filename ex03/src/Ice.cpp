/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:43:25 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/16 14:28:02 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("ice") {
}

Ice::~Ice() {
}

Ice::Ice(Ice const& other): AMateria(other.getType()) {
}

Ice& Ice::operator=(Ice const& rhs) {
    if (this == &rhs)
        return *this;
    this->type = rhs.type;
    return *this;
}

AMateria *Ice::clone() const {
    Ice* tmp = new Ice();
    *tmp = *this;
    return tmp;
}

void Ice::use(ICharacter &target) {
    std::cout << BLUE << "* shoots an ice bolt at " << target.getName() << " *" << RESET << std::endl;
}