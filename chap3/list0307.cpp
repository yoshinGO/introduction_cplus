//読み込んだ個数だけ+と-を交互に表示
#include <iostream>

using namespace std;

int main()
{
    int n;//nは整数型。
    cout << "何個表示しますか：";
    cin >> n;

    if(n > 0){
      int i = 0;
      while(i < n/2){
        cout << "+-";
        i++;
      }
      if(n%2) cout << '+';//nが奇数なら最後に+を表示(2で割ったあまりが０でないならば表示)
      cout << '\n';
    }
}