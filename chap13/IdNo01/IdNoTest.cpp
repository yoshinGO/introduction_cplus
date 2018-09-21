//識別番号クラスIdNo（第１版）の利用例

#include <iostream>
#include "IdNo.h"

using namespace std;

int main()
{
    IdNo a; //識別番号１番
    IdNo b; //識別番号２番
    IdNo c[4]; //識別番号３番〜６番

    cout << "aの識別番号：" << a.id() << '\n';
    cout << "bの識別番号：" << b.id() << '\n';
    for(int i = 0; i < 4; i++)
      cout << "c[" << i << "]の識別番号：" << c[i].id() << '\n';
}