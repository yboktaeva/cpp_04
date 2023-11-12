/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuliaboktaeva <yuliaboktaeva@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 22:40:20 by yuliaboktae       #+#    #+#             */
/*   Updated: 2023/11/12 23:08:09 by yuliaboktae      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    
    for (int i = 0; i < 4; ++i)
        inventory[i] = NULL;
}

MateriaSource::~MateriaSource() {
    
    for (int i = 0; i < 4; ++i)
        delete inventory[i];
}

MateriaSource::MateriaSource(MateriaSource const& other) {
    
    for (int i = 0; i < 4; ++i)
        inventory[i] = other.inventory[i]->clone();
}

MateriaSource &MateriaSource::operator=(MateriaSource const& rhs) {
    
    if (this == &rhs)
        return *this;
    for (int i = 0; i < 4; ++i)
        inventory[i] = rhs.inventory[i]->clone();
    return *this;
}

void MateriaSource::learnMateria(AMateria* a) {

    for (int i = 0; i < 4; ++i) {

        if (inventory[i]) {

            inventory[i] = a;
            return ;
        }
    }
}

AMateria* MateriaSource::createMateria(const std::string& type) {
    
    if (type == "ice" || type == "cure") {

        for (int i = 0; i < 4; ++i) {

            if (inventory[i] && inventory[i]->getType() == type)
                return (inventory[i]->clone());
        }
    }
    return 0;
}