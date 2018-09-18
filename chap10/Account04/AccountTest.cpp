//銀行口座クラス（第４版）の利用例

#include <string>
#include <iostream>
#include "Account.h"

using namespace std;

//pが指すAccountの口座情報（口座名義・口座番号・預金残高）を表示
void print_Account(string title, Account* p)
{
    cout << title
         << p->name() << "\"（" << p->no() << "）" << p->balance() << "円\n";
}

int main()
{
    Account suzuki("鈴木龍一", "12345678", 1000); //鈴木君の口座
    Account takeda("武田浩文", "87654321", 200); //武田君の口座

    suzuki.withdraw(200); //鈴木君が200円おろす
    takeda.deposit(100); //武田君が100円預ける

    print_Account("■鈴木君の口座：", &suzuki);
    print_Account("■武田君の口座：", &takeda);
}
//g++ -c Account.cpp -o Account.o
//g++ -c AccountTest.cpp -o AccountTest.o
//この２行で分割コンパイルをして二つのオブジェクトファイルを作成する
//g++ Account.o AccountTest.o
//そして二つのオブジェクトファイルを同時にコンパイル？？するとa.outという実行ファイルが作成されるため、その実行ファイルを実行すると理想の結果になる？？？？？？？？？？