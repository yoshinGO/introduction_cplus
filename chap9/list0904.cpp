//二値の最大値を求める関数テンプレートと明示的な特殊化

#include <iostream>

using namespace std;

//a, bの大きいほうの値を求める
template <class Type> Type maxof(Type a, Type b)
{
    return a > b ? a : b;
}

//a, bの大きい方の値を求める（const char*型の特殊化）
template <> const char* maxof<const char*>(const char* a, const char* b)//明示的な特殊化
{
    return strcmp(a, b) > 0 ? a:b;
}
int main()
{
    int a, b;
    double x;
    char s[64], t[64];

    cout << "整数a："; cin >> a;
    cout << "整数b："; cin >> b;

    cout << "実数x："; cin >> x;

    cout << "文字列s："; cin >> s;
    cout << "文字列t："; cin >> t;

    cout << "aとbで大きいのは" << maxof(a, b) << "です。\n";
    cout << "aとxで大きいのは" << maxof<double>(a, x) << "です。\n";//明示的な具現化

    cout << "sとtで大きいのは" << maxof<const char*>(s, t) << "です。\n";
    cout << "sと\"ABC\"で大きいのは" << maxof<const char*>(s, "ABC") << "です。\n";
}