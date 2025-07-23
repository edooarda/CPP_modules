#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main()
{
    // srand(time(nullptr));
    std::cout << "POINTERS\n" << std::endl;
    for (int i = 0; i < 5; ++i)
    {
        Base *pointer = generate();
        identify(pointer);
        delete pointer;
    }
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
    std::cout << "REFERENCE\n" << std::endl;
    for (int i = 0; i < 5; ++i)
    {
        Base *ptr = generate();
        identify(*ptr);
        delete ptr;
    }
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;

    Base    *wrong_input = nullptr;

    identify(wrong_input);
}