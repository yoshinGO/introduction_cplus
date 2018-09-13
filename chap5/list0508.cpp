//配列の要素の並びを反転して表示

#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    const int n=7;//定値オブジェクトのため配列の要素数の定義に用いることができる。
    int a[n];

    srand(time(NULL));//乱数の種を初期化
    for(int i=0; i<n; i++){
      a[i] = rand() % 100;
      cout << "a[" << i << "]=" << a[i] << endl;
    }

    for(int i=0; i< n/2; i++){
      int t = a[i];
      a[i] = a[(n-1)-i];//n-1が最後の要素
      a[(n-1)-i] = t;
    }//a[i]とa[(n-1)-i]の交換

    cout << "要素の並びを変更しました。\n";
    for(int i=0; i<n; i++)
      cout << "a[" << i << "]=" << a[i] << endl;
}
