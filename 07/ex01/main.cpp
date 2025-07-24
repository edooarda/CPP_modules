#include "iter.hpp"

template <typename T>
void print(const T& value)
{
    std::cout << "Element: "<< value << std::endl;
}

template <typename T>
void increase(T& elem)
{
    ++elem;
}

int main()
{
    std::cout << "String" << std::endl;
    std::string arr_str[] = {"Bulba", "Sauro", "Pika", "Chu"};
    ::iter(arr_str, (sizeof(arr_str)/ sizeof(arr_str[0])), print<std::string>);

    std::cout << "\nInt" << std::endl;
    int arr_int[] = {1, 2, 3 };
    std::cout << "Before increase" << std::endl;
    ::iter(arr_int, (sizeof(arr_int)/ sizeof(arr_int[0])), print<int>);
    ::iter(arr_int, (sizeof(arr_int)/ sizeof(arr_int[0])), increase<int>);
    std::cout << "After increase" << std::endl;
    ::iter(arr_int, (sizeof(arr_int)/ sizeof(arr_int[0])), print<int>);

    std::cout << "\nCharm!" << std::endl;
    char arr_char[] = { 'H', 'E', 'L', 'P'};
    ::iter(arr_char, (sizeof(arr_char)/ sizeof(arr_char[0])), print<char>);

    std::cout << "\nFloat" << std::endl;
    float arr_float[] = { 1.5f, 8.6f, 7.7f, 42.f};
    std::cout << "Before increase" << std::endl;
    ::iter(arr_float, (sizeof(arr_float)/ sizeof(arr_float[0])), print<float>);
    ::iter(arr_float, (sizeof(arr_float)/ sizeof(arr_float[0])), increase<float>);
    std::cout << "After increase" << std::endl;
    ::iter(arr_float, (sizeof(arr_float)/ sizeof(arr_float[0])), print<float>);

    std::cout << "\nConst Int" << std::endl;
    const int arr_int1[] = {3, 2, 1};
    ::iter(arr_int1, (sizeof(arr_int1)/ sizeof(arr_int1[0])), print<int>);
}