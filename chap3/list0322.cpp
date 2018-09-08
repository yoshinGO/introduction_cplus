//復帰の出力によって表示ずみ文字を書き換える

#include <iostream>

using namespace std;

int main()
{
    cout << "ABCDEFGHIJKLMN";//改行なし
    cout << "\r12345\n";// \rによってその行の先頭に表示される(上書きされる。)
}