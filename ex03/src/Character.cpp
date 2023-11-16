/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 19:10:06 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/16 14:46:56 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {
    floorSize = 0;
    floor = NULL;
    for (int i = 0; i < 4; ++i)
        inventory[i] = NULL;
}

Character::Character(std::string name): name(name) {
    floorSize = 0;
    floor = NULL;
    for (int i = 0; i < 4; ++i)
        inventory[i] = NULL;
}

Character::~Character() {
    for (int i = 0; i < 4; ++i)
        delete inventory[i];
    if (floor != NULL) {
        for (int i = 0; i < floorSize; i++)
            delete floor[i];
        delete[] floor;
    }
}

Character::Character(Character const& other) {
    floorSize = other.floorSize;
    maxFloorSize = other.maxFloorSize;
    if (other.floor) {
        for (int i = 0; i < other.floorSize; ++i)
            floor[floorSize] = other.floor[other.floorSize];
    }
    name = other.name;
    for (int i = 0; i < 4; ++i)
        inventory[i] = other.inventory[i]->clone();
}

Character& Character::operator=(Character const& rhs) {
    if (this == &rhs)
        return *this;
    this->floorSize = rhs.floorSize;
    this->maxFloorSize = rhs.maxFloorSize;
    if (this->floor) {
        for (int i = 0; i < floorSize; ++i)
            delete floor[floorSize];
    }
    for (int i = 0; i < rhs.floorSize; ++i)
        floor[floorSize] = rhs.floor[rhs.floorSize];
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
        std::cout << GREEN << "No materia, nothing to take" << RESET << std::endl;
        return ;
    }
    for (int i = 0; i < 4; ++i) {
        if (inventory[i] == m) {
            std::cout << GREEN << name << " already has " << m->getType()  << RESET << std::endl;
            return ;
        }
    }
    int i;
    for (i = 0; i < 4; ++i) {
        if (!inventory[i]) {
            inventory[i] = m;
            std::cout << GREEN << name << " has taken " << m->getType()  << RESET << std::endl;
            return ;
        }
    }
    if (i == 4)
        {
            delete (m);
            std::cout << GREEN <<"No slot avaliable to add"  << RESET << std::endl;
        }
}

void Character::unequip(int idx) {
    if (idx < 4 && idx >= 0 && inventory[idx]) {
        if (floor == NULL) {
            floor = new AMateria*[1];
            maxFloorSize = 1;
        }
        else if (floorSize >= maxFloorSize) {
            AMateria** tmp = new AMateria*[maxFloorSize * 2];
            for (int i = 0; i < maxFloorSize; i++) {
                tmp[i] = floor[i];
            }
            delete[] floor;
            floor = tmp;
            maxFloorSize *=2;
        }
        floor[floorSize] = inventory[idx];
        floorSize++;
        inventory[idx] = NULL;
    }
    else
        std::cout << GREEN << "Cannot unequip player. The Materia does not exist!" << RESET  << std::endl;
}

void Character::use(int idx, ICharacter& target) {
    if (inventory[idx] && idx < 4)
        inventory[idx]->use(target);
    else if (inventory[idx] == NULL)
        std::cout << GREEN << "No Materia at the slot " << idx << "! Choose other slot"<< RESET << std::endl;
    else if (idx >= 4)
        std::cout << GREEN << "Choose slot between 0 and 3" << RESET << std::endl;
}

std::string const& Character::getName() const {
    return this->name;
}