/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:00:40 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/13 16:50:08 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

class Brain {

private:
    std::string _ideas[100];

public:
    Brain();
    ~Brain();
    
    Brain(Brain const &other);
    Brain& operator=(Brain const &rhs);
    void setIdea(std::string idea);
    std::string getIdea() const;
};

#endif