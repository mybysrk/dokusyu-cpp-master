#include <iostream>

int sum(int lhs, int rhs);

int main()
{
    std::cout << sum(10,5) << std::endl;
}

int sum(int lhs, int rhs)
{
    return lhs + rhs;
}