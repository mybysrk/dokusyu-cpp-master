#include <iostream>

class A
{
    int v;

public:
    void set(int value);
    int& get();
    const int& get() const;
};

void A::set(int value)
{
    v = value;
}

int& A::get()
{
    return v;
}

const int& A::get() const
{
    return v;
}

int main()
{
    A a;
    a.set(42);

    int& ref = a.get();
    ref = 100;

    const A& ca = a;
    const int& cref = ca.get();
    std::cout << cref << '\n';
}