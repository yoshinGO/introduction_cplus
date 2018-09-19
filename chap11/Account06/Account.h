//銀行口座クラス（第６版：ヘッダ部）

#ifndef ___Class_Account
#define ___Class_Account

#include <string>
#include "Date.h"//クラスAccountの中にクラスDate型のデータメンバがあるため。

class Account {
  std::string full_name; //口座名義
  std::string number; //口座番号
  long crnt_balance; //預金残高
  Date open; //口座開設日

public:
  //コンストラクタ
  Account(std::string name, std::string num, long amnt, const Date& op);

  //メンバ関数(コンストラクタもメンバ関数の一つであるが)
  void deposit(long amnt); //預ける
  void withdraw(long amnt); //おろす

  std::string name() const {return full_name; }//口座名義を調べる
  std::string no() const {return number; }//口座番号を調べる
  long balance() const {return crnt_balance; }//預金残高を調べる
  Date opening_date() const {return open; }//口座開設日を調べる
};//クラスの定義完了(ヘッダ部のみだが)

#endif