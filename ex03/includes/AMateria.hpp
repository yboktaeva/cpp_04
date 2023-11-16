/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 17:33:11 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/16 14:27:04 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# define BLUE "\033[1;34m"
# define GREEN "\033[1;32m"
# define RESET "\033[0m"

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