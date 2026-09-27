#include <iostream>

void print_value(int& x)
{
    std::cout << "lvalue 引数: " << x << '\n';
}

void print_value(int&& x)
{
    std::cout << "rvalue 引数: " << x << '\n';
}

int main()
{
    int a = 10;
    print_value(a);  // lvalue
    print_value(20); // rvalue
}