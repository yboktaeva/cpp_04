/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 23:17:05 by yuliaboktae       #+#    #+#             */
/*   Updated: 2023/11/15 17:57:49 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice: public AMateria {
public:
    Ice();
    ~Ice();
    Ice(Ice const& other);
    Ice& operator=(Ice const& rhs);
    
    virtual void use(ICharacter& target);
    virtual AMateria* clone() const;
};

#endif