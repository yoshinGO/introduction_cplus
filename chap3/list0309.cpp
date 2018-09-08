//正の整数値を読み込んで逆から表示

#include <iostream>

using namespace std;

int main()
{
    int x;

    cout << "正の整数値を逆から表示します。\n";
    do{
        cout << "正の整数値：";
        cin >> x;
    }while(x <= 0);//0または負の数のときにループする。

    cout << "逆から読むと";
    while(x > 0){
        cout << x%10;//xの最下位桁を表示
        x /= 10; //xを10で割って更新する
    }
    cout << "です。\n";
}