//九九の表を表示

#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    for(int i=1; i<=9; i++){//行ループ(1の段、2の段、・・・)
        for(int j = 1; j <= 9; j++)//列ループ
          cout << setw(3) << i*j;
        cout << "\n";//iの段が表示できたら改行
    }
}