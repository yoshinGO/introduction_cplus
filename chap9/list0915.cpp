//二つの名前空間とusing宣言
#include <iostream>

using namespace std;
long x = 3000000000;

namespace English{
    int x = 1;
    void print_x()
    {
        cout << "The value of x is " << x << ".\n";
    }

    void hello()
    {
        cout << "Hello!\n";
    }
}

namespace Japanese{
  int x = 20000000;
  void print_x()
  {
      cout << "変数xの値は" << x << "です。\n";
  }

  void hello()
  {
      cout << "こんにちは！\n";
  }
}


int main()
{
    using Japanese::hello;//Japanese名前空間の利用を宣言
    cout << "English::x = " << English::x << '\n';
    cout << "Japanese::x = " << Japanese::x << '\n';

    English::hello();
    hello();//Japaneseは不要
    cout << x <<endl;//ファイル有効期間のxが適用される
}