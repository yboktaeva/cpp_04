/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuliaboktaeva <yuliaboktaeva@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 21:53:45 by yuliaboktae       #+#    #+#             */
/*   Updated: 2023/11/12 22:57:02 by yuliaboktae      ###   ########.fr       */
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
    
    void learnMateria(AMateria* a);
    AMateria* createMateria(std::string const& type);

};

#endif