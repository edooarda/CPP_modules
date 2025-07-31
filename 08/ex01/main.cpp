#include "Span.hpp"

int main()
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    sp.printer();

    try{
        sp.addNumber(112);
    }catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    // std::cout << sp.shortestSpan() << std::endl;
    // std::cout << sp.longestSpan() << std::endl;
    return 0;
}