#include <iostream>
#include <string>

int main()
{
    std::string string = "abc\0de";
    std::cout << string << std::endl;
}