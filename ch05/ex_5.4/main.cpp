#pragma warning(disable : 4819)

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
    // 各要素を異なるコンストラクタで初期化する動的配列
    Person* persons = new Person[5]
    {
        Person("田中"),
        Person("佐藤", 25),
        Person(),
    };

    for (int i = 0; i < 3; ++i)
    {
        persons[i].show();
    }

    // 動的確保したのでdelete[]で解放する
    delete[] persons;

    return 0;
}