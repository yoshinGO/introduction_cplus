//配列の最大値を求める（多重定義版）
#include <iostream>

using namespace std;

//要素数nの配列xの最大値を返却（int版）
int maxof(const int x[], int n)
{
    int max = x[0];
    for(int i = 1; i < n; i++)
      if(x[i] > max)
        max = x[i];
      return max;
}

//要素数nの配列xの最大値を返却（double版）
double maxof(const double x[], int n)
{
    double max = x[0];
    for(int i = 1; i < n; i++)
      if(x[i] > max)
        max = x[i];
      return max;
}

int main()
{
    const int isize = 3; //配列ixの要素数
    int ix[isize]; //int型の配列

    //整数配列の最大値
    cout << isize << "個の整数を入力せよ。\n";
    for(int i = 0; i < isize; i++){
      cout << i + 1 << "：";
      cin >> ix[i];
    }

    cout << "最大値は" << maxof(ix, isize) << "です。\n\n";

    const int dsize = 3;//配列dxの要素数
    double dx[dsize]; //double型の配列

    //実数配列の最大値
    cout << dsize << "個の実数を入力せよ。\n";
    for(int i = 0; i<dsize; i++){
      cout << i + 1 << "：";
      cin >> dx[i];
    }

    cout << "最大値は" << maxof(dx, dsize) << "です。\n";
}