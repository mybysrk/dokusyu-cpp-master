#include <iostream>

//ベースクラス
class Base
{
    void private_member() // privateメンバー
    {
        std::cout << "Base::private_member()" << std::endl;
    }


public:
    void public_member() // publicメンバー
    {
        std::cout << "Base::public_member()" << std::endl;
    }
};

class Derived : private Base // Baseを非公開で派生
{
public:
    void member_test();      
};

void Derived::member_test()
{
    // NG。基底クラスのprivateメンバーには派生クラスからアクセスできない
    // private_member();

    // OK。基底クラスのpublicメンバーには派生クラスからアクセスできる
    public_member();
}

int main()
{
    Base base;
    Derived derived;

   // base.private_member();  NG。基底クラスのprivateメンバーには外部からアクセスできない
    base.public_member(); // OK。基底クラスのpublicメンバーには外部からアクセスできる
    
    // NG。非公開で派生しているので、基底クラスのpublicメンバーは外部からアクセスできない
    // derived.public_member();

    // OK。公開メンバーには外部からもアクセスできる
    derived.member_test();
}

