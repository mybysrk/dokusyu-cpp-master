#include <iostream>

template <typename T>
class Base
{
public:
    virtual T get_value() const
    {
        return T{};
    }

    virtual ~Base() = default;
};

template <typename T>
class Derived : public Base<T>
{
    T value;

public:
    explicit Derived(T value) : value(value) { }

    T get_value() const override
    {
        return value;
    }
};

int main()
{
    Base<int> base;
    Derived<int> derived(42);
    Base<int>* object = &derived;

    std::cout << base.get_value() << '\n';
    std::cout << object->get_value() << '\n';
}