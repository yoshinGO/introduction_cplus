//二つの整数値の和と積を関数によって求める

#include <iostream>

using namespace std;

//xとyの和と積を関数によって求める
void sum_mul(int x, int y, int* sum, int* mul)
{
    *sum = x + y; //xとyの和を*sumに代入
    *mul = x * y; //xとyの積を*mulに代入
}

int main()
{
    int a, b;
    int wa = 0, seki = 0;

    cout << "整数a："; cin >> a;
    cout << "整数b："; cin >> b;

    sum_mul(a, b, &wa, &seki); //aとbの和と積を求める。ポインタを渡す

    cout << "和は" << wa << "です。\n";
    cout << "積は" << seki << "です。\n";
}