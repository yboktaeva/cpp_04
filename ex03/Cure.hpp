/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:45:42 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/13 18:47:44 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure: virtual AMateria {
public:
    Cure();
    ~Cure();
    Cure(Cure const& other);
    Cure& operator=(Cure const& rhs);
    
    virtual void use(ICharacter& target);
    virtual AMateria* clone() const;
    
};

#endif