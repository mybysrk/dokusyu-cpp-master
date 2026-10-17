#include <iostream>

class Float
{
    double value;

public:
    Float(double value = 0.0) : value{ value } { }

    Float operator+(const Float& other) const
    {
        return Float{ value + other.value };
    }

    Float operator-(const Float& other) const
    {
        return Float{ value - other.value };
    }

    void show() const
    {
        std::cout << value << std::endl;
    }
};

int main()
{
    Float a{ 1.5 };
    Float b{ 2.25 };

    Float c = a + b;
    Float d = a - b;

    std::cout << "a = ";
    a.show();

    std::cout << "b = ";
    b.show();

    std::cout << "a + b = ";
    c.show();

    std::cout << "a - b = ";
    d.show();
}
