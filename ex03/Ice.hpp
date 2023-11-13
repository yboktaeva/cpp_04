/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 23:17:05 by yuliaboktae       #+#    #+#             */
/*   Updated: 2023/11/13 18:48:00 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice: virtual AMateria {
public:
    Ice();
    ~Ice();
    Ice(Ice const& other);
    Ice& operator=(Ice const& rhs);
    
    virtual void use(ICharacter& target);
    virtual AMateria* clone() const;
};
#endif