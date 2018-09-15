//線形探索(第２版)
#include <iostream>

using namespace std;

//配列aの先頭n個の要素から値keyを線形検索（第２版）

int seq_search(int* a, int n, int key)
{
    int* p = a;

    while(n-- > 0){
      if(*p == key)//探索成功
        return p-a;
      else
        p++;
    }
    return -1; //探索失敗
}

int main()
{
    int key, idx;
    int x[4];//要素数7の配列
    int x_size = sizeof(x) / sizeof(x[0]);//要素数

    for(int i = 0; i<x_size; i++){
      cout << "x[" << i << "]：";
      cin >> x[i];
    }

    cout << "探す値は：";
    cin >> key;

    if( (idx = seq_search(x, x_size, key)) != -1)
      cout << "その値をもつ要素はx[" << idx << "]です。\n";
    else
      cout << "見つかりませんでした。\n";
}