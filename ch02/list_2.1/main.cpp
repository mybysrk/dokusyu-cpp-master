#include <iostream>

struct product
{
    int score; // 商品ID
    int price; // 単価
    int stock; // 在庫数
}; // このセミコロンを忘れがちなので注意

int main()
{
    product pen; // ペンに関するデータを持つ変数

    // ドット演算子を使ってペンに関する情報をメンバー変数に格納する
    pen.score = 0;
    pen.price = 100;
    pen.stock = 200;

    product* ptr = &pen; // 構造体変数へのポインター

    // アロー演算子を使ってメンバー変数を取得する
    std::cout << "Product Score: " << pen.score << std::endl;
    std::cout << "price: " << ptr->price << std::endl;
    std::cout << "stock: " << ptr->stock << std::endl;
}
