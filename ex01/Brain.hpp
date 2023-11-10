/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:00:40 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/10 19:10:39 by yuboktae         ###   ########.fr       */
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
    
    Brain(Brain const &src);
    Brain& operator=(Brain const &rhs);
    void setIdeas(std::string const& idea);
    void printIdeas();
};

#endif