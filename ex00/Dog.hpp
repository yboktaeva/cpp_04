/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuliaboktaeva <yuliaboktaeva@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:04:28 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/12 20:04:29 by yuliaboktae      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog: virtual public Animal {

public:
    Dog();
    ~Dog();
    
    Dog(Dog const& other);
    Dog& operator=(Dog const& rhs);
    
    virtual void makeSound() const;
};

#endif