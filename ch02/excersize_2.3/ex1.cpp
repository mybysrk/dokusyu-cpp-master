#include <iostream>

int main()
{
    int i = 0;
    int& reference_j = i;
    reference_j = 42;
    std::cout << i << std::endl;
}