//閏年かどうかを調べる
#include <ciso646>
#include <iostream>

using namespace std;

int main()
{
    int y;

    cout <<"年を入力せよ：";
    cin >> y;

    cout << "その年は閏年";
    if((y % 4 == 0 and y % 100 != 0) or y % 400 == 0)//閏年の定義は4で割り切れるかつ100では割り切れない。。。しかし400で割り切れる時は例外で閏年
      cout << "です。\n";
    else
      cout <<"ではありません。\n";
}