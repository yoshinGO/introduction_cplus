//暗算トレーニング
#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

//続行の確認
bool confirm_retry()//引数を受け取らない
{
    int retry;
    do{
      cout << "もう一度？<yes:1 / no:0>：";
      cin >> retry;
    }while(retry != 0 && retry != 1);
    return static_cast<bool>(retry); //bool型にキャストした値を返却
}

int main()
{
    srand(time(NULL));
    cout << "暗算トレーニング開始！！";

    do{
      int x = rand() % 900 + 100; //３桁の数
      int y = rand() % 900 + 100; //３桁の数
      int z = rand() % 900 + 100; //３桁の数

      while(true){
        int k; //読み込んだ値の和
        cout << x << "+" << y << "+" << z << "=";
        cin >> k;

        if(k == x + y + z)//正解
          break;
        cout << "違いますよ！\n";
      }
    }while(confirm_retry());//引数を与えない
}