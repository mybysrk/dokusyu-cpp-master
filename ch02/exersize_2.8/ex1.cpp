#include <iostream>

int main()
{
    auto show_value = [](int i) {
        std::cout << i << std::endl;
    };

    show_value(42);
}