#include <iostream>

void reverse(int* array, int size)
{
    for (int i = 0; i < size / 2; ++i)
    {
        int temp = array[i];
        array[i] = array[size - 1 - i];
        array[size - 1 - i] = temp;
    }
}

int main()
{
    int array[] = { 0, 1, 2, 3, 4 };
    reverse(array, 5);

    std::cout << array[0] << std::endl;
    std::cout << array[1] << std::endl;
    std::cout << array[2] << std::endl;
    std::cout << array[3] << std::endl;
    std::cout << array[4] << std::endl;
}