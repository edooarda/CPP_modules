#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base()
{

}

Base * generate(void)
{
    srand(clock());
    int randomNum = rand() % 3;
    switch (randomNum)
    {
    case 0:
        std::cout << "  Created Class A" << std::endl;
        return new A;
    case 1:
        std::cout << "  Created Class B" << std::endl;
        return new B;
    case 2:
        std::cout << "  Created Class C" << std::endl;
        return new C;
    default:
        std::cout << "No Class Available" << std::endl;
        return nullptr;
    }
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p) != nullptr){
        std::cout << YELLOW << "It is a Class A" << RESET << std::endl;
    }
    else if (dynamic_cast<B*>(p) != nullptr){
        std::cout << GREEN << "It is a Class B" << RESET << std::endl;
    }
    else if (dynamic_cast<C*>(p) != nullptr){
        std::cout << CYAN << "It is a Class C" << RESET << std::endl;
    }
    else
        std::cout << RED << "It is unknow" << RESET << std::endl;
}

void identify(Base& p)
{
    try {
        (void)dynamic_cast<A&>(p);
        std::cout << YELLOW << "I am a Class A" << RESET << std::endl;
        return ;
    }
    catch(std::bad_cast& e){
        std::cout << "I am not a A, try next" << std::endl;
    }
    try {
        (void)dynamic_cast<B&>(p);
        std::cout << GREEN << "I am a Class B" << RESET << std::endl;
        return ;
    }
    catch(std::bad_cast& e){
        std::cout << "I am not a B, try next" << std::endl;
    }
    try {
        (void)dynamic_cast<C&>(p);
        std::cout << CYAN << "I am a Class C" << RESET << std::endl;
        return ;
    }
    catch(std::bad_cast& e){
        std::cout << "I am not a C, try next" << std::endl;
    }
    std::cout << RED << "I AM NO ONE! :(" << RESET << std::endl;
}