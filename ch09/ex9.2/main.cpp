#include <iostream>
#include <string>

template <typename T>
class Box
{
    T value;

public:
    explicit Box(T value) : value(value) { }

    T get_value() const
    {
        return value;
    }
};

int main()
{
    Box<int> int_box(42);
    Box<std::string> string_box("hello");

    std::cout << int_box.get_value() << '\n';
    std::cout << string_box.get_value() << '\n';
}