/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuliaboktaeva <yuliaboktaeva@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:03:42 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/12 20:02:02 by yuliaboktae      ###   ########.fr       */
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
    Animal(const std::string name);
    virtual ~Animal();
    
    Animal(Animal const& other);
    Animal& operator=(Animal const& rhs);
    const std::string &getType() const;
    
    virtual void makeSound() const;
};

#endif