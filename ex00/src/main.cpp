/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:03:11 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/16 16:13:12 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main() {
    std::cout << "__________________________________________" << std::endl;
	std::cout << "__________________TEST1___________________" << std::endl;
    
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << "__________________________________________" << std::endl;
    std::cout << "__________________________________________" << std::endl;
    
    std::cout << meta->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    std::cout << "__________________________________________" << std::endl;
    std::cout << "__________________________________________" << std::endl;
    
    delete meta, delete j, delete i;
    
    std::cout << "__________________________________________" << std::endl;
	std::cout << "__________________TEST2___________________" << std::endl;
    
    Cat* k = new Cat();
    Cat* n = new Cat(*k);
    std::cout << "__________________________________________" << std::endl;
    std::cout << "__________________________________________" << std::endl;
    
    std::cout << k->getType() << " " << std::endl;
    std::cout << n->getType() << " " << std::endl;
    k->makeSound();
    n->makeSound();
    std::cout << "__________________________________________" << std::endl;
    std::cout << "__________________________________________" << std::endl;
    
    delete k, delete n;

    std::cout << "__________________________________________" << std::endl;
	std::cout << "__________________TEST3___________________" << std::endl;
    
    const WrongAnimal* wanimal = new WrongAnimal();
    const WrongAnimal* wcat = new WrongCat();
    std::cout << "__________________________________________" << std::endl;
    std::cout << "__________________________________________" << std::endl;

    std::cout << wanimal->getType() << " " << std::endl;
    std::cout << wcat->getType() << " " << std::endl;
    wanimal->makeSound();
    wcat->makeSound();
    std::cout << "__________________________________________" << std::endl;
    std::cout << "__________________________________________" << std::endl;

    delete wanimal, delete wcat;
    
    return 0;
}