/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:04:06 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/10 15:48:44 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat: virtual public Animal {

public:
    Cat();
    ~Cat();
    
    Cat(Cat const& src);
    Cat& operator=(Cat const& rhs);
    
    virtual void makeSound() const;
};

#endif