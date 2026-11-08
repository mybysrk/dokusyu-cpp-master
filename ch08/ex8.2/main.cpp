#include <iostream>

int main()
{
    // 科学技術表記に変更
    std::cout.setf(std::ios::scientific);
    constexpr double pi = 3.141592653589793;
    std::cout << pi << '\n'; // πを表示

        // basefieldをクリア、つまり基数に関するフラグをクリア
    std::cout.setf(std::ios::oct, std::ios::basefield);
    std::cout.width(8);
    std::cout.fill('-');
    std::cout << 1234 << std::endl;

}