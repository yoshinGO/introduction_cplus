//二つの変数xと変数yの合計と平均を表示（変数を明示的に初期化）
#include <iostream>

using namespace std;

int main()
{
    int x = 63;//xはint型の変数（63で初期化）
    int y = 18;//yはint型の変数（18で初期化）

//初期化は以下の形式でも行える
    //int x(63);
    //int x{63};
    //int x = {63};

    cout << "xの値は"<< x <<"です。\n";//xの値を表示
    cout << "yの値は"<< y <<"です。\n";//yの値を表示
    cout << "合計は"<< x + y<<"です。\n";//xとyの合計を表示
    cout << "平均は"<<(x + y)/2<<"です。\n";//xとyの平均を表示
}