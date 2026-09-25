#include <string>
#include <iostream>

class Book
{
    std::string title;
    std::string writer;
    int         price;

public:
    Book() : title(""), writer(""), price(0) {}
    Book(std::string title, std::string writer, int price)
        : title(title), writer(writer), price(price)
    {
    }
    int getPrice() const { return price; }
    std::string getTitle() const { return title; }
    std::string getWriter() const { return writer; }
};

int main()
{
    Book book1; // デフォルトコンストラクターが呼ばれる
    Book book2("C++入門", "山田太郎", 3000); // 引数付きコンストラクターが呼ばれる
    std::cout << "book1: " << book1.getTitle() << ", " << book1.getWriter() << ", " << book1.getPrice() << std::endl;
    std::cout << "book2: " << book2.getTitle() << ", " << book2.getWriter() << ", " << book2.getPrice() << std::endl;
    return 0;
}