/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:03:42 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/10 15:47:36 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal {

protected:
    std::string type;
    
public:
    Animal();
    virtual ~Animal();
    
    Animal(Animal const& src);
    Animal& operator=(Animal const& rhs);
    std::string getType() const;
    
    virtual void makeSound() const;
};

#endif