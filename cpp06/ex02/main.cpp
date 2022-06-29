/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ren-nasr <ren-nasr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 21:30:49 by ren-nasr          #+#    #+#             */
/*   Updated: 2022/06/29 21:42:08 by ren-nasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Base.hpp>

class   A : public Base {
};

class   B : public Base {
};

class   C : public Base {
};

class   D : public Base {
};

Base* generate(void) {
    srand(time(NULL));
    int n = rand() % 3;
    if (n == 0)
        return new A;
    if (n == 1)
        return new B;
    return new C;
}

void    identify(Base* p) {
    try {
        if (dynamic_cast<A*>(p))
            std::cout << "A" << std::endl;
        else if (dynamic_cast<B*>(p))
            std::cout << "B" << std::endl;
        else if (dynamic_cast<C*>(p))
            std::cout << "C" << std::endl;
        else
            throw std::exception();
    }
    catch (std::exception& e) {
        std::cout << "unknown" << std::endl;
    };
}

int main(void) {
    Base* p = generate();
    D* d = new D;
    identify(p);
    identify(d);
    return 0;
}



