#include <iostream>

int main()
{
    int choice;

    std::cout << "あんを選んでください（1: こしあん、2: 粒あん）：";
    if (!(std::cin >> choice) || (choice != 1 && choice != 2)) {
        std::cerr << "1または2を入力してください。\n";
        return 1;
    }

    std::cout << "\n=== ";
    if (choice == 1) {
        std::cout << "白い饅頭（こしあん）";
    } else {
        std::cout << "黒い饅頭（粒あん）";
    }
    std::cout << "のつくりかた ===\n\n";

    std::cout << "【材料：8個分】\n";
    if (choice == 1) {
        std::cout << "薄力粉      200g\n";
    } else {
        std::cout << "薄力粉      196g\n";
        std::cout << "食用竹炭パウダー 4g\n";
    }
    std::cout << "砂糖         60g\n";
    std::cout << "ベーキングパウダー 小さじ1\n";
    std::cout << "水           80ml\n";
    if (choice == 1) {
        std::cout << "こしあん    240g（1個あたり30g）\n\n";
    } else {
        std::cout << "粒あん      240g（1個あたり30g）\n\n";
    }

    std::cout << "【作り方】\n";
    if (choice == 1) {
        std::cout << "1. こしあんを8等分して丸めます。\n";
    } else {
        std::cout << "1. 粒あんを8等分して丸めます。\n";
    }
    if (choice == 1) {
        std::cout << "2. 薄力粉とベーキングパウダーをボウルに入れ、よく混ぜます。\n";
    } else {
        std::cout << "2. 薄力粉、食用竹炭パウダー、ベーキングパウダーをボウルに入れ、よく混ぜます。\n";
    }
    std::cout << "3. 別のボウルで砂糖と水を混ぜ、粉に少しずつ加えます。\n";
    std::cout << "4. 粉っぽさがなくなるまで混ぜ、生地をひとまとめにします。\n";
    std::cout << "5. 生地を8等分し、それぞれを丸く広げて、あんを包みます。\n";
    std::cout << "6. クッキングシートにのせ、蒸気の上がった蒸し器で12～15分蒸します。\n";
    std::cout << "7. 生地に火が通ったら、少し冷ましてできあがりです。\n\n";

    std::cout << "※ 蒸し器や蒸気は熱いので、やけどに注意してください。\n";
    if (choice == 2) {
        std::cout << "※ 食用の竹炭パウダーを使用してください。\n";
    }
}