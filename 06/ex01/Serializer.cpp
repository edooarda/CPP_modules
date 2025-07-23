#include "Serializer.hpp"

Serializer::Serializer(){
    std::cout << "Constructor" << std::endl;
}

Serializer::~Serializer(){
    std::cout << "Destructor" << std::endl;
}

uintptr_t Serializer::serialize(Data* ptr){
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw){
    return reinterpret_cast<Data*>(raw);
}