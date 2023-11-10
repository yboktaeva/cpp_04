/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:31:55 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/10 15:48:34 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {

public:
    WrongCat();
    ~WrongCat();
    
    WrongCat(WrongCat const& src);
    WrongCat& operator=(WrongCat const& rhs);
    
    void makeSound() const;
};

#endif