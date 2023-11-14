/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 17:33:11 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/14 15:11:57 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class ICharacter;

class AMateria {
protected:
    std::string type;

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