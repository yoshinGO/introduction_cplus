//二つの引数の値を交換する関数(間違い)

#include <iostream>

using namespace std;

//引数xと引数yの値を交換(間違い)
void swap(int x, int y)
{
    int t = x;
    x = y;
    y = t;
}

int main()
{
    int a, b;

    cout << "変数a："; cin >> a;
    cout << "変数b："; cin >> b;

    swap(a, b);

    cout <<"変数aとbの値を交換しました。\n";
    cout <<"変数aの値は" << a << "です。\n";
    cout <<"変数bの値は" << b << "です。\n";

    cout <<"値渡しの関数では交換できません。\n";
}