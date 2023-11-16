/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 19:09:54 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/16 12:34:42 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character: public ICharacter {
private:
    AMateria* inventory[4];
    std::string name;
    AMateria** floor;
    int floorSize;
    int maxFloorSize;
public:
    Character();
    Character(std::string name);
    virtual ~Character();
    
    Character(Character const& other);
    Character& operator=(Character const &rhs);
    
    std::string const& getName() const;
    virtual void equip(AMateria* m);
    virtual void unequip(int idx);
    virtual void use(int idx, ICharacter& target);
};

#endif