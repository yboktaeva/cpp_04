/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:03:42 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/16 14:54:42 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# define BLUE "\033[1;34m"
# define GREEN "\033[1;32m"
# define RESET "\033[0m"

# include <iostream>
# include <string>

class Animal {

protected:
    std::string type;
    
public:
    Animal();
    Animal(const std::string name);
    virtual ~Animal();
    
    Animal(Animal const& other);
    Animal& operator=(Animal const& rhs);
    const std::string &getType() const;
    
    virtual void makeSound() const;
};

#endif