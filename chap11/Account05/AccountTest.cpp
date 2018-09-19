//銀行口座クラス（第５版）の利用例
#include <iostream>
#include "Account.h"

using namespace std;

int main()
{
    Account suzuki("鈴木龍一", "12345678", 1000, 2125, 1, 24);
    Account takeda("武田浩文", "87654321", 200, 2123, 7, 15);

    suzuki.withdraw(200);//鈴木君が200円下ろす
    takeda.deposit(100); //武田君が100円預ける

    cout << "鈴木君の口座\n";
    cout << "口座名義＝"<< suzuki.name() <<'\n';
    cout << "口座番号＝"<< suzuki.no() <<'\n';
    cout << "預金残高＝"<< suzuki.balance() <<"円\n";
    cout <<  "開設日＝"<< suzuki.opening_date() << '\n';

    cout << "武田君の口座\n";
    cout << "口座名義＝"<< takeda.name() <<'\n';
    cout << "口座番号＝"<< takeda.no() <<'\n';
    cout << "預金残高＝"<< takeda.balance() <<"円\n";
    cout <<  "開設日＝"<< takeda.opening_date().year() << "年"
                      << takeda.opening_date().month() << "月"
                      << takeda.opening_date().day() << "日\n";
}

  // Date opening_date() const {return open; }//口座開設日を調べる