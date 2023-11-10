/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:07:22 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/10 16:25:00 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {

    std::cout << "Default constructor called for Brain" << std::endl;
}

Brain::~Brain() {

    std::cout << "Brain is destructed" << std::endl;        
}

Brain::Brain(Brain const &src) {

    *this = src;
	std::cout << "Brain copy is constructed via Copy constructor" << std::endl;
}

Brain &Brain::operator=(Brain const &rhs) {
	
	if (this == &rhs)
		return (*this);
    
	std::cout << "Brain: assignment operator called" << std::endl;
    
	return (*this);
}