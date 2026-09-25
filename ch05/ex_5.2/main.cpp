#include <iostream>
#include <string>


class product
{
    int id;
    std::string name;
    double price;

    public:
        product(int id, std::string name, double price) 
            : id(id), name(name), price(price) {}
        product();
        void display() const;
};

void product::display() const
{
    std::cout << "ID: " << id << ", Name: " << name << ", Price: $" << price << std::endl;
}

product::product() : id(0), name(""), price(0.0) {}
product::product(int id, std::string name, double price) : id(id), name(name), price(price) {}

int main()
{
    product p[4] =
    {
        product(1, "Apple", 0.99),
        product(2, "Banana", 0.59),
        product(), // p[2] をデフォルトコンストラクターで初期化
        product() // p[3] をデフォルトコンストラクターで初期化
    };

    for (int i = 0; i < 4; i++)
    {
        p[i].display();
    }

    return 0;
}