//プログラム名・プログラム仮引数の表示（その１）

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  for(int i = 0; i < argc; i++)
    cout << "argv[" << i << "] = " << argv[i] << '\n';

  return 0;
}