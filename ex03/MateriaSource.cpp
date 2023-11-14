/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 22:40:20 by yuliaboktae       #+#    #+#             */
/*   Updated: 2023/11/14 19:01:28 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    materiaCount = 0;
    for (int i = 0; i < 4; ++i)
        inventory[i] = NULL;
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < materiaCount; ++i) {
        if (inventory[i])
            delete inventory[i];
    }
}

MateriaSource::MateriaSource(MateriaSource const& other) {
    materiaCount = other.materiaCount;
    for (int i = 0; i < 4; ++i)
        inventory[i] = other.inventory[i]->clone();
}

MateriaSource &MateriaSource::operator=(MateriaSource const& rhs) {
    if (this == &rhs)
        return *this;
    this->materiaCount = rhs.materiaCount;
    for (int i = 0; i < 4; ++i)
        inventory[i] = rhs.inventory[i]->clone();
    return *this;
}

void MateriaSource::learnMateria(AMateria* m) {
    if (!m) {
        std::cout << "No materia, nothing to learn" << std::endl;
        return ;
    }
    if (materiaCount >= 4) {
        std::cout << "Too much materia!" << std::endl;
        return ;
    }
    for (int i = 0; i < materiaCount; ++i) {
        if (m->getType() == inventory[i]->getType()) {
            std::cout << "Materia " << m->getType() << " already exist" << std::endl;
            delete m;
            return ;
        }
        inventory[materiaCount] = m;
        materiaCount++;
    }
}

AMateria* MateriaSource::createMateria(const std::string& type) {
    if (type == "ice" || type == "cure") {
        for (int i = 0; i < materiaCount; ++i) {
            if (inventory[i] && inventory[i]->getType() == type)
                return (inventory[i]->clone());
        }
    }
    std::cout << "Unknown Materia " << type << ". Cannot create it" << std::endl; 
    return 0;
}