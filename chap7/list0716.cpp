//整数オブジェクトを動的に生成

#include <iostream>

using namespace std;

int main()
{
    int* x = new int; //生成（記憶域の確保）

    cout << "整数：";
    cin >> *x;
    cout << "*x = " << *x << '\n';//生成したオブジェクトは*xとしてアクセスできる

    delete x; //破棄（記憶域の解放）
}