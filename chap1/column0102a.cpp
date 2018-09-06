//毎回同じ乱数が生成される

#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{

    int x = rand();
    int y = rand();

    cout << "xの値は" << x <<"で、yの値は"<<y <<"です。\n";

}