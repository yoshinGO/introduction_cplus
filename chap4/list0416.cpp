//0.0から1.0まで0.01単位で増やして合計を表示(繰り返しをintで制御)

#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    float sum = 0.0F;
    cout << fixed << setprecision(6);

    for(int i=0; i<=1000; i++){
      float x =static_cast<float>(i)/1000;
      cout << "x = " << x << '\n';
      sum += x;
    }
    cout << "sum = " << sum << '\n';
}