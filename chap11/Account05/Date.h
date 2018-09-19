//日付クラスDate（第２版：ヘッダ部）
//改良版としてインクルードガードを定義

#ifndef ___Class_Date
#define ___Class_Date

#include <string>
#include <iostream>

class Date{
  int y; //西暦年
  int m; //月
  int d; //日

public:
  Date(); //デフォルトコンストラクタ
  Date(int yy, int mm = 1, int dd = 1);//コンストラクタ

  int year() const{return y;}
  int month() const{return m;}
  int day() const{return d;}

  Date preceding_day() const; //前日の日付を返却（閏年に非対応）

  int day_of_week() const; //曜日を返却

  std::string to_string() const; //文字列表現を返却

};

std::ostream& operator<<(std::ostream& s, const Date& x); //挿入子
std::istream& operator>>(std::istream& s, Date& x); //抽出子

#endif