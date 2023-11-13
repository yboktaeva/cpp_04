/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:04:28 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/13 16:29:46 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog: virtual public Animal {

private:
    Brain* _brain;

public:
    Dog();
    virtual ~Dog();
    
    Dog(Dog const& other);
    Dog& operator=(Dog const& rhs);
    void setIdea(std::string idea);
    std::string getIdea() const;
    virtual void makeSound() const;
};

#endif