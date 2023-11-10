/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:27:28 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/10 15:42:56 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal {

protected:
    std::string type;
    
public:
    WrongAnimal();
    ~WrongAnimal();
    
    WrongAnimal(WrongAnimal const& src);
    WrongAnimal& operator=(WrongAnimal const& rhs);
    std::string getType() const;
    
    void makeSound() const;
};

#endif