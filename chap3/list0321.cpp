//面積がnで縦横が整数の長方形の辺の長さを列挙

#include <iostream>

using namespace std;

int main()
{
    int n;//面積
    cout << "面積は：";
    cin >> n;

    for(int i=1; i<n; i++){
      if(i*i > n)break;
      if(n%i != 0)continue;
      cout << i << "x" << n/i << '\n';
    }
}