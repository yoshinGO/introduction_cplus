//日付クラスDate（第２版：ソース部）

#include <ctime>
#include <sstream>
#include <iostream>
#include "Date.h"

using namespace std;

//Dateのデフォルトコンストラクタ（引数が与えられなかった場合は今日の日付に設定）
Date::Date()
{
    time_t current = time(NULL); //現在の暦時刻を取得
    struct tm* local = localtime(&current); //要素別の時刻に変換

    y = local->tm_year + 1900; //年：tm_yearは西暦年-1900
    m = local->tm_mon + 1; //月：tm_monは0~11
    d = local->tm_mday; //日
}

//Dateのコンストラクタ（指定された年月日に設定）
Date::Date(int yy, int mm, int dd)
{
    y = yy;
    m = mm;
    d = dd;
}

//前日の日付を返却（閏年に非対応）
Date Date::preceding_day() const
{
    int dmax[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    Date temp = *this; //同一の日付

    if(temp.d > 1)//その日付が1ではないとき
      temp.d--;
    else{//その日付が1ならば
      if(--temp.m <1){//その月が1月ならば（つまり一月一日ならば）
        temp.y--;//年を一つ下げる
        temp.m = 12; //12月にする
      }
      temp.d = dmax[temp.m - 1];
    }
    return temp;//更新された年月日を返却
}

//文字列表現を返却
string Date::to_string()const
{
    ostringstream s;
    s << y << "年" << m << "月" << d << "日";
    return s.str();
}

//出力ストリームsにxを挿入
ostream& operator<<(ostream& s, const Date& x)
{
    return s << x.to_string();
}

//入力ストリームsから日付を抽出してxに格納
istream& operator>>(istream& s, Date& x)
{
    int yy, mm, dd;
    char ch;

    s >> yy >> ch >> mm >> ch >> dd;
     x = Date(yy, mm, dd);
    return s;
}







