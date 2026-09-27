#include <iostream>
#include <string>

class Sample
{
    std::string value;

public:
    Sample(std::string v) : value(v)
    {
        std::cout << "コピーコンストラクタ/通常コンストラクタ\n";
    }

    Sample(const Sample& other) : value(other.value)
    {
        std::cout << "コピーコンストラクタが呼ばれた\n";
    }

    Sample(Sample&& other) noexcept : value(std::move(other.value))
    {
        std::cout << "ムーブコンストラクタが呼ばれた\n";
    }
};

int main()
{
    Sample a("hello");

    Sample b = a;      // コピーコンストラクタ
    Sample c(std::move(a));// ムーブコンストラクタ
}
