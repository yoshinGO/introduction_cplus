//日付クラスDate（メンバ関数呼出し回数カウンタ付き）
#include <iostream>

using namespace std;

class Date {
    int y; //西暦年
    int m; //月
    int d; //日
    mutable int counter; //メンバ関数が呼び出された総回数

public:
    Date(int yy, int mm, int dd){ //コンストラクタ
      y = yy; m = mm; d = dd; counter = 0;
    }
    int year() const{counter++; return y;}
    int month() const{counter++; return m;}
    int day() const{counter++; return d;}
    int count() const{return counter;}
};//クラスの定義完了

int main()
{
    const Date birthday(1963, 11, 18); //誕生日

    cout << "birthday = " << birthday.year() << "年"
                          << birthday.month() << "月"
                          << birthday.day() << "日\n";

    cout << "birthdayのメンバ関数を" << birthday.count()
         << "回呼び出しました。\n";
}