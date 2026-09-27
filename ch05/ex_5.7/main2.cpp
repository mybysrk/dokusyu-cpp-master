#include <iostream>
#include <string>

class Person
{
    std::string name;

public:
    Person(std::string name) : name{ name } {}

    // 非 const オブジェクト用
    std::string& get_name_ref()
    {
        return name;
    }

    // const オブジェクト用
    const std::string& get_name_ref() const
    {
        return name;
    }
};

int main()
{
    Person p{ "Alice" };

    // 非 const オブジェクトなので非 const 版が呼ばれる
    std::string& name_ref = p.get_name_ref();
    name_ref = "Bob";

    // const オブジェクトなので const 版が呼ばれる
    const Person& cp = p;
    const std::string& const_name_ref = cp.get_name_ref();

    std::cout << p.get_name_ref() << '\n';
    std::cout << const_name_ref << '\n';
}
