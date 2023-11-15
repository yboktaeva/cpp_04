/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 19:03:51 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/15 18:30:13 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

int main() {
    std::cout << "__________________________________________" << std::endl;
	std::cout << "__________________TESTS___________________" << std::endl;
    
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    
    delete bob;
    delete me;
    delete src;
    
    std::cout << "__________________________________________" << std::endl;
	std::cout << "__________________________________________" << std::endl;
    
    IMateriaSource* src1 = new MateriaSource();
    src1->learnMateria(new Ice());
    src1->learnMateria(new Ice());
    src1->learnMateria(new Cure());
    src1->learnMateria(new Cure());
    ICharacter* john = new Character("john");
    AMateria* temp;
    AMateria* temp1;
    
    temp = src1->createMateria("ice");
    john->equip(temp);
    temp = src1->createMateria("cure");
    john->equip(temp);
    temp = src1->createMateria("ice");
    john->equip(temp);
    
    ICharacter* jeck = new Character("jeck");
    Character *test = new Character("test");
    ICharacter* test_copy = new Character(*test);
    john->use(0, *jeck);
    john->use(1, *jeck);
    
    std::cout << "__________________________________________" << std::endl;
	std::cout << "__________________________________________" << std::endl;
    
    temp1 = src1->createMateria("ice");
    jeck->equip(temp1);
    temp1 = src1->createMateria("ice");
    jeck->equip(temp1);
    temp1 = src1->createMateria("ice");
    jeck->equip(temp1);
    temp1 = src1->createMateria("cure");
    jeck->equip(temp1);
    temp1 = src1->createMateria("cure");
    jeck->equip(temp1);
    jeck->unequip(4);

    jeck->use(0, *john);
    jeck->use(1, *john);
    jeck->use(2, *john);
    jeck->use(3, *john);
    jeck->use(4, *john);
    
    // std::cout << "TEST COPY" <<std::endl;
    // temp1 = src1->createMateria("ice");
    // test->equip(temp1);
    // test->use(0, *jeck);
    
    
    delete jeck;
    delete john;
    delete src1;
   
    return 0;
}
