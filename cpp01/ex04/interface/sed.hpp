/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 07:13:21 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/15 11:22:50 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SED_HPP
# define SED_HPP

# include <iostream>
# include <fstream>
# include <fcntl.h>
# include <unistd.h>
# include <cstdio>

int sed( const char* file, const char* str, const char* str2 );

#endif