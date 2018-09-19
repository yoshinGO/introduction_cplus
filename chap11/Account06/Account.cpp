//銀行口座クラス（第６版：ソース部）

#include <string>
#include <iostream>
#include "Account.h"

using namespace std;

Account::Account(string name, string num, long amnt, const Date& op) :full_name(name), number(num), crnt_balance(amnt), open(op)
{
    // full_name = name; //口座名義
    // number = num; //口座番号
    // crnt_balance = amnt; //預金残高

  //コンストラクタの中身は空になる
}

//預ける
void Account::deposit(long amnt)
{
    crnt_balance += amnt;
}

//おろす
void Account::withdraw(long amnt)
{
    crnt_balance -= amnt;
}
