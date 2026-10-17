#include <iostream>

class C
{
    int a;

public:
    C(int value) : a{ value } { }
    void show_a()
    {
        [this]()
        {
            std::cout << "a == " << a << std::endl;
        }();
    }
};

int main()
{
    C c{ 42 };
    c.show_a();
}