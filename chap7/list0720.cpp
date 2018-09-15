//配列オブジェクトを繰り返し動的に生成（例外発生を抑制）
#include <cstddef>
#include <iostream>

using namespace std;

int main()
{
    cout << "要素数3000000のdouble型配列を繰り返し生成します。\n";

    while(true){
      double* a = new(nothrow)double[3000000];//生成（例外発生を抑制）

      if(a == NULL){
        cout << "配列の生成に失敗しましたのでプログラムを中断します。\n";
        return 1;
      }
    }
}