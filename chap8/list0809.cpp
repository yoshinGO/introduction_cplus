//配列による文字列の書き換え
#include <iostream>

using namespace std;

int main()
{
    char s[] = "ABC";

    cout << "s = \"" << s << "\"";

    s = "XYZ";//エラー

    cout << "s = \"" << s << "\"";
}

コンパイルエラーのため実行不可