//名前を尋ねて挨拶（文字列の読み込みと表示）

#include <iostream>

using namespace std;

int main()
{
    char name[36];

    cout << "お名前は：";
    cin.getline(name, 36, '\n');//読み込む文字数に制限を設けることができる。
    // cin >> name;

    cout << "こんにちは、" << name << "さん！！\n";
}