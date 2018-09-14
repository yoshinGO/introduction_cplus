//他の関数の呼び出し
//正方形と長方形を表示

#include <iostream>
// #include <cstdlib>
using namespace std;

//文字cをn個連続表示
void put_nchar(char c, int n)
{
    while (n-- >0)
      cout << c;
    // abort();
}

//文字cを並べて一辺の長さがnの正方形を表示
void put_square(int n, char c)//仮引数は2つ
{
    for(int i=1; i<=n; i++){//全部でn行
      put_nchar(c, n);//文字cをn個表示して
      cout << endl;//改行する
    }
}

//文字cを並べて高さがhで横幅がwの長方形を表示
void put_rectangle(int h, int w, char c)//仮引数が3つある
{
    for(int i=1; i<=h; i++){//全部でh行
      put_nchar(c, w);//文字cをw個表示して
      cout << endl;//改行する。
    }
}

int main()
{
    int n, h, w;

    cout << "正方形を表示します。" << endl;
    cout << "一辺は："; cin >> n;
    put_square(n, '*');

    cout << "長方形を表示します。"<<endl;
    cout << "高さは："; cin >> h;
    cout << "横幅は："; cin >> w;

    put_rectangle(h, w, '+');//高さがhで幅がwの長方形を+で表示
}