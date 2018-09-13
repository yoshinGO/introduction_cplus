//配列の各要素に1, 2, 3, 4, 5を初期化して表示

#include <iostream>

using namespace std;

int main()
{
    int a[5] = {1, 2, 3, 4, 5};//要素型がint型で要素数5の配列

    for(int i= 0; i<5; i++)
      cout << "a[" << i << "] =" << a[i] << endl;
}