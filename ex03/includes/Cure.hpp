/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:45:42 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/15 17:57:57 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure: public AMateria {
public:
    Cure();
    ~Cure();
    Cure(Cure const& other);
    Cure& operator=(Cure const& rhs);
    
    virtual void use(ICharacter& target);
    virtual AMateria* clone() const;
    
};

#endif