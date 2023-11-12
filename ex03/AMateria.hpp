/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuliaboktaeva <yuliaboktaeva@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 17:33:11 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/12 22:50:15 by yuliaboktae      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class AMateria {
    
protected:
    std::string _type;

public:
    AMateria();
    virtual ~AMateria();
    
    AMateria(std::string const& type);
    AMateria(AMateria const& other);
    AMateria& operator=(AMateria const& rhs);

    std::string const& getType() const;
    
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
    
};

#endif