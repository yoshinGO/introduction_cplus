//単なる文字型の符号付き/符号なしを判定
#include <climits>
#include <iostream>

using namespace std;

int main()
{
    cout << "この処理系の単なる文字型は"
         << (CHAR_MIN ? "符号付き":"符号なし") << "文字型です。\n";
}//char :-128~127であるからこのmacのcharは符号付きの文字型。
//つまりcharとsingen charは同じ