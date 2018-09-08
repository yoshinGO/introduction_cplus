//正の整数値を0までカウントダウン(その２)

#include <iostream>

using namespace std;

int main()
{
    int x;

    cout << "カウントダウンします。\n";

    do{
        cout << "正の整数値：";
        cin >> x;
    }while(x <= 0);//0または負の値が入力された場合は繰り返す

    while(x >= 0){
        cout << x-- << "\n";//xの値を表示した後にデクリメント
    }
}