//読み込んだ整数を加算(負の値は加算しない)

#include <iostream>

using namespace std;

int main()
{
    int n; //加算する個数
    cout << "整数を加算します。\n";
    cout << "何個加算しますか：";
    cin >> n;

    int sum = 0;//合計値

    for(int i=0; i<n; i++){
      int t;
      cout << "整数";
      cin >> t;
      if(t<0){
          cout << "\a負の値は加算せずスキップします。\n";
          continue;//加算の部分をスキップしてfor文の頭に戻る
      }
      sum += t;
    }
    cout << "合計は" << sum << "です。\n";
}