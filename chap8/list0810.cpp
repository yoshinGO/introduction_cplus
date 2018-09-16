//ポインタによる文字列の書き換え
#include <iostream>

using namespace std;

int main()
{
    char* p = "ABC";

    cout << "p = \"" << p << "\"\n";

    p = "XYZ";//書き換え可能！

    cout << "p = \"" << p << "\"\n";
}