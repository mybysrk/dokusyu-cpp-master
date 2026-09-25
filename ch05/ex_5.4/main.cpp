#include <iostream>
#include <string>

class Person
{
private:
    std::string name;
    int age;

public:
    // コンストラクター①：引数なし
    Person()
    {
        name = "未設定";
        age = 0;
        std::cout << "引数なしのコンストラクター" << std::endl;
    }

    // コンストラクター②：名前だけ
    Person(std::string n)
    {
        name = n;
        age = 0;
        std::cout << "名前ありのコンストラクター" << std::endl;
    }

    // コンストラクター③：名前と年齢
    Person(std::string n, int a)
    {
        name = n;
        age = a;
        std::cout << "名前＋年齢のコンストラクター" << std::endl;
    }

    void show()
    {
        std::cout << "名前: " << name
                  << ", 年齢: " << age << std::endl;
    }
};

int main()
{
    // 引数なし → Person()
    Person* p1 = new Person();

    // stringを1つ → Person(string)
    Person* p2 = new Person("田中");

    // stringとint → Person(string, int)
    Person* p3 = new Person("佐藤", 25);

    p1->show();
    p2->show();
    p3->show();

    // 動的確保したのでdeleteする
    delete p1;
    delete p2;
    delete p3;

    return 0;
}