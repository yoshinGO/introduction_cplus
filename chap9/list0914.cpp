//二つの名前空間
#include <iostream>

using namespace std;

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
  int x = 2;
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
    cout << "English::x = " << English::x << '\n';
    English::print_x();
    English::hello();

    cout << "Japanise::x = " << Japanise::x << '\n';
    Japanese::print_x();
    Japanese::hello();
}