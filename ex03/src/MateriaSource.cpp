/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 22:40:20 by yuliaboktae       #+#    #+#             */
/*   Updated: 2023/11/16 14:31:08 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    materiaCount = 0;
    for (int i = 0; i < 4; ++i)
        inventory[i] = 0;
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
        std::cout << GREEN << "No materia, nothing to learn!" << RESET << std::endl;
        return ;
    }
    if (materiaCount >= 4) {
        std::cout << GREEN << "Cannot learn Materia! No more place" << RESET << std::endl;
        return ;
    }
    for (int i = 0; i < 4; ++i) {
        if (inventory[i] != NULL && (m->getType() == inventory[i]->getType())) {
            std::cout << GREEN << "Materia " << m->getType() << " already exist!" << RESET << std::endl;
            delete m;
            return ;
        }
    }
    inventory[materiaCount] = m;
    materiaCount++;
}

AMateria* MateriaSource::createMateria(const std::string& type) {
    for (int i = 0; i < materiaCount; ++i) {
        if (inventory[i] && inventory[i]->getType() == type)
            return (inventory[i]->clone());
    }
    std::cout << GREEN << "Unknown Materia " << type << ". Cannot create it!" << RESET << std::endl; 
    return 0;
}