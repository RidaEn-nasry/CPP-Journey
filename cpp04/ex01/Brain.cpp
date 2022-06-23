/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 11:50:48 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/23 16:15:02 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Brain.hpp>

Brain::Brain() {
    std::cout << "Brain default constrcutor called" << std::endl;
}

Brain::~Brain() {
    std::cout << "Brain default destructor called " << std::endl;
}

Brain::Brain(const Brain& other) {
    *this = other;
}

Brain& Brain::operator=(const Brain& rhs) {
    // int size = (sizeof(rhs._ideas) / sizeof(rhs._ideas[0]));
    if (this != &rhs)
        for (int i = 0; i < 100; i++)
            this->_ideas[i] = rhs._ideas[i];
    return *this;
}


