#include "Serializer.hpp"
#include "Data.hpp"

int main()
{
    Data old_data;
    Data *new_data = nullptr;
    uintptr_t temp_ptr;

    old_data.value = 42;

    std::cout << "This is the address of data: " << &old_data << std::endl;
    std::cout << "This is the value in data: " << old_data.value << std::endl;
    std::cout << "This is the value of uintptr BEFORE serialize: " << temp_ptr << std::endl;

    temp_ptr = Serializer::serialize(&old_data);

    std::cout << "This is the address of uintptr after serialize: " << &temp_ptr << std::endl;
    std::cout << "This is the value of uintptr after serialize: " << temp_ptr << std::endl;

    std::cout << "This is the address of NEW data: " << new_data << std::endl;

    new_data = Serializer::deserialize(temp_ptr);

    std::cout << "This is the address of NEW data after deserialize: " << new_data << std::endl;
    std::cout << "This is the value in NEW data: " << new_data->value << std::endl;

    std::cout << "-------------------------" << std::endl;
    // Using memory

    Data *old_data1 = new Data();
    Data *new_data1 = nullptr;
    uintptr_t temp_ptr1;

    old_data1->value = 42;

    std::cout << "This is the address of data: " << old_data1 << std::endl;
    std::cout << "This is the value in data: " << old_data1->value << std::endl;
    std::cout << "This is the value of uintptr BEFORE serialize: " << temp_ptr1 << std::endl;

    temp_ptr1 = Serializer::serialize(old_data1);

    std::cout << "This is the address of uintptr after serialize: " << &temp_ptr1 << std::endl;
    std::cout << "This is the value of uintptr after serialize: " << temp_ptr1 << std::endl;

    std::cout << "This is the address of NEW data: " << new_data1 << std::endl;

    new_data1 = Serializer::deserialize(temp_ptr1);

    std::cout << "This is the address of NEW data after deserialize: " << new_data1 << std::endl;
    std::cout << "This is the value in NEW data: " << new_data1->value << std::endl;

    old_data1->value = 777;
    std::cout << "This is the value in NEW data, after change in old_data: " << new_data1->value << std::endl;

    delete old_data1;
}