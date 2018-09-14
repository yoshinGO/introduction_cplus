//二値の最大値・三値の最大値を求める関数(多重定義)
//maxという同名の関数を二つ定義している。
#include <iostream>

using namespace std;

//a, bの最大値を返却
int max(int a, int b)
{
    return a > b ? a:b;//大きい方を返却する
}

//a, b, cの最大値を返却
int max(int a, int b, int c)
{
    int max = a;
    if(b > max) max = b;
    if(c > max) max = c;
    return max;
}

int main()
{
    int x, y, z;

    cout << "xの値：";
    cin >> x;

    cout << "yの値：";
    cin >> y;

    //二値の最大値
    cout << "xとyの最大値は"<<max(x, y) << "です。\n\n";

    cout << "zの値：";
    cin >> z;
    cout << "x, y, zの最大値は"<<max(x, y, z) << "です。\n\n";
}