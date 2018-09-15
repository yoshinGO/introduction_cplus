//オブジェクトのアドレスを表示
#include <iostream>

using namespace std;

int main()
{
    int n;
    double x;

    cout << "nのアドレス：" << &n << '\n';//アドレス演算子&でオブジェクトのアドレスを取得
    cout << "xのアドレス：" << &x << '\n';
}