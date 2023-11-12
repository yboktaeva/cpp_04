/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuliaboktaeva <yuliaboktaeva@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:00:40 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/12 21:31:46 by yuliaboktae      ###   ########.fr       */
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
    void printIdeas();
};

#endif