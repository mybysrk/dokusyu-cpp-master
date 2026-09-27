#include <iostream>

int& function()
{
    int value = 0;
    return value;
}

int main()
{
    int& value = function(); // 返された参照をそのまま参照として受け取る
    value = 100; // 参照なのでvalueが変わる
    std::cout << value << std::endl;
}