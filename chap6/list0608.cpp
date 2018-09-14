//左下が直角の直角二等辺三角形を表示(関数版)

#include <iostream>

using namespace std;

//文字'*'をn個連続で表示
void put_stars(int n)
{
    while (n-- >0)
      cout << '*';
}

int main()
{
    int n;

    cout << "左下直角の二等辺三角形を表示します。" << endl;
    cout << "段数は：";
    cin >> n;

    for(int i = 1; i<=n; i++){
      put_stars(i);
      cout << endl;
    }
}