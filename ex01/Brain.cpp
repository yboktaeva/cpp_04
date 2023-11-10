/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:07:22 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/10 19:02:20 by yuboktae         ###   ########.fr       */
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

	if (this != &src) {
		
		for (int i = 0; i < 100; ++i)
			_ideas[i] = src._ideas[i];
	}
	std::cout << "Brain copy is constructed via Copy constructor" << std::endl;
}

Brain &Brain::operator=(Brain const &rhs) {
	
	if (this == &rhs)
		return (*this);
    for (int i = 0; i < 100; ++i)
		_ideas[i] = rhs._ideas[i];
	std::cout << "Brain: assignment operator called" << std::endl;
    
	return (*this);
}

void Brain::setIdeas(std::string const& idea) {

	for (int i = 0; i < 100; ++i)
		_ideas[i] = idea;
}

