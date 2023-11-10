/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:04:28 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/10 15:48:55 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog: virtual public Animal {

public:
    Dog();
    ~Dog();
    
    Dog(Dog const& src);
    Dog& operator=(Dog const& rhs);
    
    virtual void makeSound() const;
};

#endif