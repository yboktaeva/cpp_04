/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:59:40 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/10 19:16:20 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	// const Animal* meta[4];

	// for (int i = 0; i < 2; ++i)
	//     meta[i] = new Cat();

	// for (int i = 2; i < 4; ++i)
	//     meta[i] = new Dog();

	// for (int i = 0; i < 4; ++i)
	//     meta[i]->makeSound();

	// for (int i = 0; i < 4; ++i)
	//     delete meta[i];
	// const Animal *j = new Cat();
	// const Animal *i = new Dog();
	// const Animal *k = new Cat(*j);
	//i = j;
	//std::cout << i->getType() << std::endl;
	// delete i;
	// delete j;
	Cat *cat1 = new Cat();
	Cat *copy = new Cat(*cat1);
    
	copy->makeSound();
	delete cat1;
	delete copy;
	return (0);
}