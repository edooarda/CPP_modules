#include "Span.hpp"

std::vector<unsigned int> randomVectorCreator(int count) {
    std::vector<unsigned int> vec;
    for (int i = 0; i < count; ++i) {
        vec.push_back(rand() % count);
    }
    return vec;
}

int main()
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    // sp.printer();

    // try{
    //     sp.addNumber(112);
    // }catch (std::exception &e)
    // {
    //     std::cout << "Exception: " << e.what() << std::endl;
    // }
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    std::cout << "\n=====================================================\n" << std::endl;

    Span test(0);
    try {
        test.addNumber(6);
        // test.printer();
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    try {
        std::cout << test.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    try {
        std::cout << test.shortestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=====================================================\n" << std::endl;
    Span bigset(10000);
    auto new_vec = randomVectorCreator(10000);
    try {
        bigset.addRange(new_vec);
        bigset.printer();
        std::cout << bigset.longestSpan() << std::endl;
        std::cout << bigset.shortestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    return 0;
}