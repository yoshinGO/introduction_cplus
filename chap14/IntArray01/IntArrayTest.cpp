//整数配列クラスIntArray（第１版）の利用例

#include <iostream>
#include "IntArray.h"

using namespace std;

int main()
{
    int n;

    cout << "要素数を入力せよ：";
    cin >> n;

    IntArray x(n); //要素数nの配列

    for(int i = 0; i < x.size(); i++)
      x[i] = i;

    for(int i = 0; i < x.size(); i++)
      cout << "x[" << i << "] = " << x[i] << '\n';
}