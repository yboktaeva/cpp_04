/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:59:40 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/10 17:09:26 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main() {

    //const Animal* x = new Animal();
    const Animal* meta[4];
    
    for (int i = 0; i < 2; ++i)
        meta[i] = new Cat();
        
    for (int i = 2; i < 4; ++i)
        meta[i] = new Dog();
        
    for (int i = 0; i < 4; ++i)
        meta[i]->makeSound();
        
    for (int i = 0; i < 4; ++i)
        delete meta[i];
        
    return 0;
}