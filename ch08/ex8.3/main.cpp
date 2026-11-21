#include <iostream>

int main()
{
    char buffer[256];

    while (true)
    {
        std::cout << "行を入力してください（空行で終了）: ";
        std::cin.getline(buffer, sizeof(buffer));

        if (!std::cin || buffer[0] == '\0')
        {
            break;
        }

        std::cout << buffer << std::endl;
    }
}