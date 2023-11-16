/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:00:40 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/16 15:03:27 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# define BLUE "\033[1;34m"
# define GREEN "\033[1;32m"
# define RESET "\033[0m"

# include <string>
# include <iostream>

class Brain {

private:
    std::string _ideas[100];
    int idx;
public:
    Brain();
    ~Brain();
    
    Brain(Brain const &other);
    Brain& operator=(Brain const &rhs);
    void setIdea(std::string idea, int idx);
    std::string getIdea(int idx) const;
};

#endif