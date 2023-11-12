/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuliaboktaeva <yuliaboktaeva@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:04:06 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/12 21:13:22 by yuliaboktae      ###   ########.fr       */
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
    ~Cat();
    
    Cat(Cat const& other);
    Cat& operator=(Cat const& rhs);
    void setIdea(std::string idea);
    std::string getIdea() const;
    virtual void makeSound() const;
};

#endif