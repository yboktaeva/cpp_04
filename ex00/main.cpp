/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:03:11 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/13 18:28:13 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main() {
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << "__________________________________________" << std::endl;
    std::cout << "__________________________________________" << std::endl;
    
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    std::cout << "__________________________________________" << std::endl;
    std::cout << "__________________________________________" << std::endl;

    delete meta, delete j, delete i;
    std::cout << "__________________________________________" << std::endl;
    std::cout << "__________________________________________" << std::endl;
    
    const WrongAnimal* wanimal = new WrongAnimal();
    const WrongAnimal* wcat = new WrongCat();
    std::cout << "__________________________________________" << std::endl;
    std::cout << "__________________________________________" << std::endl;

    std::cout << wcat->getType() << " " << std::endl;
    wcat->makeSound();
    wanimal->makeSound();
    std::cout << "__________________________________________" << std::endl;
    std::cout << "__________________________________________" << std::endl;

    delete wanimal, delete wcat;
    
    return 0;
}