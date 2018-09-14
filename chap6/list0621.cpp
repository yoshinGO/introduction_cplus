//自動記憶域期間と静的記憶域期間
#include <iostream>

using namespace std;

int fx; //静的記憶域期間(0で初期化される)

int main()
{
    static int sx;//静的記憶域期間(0で初期化される)
    //定値オブジェクトの宣言であるconstと間違えないように。

    int ax; //自動記憶域期間(不定値で初期化される)

    cout << "ax = " << ax << '\n';
    cout << "sx = " << sx << '\n';
    cout << "fx = " << fx << '\n';
}