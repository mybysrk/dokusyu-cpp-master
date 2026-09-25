#include <iostream>
#include <string>

int main()
{
    std::string s;

    do {
        std::cout << "Enterを押してください> ";
        std::getline(std::cin, s);
    } while (s != "");
}
