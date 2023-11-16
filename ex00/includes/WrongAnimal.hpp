/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:27:28 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/16 14:55:14 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# define BLUE "\033[1;34m"
# define GREEN "\033[1;32m"
# define RESET "\033[0m"

# include <iostream>
# include <string>

class WrongAnimal {

protected:
    std::string type;
    
public:
    WrongAnimal();
    WrongAnimal(const std::string name);
    ~WrongAnimal();
    
    WrongAnimal(WrongAnimal const& other);
    WrongAnimal& operator=(WrongAnimal const& rhs);
    const std::string& getType() const;
    
    void makeSound() const;
};

#endif