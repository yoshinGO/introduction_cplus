//0.0から1.0まで0.001単位で増やして合計を表示(繰り返しをfloatで制御)

#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    float sum = 0.0F;
    cout << fixed << setprecision(6);
    for(float x = 0.0F; x!=1.0F; x += 0.001F){//xの値がぴったり1.0になることはないため、1.0を通り越してfor文は延々と繰り返しが続く
      cout << "x =" << x << endl;
      sum += x;
    }

    cout << "sum = "<<sum <<'\n';
}