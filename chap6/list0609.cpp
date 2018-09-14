//右下が直角の直角二等辺三角形を表示(関数版)
//関数の汎用性を高める

#include <iostream>

using namespace std;

//文字cをn個連続表示
void put_nchar(char c, int n)
{
    while(n-- > 0)
      cout << c;
}

int main()
{
    int n;

    cout << "右下直角の二等辺三角形を表示します。" << endl;
    cout << "段数は：";
    cin >> n;

    for(int i = 1; i<=n; i++){//全部でn行
      put_nchar(' ', n-i); //文字' 'をn-1個表示
      put_nchar('*', i);//文字'*'をi個表示
      cout << endl;//改行する
    }
}