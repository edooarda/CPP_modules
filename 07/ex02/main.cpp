#include "Array.hpp"

int main()
{
    Array<std::string> str_arr(3);
    int size = str_arr.size();
    std::cout << "Number of elements: " << size << std::endl;
    try
    {
        // str_arr[-1] = "ERROR"; // to show exception
        str_arr[0] = "A";
        str_arr[1] = "B";
        str_arr[2] = "C";
        // str_arr[4] = "Error"; // to show exception

        for(int i = 0; i < size; ++i)
            std::cout << "Elements: " << str_arr[i] << std::endl;

    } catch(std::exception& e){
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    try {
        std::cout << "======================================" << std::endl;

        Array<std::string> cpystr(str_arr);

        for(unsigned int i = 0; i < str_arr.size(); ++i)
            std::cout << "Cpy Str value: " << cpystr[i] << std::endl;

    } catch(std::exception& e){
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    Array<int> int_arr(10);
    size = int_arr.size();

    std::cout << "======================================" << std::endl;

    std::cout << "Number of elements: " << size << std::endl;
    try{
        std::cout << "Array of ints" << std::endl;
        for(int i = 0; i < size; ++i)
            int_arr[i] = i + 1;

        for(int i = 0; i < size; ++i)
            std::cout << "Value of Array: " << int_arr[i] << std::endl;

    } catch(std::exception& e){
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    try {
        std::cout << "======================================" << std::endl;

        Array<int> cpyarr;
        cpyarr = int_arr;

        for(int i = 0; i < size; ++i)
            std::cout << "Cpy Array value: " << cpyarr[i] << std::endl;

    } catch(std::exception& e){
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}