/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 19:10:06 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/15 18:27:54 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {
    for (int i = 0; i < 4; ++i)
        inventory[i] = NULL;
}

Character::Character(std::string name): name(name) {
    for (int i = 0; i < 4; ++i)
        inventory[i] = NULL;
}

Character::~Character() {
    for (int i = 0; i < 4; ++i)
        delete inventory[i];
}

Character::Character(Character const& other) {
    name = other.name;
    for (int i = 0; i < 4; ++i)
        inventory[i] = other.inventory[i]->clone();
}

Character& Character::operator=(Character const& rhs) {
    if (this == &rhs)
        return *this;
    for (int i = 0; i < 4; ++i) {
        if (this->inventory[i])
            delete this->inventory[i];
        if (rhs.inventory[i])
            this->inventory[i] = rhs.inventory[i]->clone();
    }
    return *this;
}

void Character::equip(AMateria* m) {
    if (!m) {
        std::cout << "No materia, nothing to take" << std::endl;
        return ;
    }
    for (int i = 0; i < 4; ++i) {
        if (inventory[i] == m) {
            std::cout << name << " already has " << m->getType() << std::endl;
            return ;
        }
    }
    int i;
    for ( i = 0; i < 4; ++i) {
        if (!inventory[i]) {
            inventory[i] = m;
            std::cout << name << " has taken " << m->getType() << std::endl;
            return ;
        }
    }
    if (i == 4)
        {
            delete (m);
            std::cout <<"No slot available to add" << std::endl;
        }
}

void Character::unequip(int idx) {
    if (idx < 4 && idx > 0 && inventory[idx])
        inventory[idx] = NULL;
    // else
    //     std::cout << "Cannot unequip player. The Materia does not exist!" << std::endl;
}

void Character::use(int idx, ICharacter& target) {
    if (inventory[idx] && idx < 4)
        inventory[idx]->use(target);
    // else
    //     std::cout << "No more Materia! You need to equip your player!" << std::endl;
}

std::string const& Character::getName() const {
    return this->name;
}