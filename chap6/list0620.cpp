//識別子の有効範囲を確認する
#include <iostream>

using namespace std;

int x = 75;//ファイル有効範囲

void print_x()
{
  cout << "x = " << x <<'\n';
}

int main()
{
    cout << "x = " << x << '\n';

    int x = 999; //ブロック有効範囲①
    cout << "x = " << x << '\n';

    for(int i=1; i<=5; i++){
      int x = i*11; //ブロック有効範囲②
      cout << "x = " << x << '\n';
    }

    cout << "x = " << x << '\n';
    cout << "::x = " << ::x << '\n';//ファイル有効範囲を覗くための窓

    print_x();
}