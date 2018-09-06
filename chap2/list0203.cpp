//読み込んだ二つの整数値はそれぞれ等しいか？
#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cout << "整数値a：";
    cin >> a;

    cout << "整数値b：";
    cin >> b;

    if(a == b)
      cout <<"二つの値は等しいです。\n";
    else
      cout <<"二つの値は等しくありません。\n";
}