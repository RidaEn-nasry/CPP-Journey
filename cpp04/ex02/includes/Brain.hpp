/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 11:47:23 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/23 11:55:12 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class   Brain { 
    public:
        Brain();
        ~Brain();
        Brain(const Brain& other);
        Brain& operator=(const Brain& rhs);
    private:
        std::string _ideas[100];
};

#endif
