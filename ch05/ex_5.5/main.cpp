#include <initializer_list>
#include <iostream>

class Sample
{
public:
    Sample(std::initializer_list<int> values)
    {
        std::cout << "要素数: " << values.size() << "\n";

        for (int v : values)
        {
            std::cout << v << ' ';
        }
        std::cout << '\n';
    }
};

int main()
{
    Sample s1{ 10, 20, 30, 40 };
    Sample s2{ 1, 2, 3 };
}
