/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuliaboktaeva <yuliaboktaeva@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:27:28 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/12 20:43:29 by yuliaboktae      ###   ########.fr       */
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
    WrongAnimal(const std::string name);
    ~WrongAnimal();
    
    WrongAnimal(WrongAnimal const& other);
    WrongAnimal& operator=(WrongAnimal const& rhs);
    const std::string& getType() const;
    
    void makeSound() const;
};

#endif