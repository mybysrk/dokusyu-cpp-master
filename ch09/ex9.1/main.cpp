#include <iostream>
#include <string>

template <typename T>
T id(T value)
{
    return value;
}

int main()
{
    std::cout << id(42) << '\n';
    std::cout << id(3.14) << '\n';
    std::cout << id('A') << '\n';
    std::cout << id(std::string("hello")) << '\n';
}