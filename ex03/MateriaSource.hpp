/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 21:53:45 by yuliaboktae       #+#    #+#             */
/*   Updated: 2023/11/13 16:32:21 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource {
    
protected:
    AMateria *inventory[4];
public:
    MateriaSource();
    ~MateriaSource();
    MateriaSource(MateriaSource const& other);
    MateriaSource& operator=(MateriaSource const& rhs);
    
    void learnMateria(AMateria* m);
    AMateria* createMateria(std::string const& type);

};

#endif