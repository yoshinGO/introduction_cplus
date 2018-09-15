//n行3列の２次元配列の全構成要素に同一値を代入

#include <iomanip>
#include <iostream>

using namespace std;

//"intを要素型とする要素数３の配列"を要素型とする要素数nの配列(n行3列の２次元配列)の全構成要素にvを代入
void fill(int (*a)[3], int n, int v)//第三引数vではnoを受け取る
{
    for(int i = 0; i < n; i++)
        for(int j = 0; j < 3; j++)
          a[i][j] = v; //i行の要素全てにvの値が格納される
}

int main()
{
    int no;
    int x[2][3] = {0};//２行３列(要素数3の配列を2個格納できる多次元配列)
    int y[4][3] = {0};

    cout << "全構成要素に代入する値：";
    cin >> no;

    fill(x, 2, no);//xの全構成要素にnoを代入
    fill(y, 4, no);//yの全構成要素にnoを代入

    cout << "--- x ---\n";
    for(int i=0; i<2; i++){
      for(int j = 0; j<3; j++)
        cout << setw(3) << x[i][j];
      cout << '\n';
    }

    cout << "--- y ---\n";
    for(int i=0; i<4; i++){
      for(int j = 0; j<3; j++)
        cout << setw(3) << y[i][j];
      cout << '\n';
    }
}