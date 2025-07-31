#include "easyfind.hpp"

template <typename T>
void print_container(const T& container)
{
    for (auto it = container.begin(); it != container.end(); ++it)
    {
        std::cout << "This is it: " << *it << std::endl;
    }
}

int main()
{
    std::vector<int> test1 = {42, 7, 3, 12};
    std::cout << "Vector" << std::endl;
    // ::print_container(test1);
    try {
        ::easyfind(test1, 7);
    }
    catch (std::exception &e){
        std::cout << "Exception:" << e.what() << std::endl;
    }

    try {
        ::easyfind(test1, -2);
    }
    catch (std::exception &e){
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "========================================================" << std::endl;
    std::list<int> test2 = {42, 7, 3, 12};
    std::cout << "List" << std::endl;
    try {
        ::easyfind(test2, 7);
    }
    catch (std::exception &e){
        std::cout << "Exception:" << e.what() << std::endl;
    }

    try {
        ::easyfind(test2, -2);
    }
    catch (std::exception &e){
        std::cout << "Exception: " << e.what() << std::endl;
    }
    
    std::cout << "========================================================" << std::endl;
    std::deque<int> test3 = {42, 7, 3, 12};
    std::cout << "Deque" << std::endl;
    try {
        ::easyfind(test3, 7);
    }
    catch (std::exception &e){
        std::cout << "Exception:" << e.what() << std::endl;
    }

    try {
        ::easyfind(test3, -2);
    }
    catch (std::exception &e){
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "========================================================" << std::endl;
    std::vector<int> test4 = {};
    std::cout << "Empty Vector" << std::endl;
    try {
        ::easyfind(test4, 7);
    }
    catch (std::exception &e){
        std::cout << "Exception:" << e.what() << std::endl;
    }
}