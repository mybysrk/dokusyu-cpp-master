#include <iostream>

float sum(float a, float b, float c)
{
    float d = a + b + c;
    return d;
}

int main()
{
    std::cout << "sum(5,1,-2):" << sum(5,1,-2) << std::endl;
}