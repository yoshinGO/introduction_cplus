//整数配列クラスIntArray（第３版）の利用例
#include <iomanip>
#include <iostream>
#include "IntArray.h"

using namespace std;

int main()
{
    int n;
    cout << "aの要素数：";
    cin >> n;

    IntArray a(n); //要素数nの配列

    for (int i = 0; i < a.size(); i++)
        a[i] = i;

    IntArray b(128); //要素数128の配列
    IntArray c(256); //要素数256の配列

    cout << "bとcの要素数は" << b.size() << "と" << c.size();
    c = b = a;
    cout << "から" << b.size() << "と" << c.size() << "に変わりました。\n";

    IntArray d = b; //初期化

    cout << "    a    b    c    d\n";
    cout << "------------------\n";
    for (int i = 0; i < n; i++){
        cout << setw(5) << a[i] << setw(5) << b[i]
             << setw(5) << c[i] << setw(5) << d[i] << '\n';
    }
}