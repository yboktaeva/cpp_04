/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:04:06 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/13 16:26:32 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: virtual public Animal {

private:
    Brain* _brain;

public:
    Cat();
    virtual ~Cat();
    
    Cat(Cat const& other);
    Cat& operator=(Cat const& rhs);
    void setIdea(std::string idea);
    std::string getIdea() const;
    virtual void makeSound() const;
};

#endif