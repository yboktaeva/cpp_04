/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:59:40 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/15 19:48:26 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main() {

    std::cout << "__________________________________________" << std::endl;
	std::cout << "__________________TESTS___________________" << std::endl;
    //const Animal* x = new Animal();
	const Animal* j = new Dog();
    const Animal* i = new Cat();
	std::cout << "__________________________________________" << std::endl;
	std::cout << "__________________________________________" << std::endl;

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    j->makeSound();
    i->makeSound();
	std::cout << "__________________________________________" << std::endl;
    std::cout << "__________________________________________" << std::endl;

	dynamic_cast<Cat*>(const_cast<Animal*>(i))->setIdea("I hate the dogs!", 0);
    dynamic_cast<Dog*>(const_cast<Animal*>(j))->setIdea("I hate the cats!", 0);
	dynamic_cast<Dog*>(const_cast<Animal*>(j))->setIdea("I'm hungry!", 1);

    std::cout << BLUE << dynamic_cast<Cat*>(const_cast<Animal*>(i))->getIdea(0) << RESET << std::endl;
    std::cout << BLUE << dynamic_cast<Dog*>(const_cast<Animal*>(j))->getIdea(0) << RESET << std::endl;
	std::cout << BLUE << dynamic_cast<Dog*>(const_cast<Animal*>(j))->getIdea(1) << RESET << std::endl;
	std::cout << "__________________________________________" << std::endl;
    std::cout << "__________________________________________" << std::endl;
	
	const Animal* k = new Dog(*dynamic_cast<const Dog*>(j));
	std::cout << k->getType() << " " << std::endl;
    std::cout << BLUE << dynamic_cast<Dog*>(const_cast<Animal*>(k))->getIdea(0) << RESET << std::endl;
	std::cout << BLUE << dynamic_cast<Dog*>(const_cast<Animal*>(k))->getIdea(1) << RESET << std::endl;
	std::cout << "__________________________________________" << std::endl;
    std::cout << "__________________________________________" << std::endl;

	const Animal* meta[4];
	
	for (int i = 0; i < 4; i++) {
		if (i < 2)
			meta[i] = new Cat();
		else
			meta[i] = new Dog();
	}
	std::cout << "__________________________________________" << std::endl;
    std::cout << "__________________________________________" << std::endl;
	
	delete i, delete j;
	std::cout << "__________________________________________" << std::endl;
    std::cout << "__________________________________________" << std::endl;

	
	for (int i = 0; i < 4; ++i)
		delete meta[i];
        
    return 0;
}